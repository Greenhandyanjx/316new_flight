#include "login.h"
#include "flightmanager.h"
#include "enroll.h"
#include <QApplication>
#include <iostream>
#include<QFile>
QString loadQss(){
    QFile qf(":/style.qss");
    qf.open(QFile::ReadOnly);
    QString style=qf.readAll();
    qf.close();
    return style;
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyleSheet(loadQss());
    auto db = ConnectDataBase::GetInstance();
    if (!db->OpenDataBase())
    {
        qDebug() << "Database connection failed.";
        return EXIT_FAILURE;
    }
    qDebug() << "Database connected successfully.";
    Login* l = new Login;
    int result = 0;
    FlightManager* f = new FlightManager;
    if (!f)
    {
        QMessageBox(QMessageBox::Critical, "错误", "无法初始化主界面", QMessageBox::Ok).exec();
        return EXIT_FAILURE;
    }
    l->show();
    QObject::connect(l, &Login::openenroll, [=]() {
        // 打开注册界面,销毁旧登录界面
        l->e->show();
        l->hide();
    });
    QObject::connect(l->e, &enroll::closed, [=]() {
        l->enrollClosed = true; // 窗口被关闭
        QMessageBox(QMessageBox::Warning,"警告","当前用户信息未填写完成,注册失败!",QMessageBox::Ok).exec();
        l->show();
    });
    QObject::connect(l->e, &enroll::done, [=]() {
        l->show();
        l->setAcc();
        l->e->hide();
    });
    QApplication::processEvents();
    // f->show();
    // QApplication::processEvents();
    QObject::connect(l, &Login::send, [=]() {
        f->show();   // 显示主界面
        f->getuser();
        l->e->deleteLater();
        l->deleteLater(); // 销毁登录窗口
    });
    /*
     * 将登录类与主界面的类通过信号绑定，当login类检查到登陆成功时则会发信号到flightmanager
     * flightmanger接收到信号则会打开主界面，而登陆界面则会销毁
     */
//    a.connect(l, SIGNAL(send() ), f, SLOT(receive()) );

    try
    {
        std::cout << "before exec" << std::endl;
        result = a.exec();
        std::cout << "after exec" << std::endl;
    }
    catch (...)
    {
        QMessageBox::warning(0, "FlightManager crashed!", "Hum, it seems that FlightManager has crashed... Sorry about that :)");
    }

    delete f;
    f = NULL;

    return result;
}
