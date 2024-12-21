#include "login.h"
#include "ui_login.h"

#include <iostream>
using std::cout;
using std::endl;

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    setWindowTitle("316航空信息管理系统登陆");
    ui->passwordtext->setEchoMode(QLineEdit::Password);
    m_Connect = ConnectDataBase::GetInstance();
    //当自定义信号发出时，关闭此对话框并销毁该对话框的内存
    connect(this, SIGNAL(send()), this, SLOT(close()) );
    connect(this, SIGNAL(send()), this, SLOT(deleteLater()) );
}

Login::~Login() {
    if (ui) {
        delete ui;
        ui = nullptr;
    }
    cout << "delete Login" << endl;
}

int Login::CheckWriting()
{
    if (ui->accounttext->text() == "")
    {
        QMessageBox(QMessageBox::Warning, "账号错误", "账号为空，请输入账号", QMessageBox::Ok).exec();
        return AccountBlank;
    }
    if (ui->passwordtext->text() == "")
    {
        QMessageBox(QMessageBox::Warning, "密码错误", "密码为空，请输入密码", QMessageBox::Ok).exec();
        return PasswordBlank;
    }
    if (ui->accounttext->text() == ui->passwordtext->text())
    {
        QMessageBox(QMessageBox::Warning, "重复错误", "账号密码不得相同", QMessageBox::Ok).exec();
        return RepeatError;
    }
    return Success;
}
int Login::CheckAccount() {
    QString account = ui->accounttext->text();
    QString word = ui->passwordtext->text();

    QString sql = QString("SELECT password FROM account WHERE account = '%1'").arg(account);
    QSqlQuery sqlquery;

    try {
        if (!sqlquery.exec(sql)) {
            qDebug() << "Database query failed:" << sqlquery.lastError().text();
            throw std::runtime_error("Database query execution failed.");
        }

        if (!sqlquery.next()) {
            return AccountWrong; // No matching account
        }

        QString storedPassword = sqlquery.value("password").toString();
        if (word .compare( storedPassword)!=0) {
            return PasswordWrong; // Password mismatch
        }

        return Success; // Login successful
    } catch (const std::exception& e) {
        qDebug() << "Exception caught:" << e.what();
        return WebError;
    }
}
unsigned int Login::BKDRHash(char* str)
{
    unsigned int seed = 131; // 31 131 1313 13131 131313 etc..
    unsigned int hash = 0;

    while (*str)
        hash = hash * seed + (*str++);

    return (hash & 0x7FFFFFFF);
}
void Login::on_loginbutton_clicked() {
    if (Success != CheckWriting())
        return;

    int flag = CheckAccount();
    if (Success == flag) {
        Loginflag = true;
        dosend();
    } else if (WebError == flag) {
        QMessageBox::warning(this, "查询失败", "数据库无法打开，请检查网络配置！", QMessageBox::Ok);
    } else if (AccountWrong == flag) {
        QMessageBox::warning(this, "输入错误", "没有此账号，请确认后重新输入！", QMessageBox::Ok);
    } else if (PasswordWrong == flag) {
        QMessageBox::warning(this, "输入错误", "密码错误，请检查密码是否正确后重新输入！", QMessageBox::Ok);
    }
}
void Login::on_quitbutton_clicked()
{
    exit(0);
}

//发送自定义信号
void Login::dosend()
{
    emit send();
}

void Login::on_enrollbut_clicked()
{
    QString acc = ui->accounttext->text();
    QString word = ui->passwordtext->text();
    QSqlQuery q;
    q.prepare("INSERT into account(account,password) VALUES(:account,:password)");
    q.bindValue(":account",acc);
    q.bindValue(":password",word);
    q.exec();
    if(q.lastError().isValid()){
        qDebug()<<q.lastError().text();
    }
    else
    qDebug()<<"insert successful";
}

