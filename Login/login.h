#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QMessageBox>
#include "connectdatabase.h"
#include "enroll.h"
#include <cstdlib>

namespace Ui
{
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();
    bool Loginflag;
    void dosend();
    void openRegistration() {
        emit openenroll(); // 发送信号通知需要打开注册界面
    }

signals:
    void send();
    void openenroll();

protected:
    int CheckWriting();//查看账号密码栏是否为空
    int CheckAccount();//查看账号密码是否正确
    unsigned int BKDRHash(char* str);//利用哈希函数将密码加密
    int type;
    //槽
private slots:
    void on_quitbutton_clicked();//点击退出按钮所做出的反应
    void on_loginbutton_clicked();//点击登陆所做出的反应

    void on_enrollbut_clicked();

    void on_userckb_toggled(bool checked);

    void on_ckbuser_stateChanged(int arg1);

private:
    enum LoginType { Success, WebError, AccountBlank, AccountWrong, PasswordBlank, PasswordWrong, RepeatError };

    Ui::Login *ui;
    ConnectDataBase* m_Connect;
};

#endif // LOGIN_H
