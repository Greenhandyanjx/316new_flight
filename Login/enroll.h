#ifndef ENROLL_H
#define ENROLL_H

#include <QDate>
#include <QDialog>
#include <QMainWindow>
#include <QMap>
#include <QMessageBox>
#include <QTime>
#include <QVector>
#include "connectdatabase.h"
#include <windows.h>

namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent);
    ~Register();

signals:
    void registered(); // 注册成功信号

private slots:
    //void on_registerButton_clicked(); // 点击注册按钮的槽函数

private:
    Ui::Register *ui;
    ConnectDataBase *m_Connect;
};

#endif // ENROLL_H
