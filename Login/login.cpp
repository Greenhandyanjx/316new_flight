#include "login.h"
#include "ui_login.h"
#include "flightmanager.h"
#include <cstdlib>
#include <iostream>
using std::cout;
using std::endl;
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    type=0;
    setWindowTitle("航空信息管理系统登陆");
    ui->passwordtext->setEchoMode(QLineEdit::Password);
    m_Connect = ConnectDataBase::GetInstance();
    //当自定义信号发出时，关闭此对话框并销毁该对话框的内存
    connect(this, SIGNAL(send()), this, SLOT(close()) );
    connect(this, SIGNAL(send()), this, SLOT(deleteLater()) );

    connect(ui->ckbuser, &QCheckBox::toggled, this, &Login::on_userckb_toggled);
    connect(ui->ckbmanager, &QCheckBox::toggled, this, &Login::on_userckb_toggled);
    connect(ui->ckbuser, &QCheckBox::stateChanged, this, &Login::on_ckbuser_stateChanged);
    ui->ckbmanager->setChecked(true);//默认manager
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
//判断选择用户（1）or管理（0）
void Login::on_ckbuser_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        type=1;
    }else{
        type=0;
    }
}
int Login::CheckAccount() {
    QString account = ui->accounttext->text();
    QString word = ui->passwordtext->text();


    QString sql = QString("SELECT password FROM account WHERE account = '%1' and type = '%2'").arg(account).arg(type);
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
        if (word != storedPassword) {
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
        FlightManager::customer_Name=ui->accounttext->text();
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
    q.prepare("INSERT into account(account,password,type) VALUES(:account,:password,:type)");
    q.bindValue(":account",acc);
    q.bindValue(":password",word);
    q.bindValue(":type", type);
    q.exec();
    if(q.lastError().isValid()){
        qDebug()<<q.lastError().text();
    }
    else
        qDebug()<<"insert successful";
}

//用户/管理选择身份登录，两个选项只能选其一
void Login::on_userckb_toggled(bool checked) {
    QCheckBox *senderCheckbox = qobject_cast<QCheckBox*>(sender());

    if (senderCheckbox == ui->ckbuser && checked) {
        ui->ckbmanager->setChecked(false);
    } else if (senderCheckbox == ui->ckbmanager && checked) {
        ui->ckbuser->setChecked(false);
    }
}
