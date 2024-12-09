/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *accountlabel;
    QLabel *passwordlabel;
    QLineEdit *accounttext;
    QLineEdit *passwordtext;
    QPushButton *loginbutton;
    QPushButton *quitbutton;
    QLabel *titlelabel;
    QPushButton *enrollbut;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(440, 342);
        accountlabel = new QLabel(Login);
        accountlabel->setObjectName("accountlabel");
        accountlabel->setGeometry(QRect(90, 120, 51, 31));
        QFont font;
        font.setPointSize(17);
        accountlabel->setFont(font);
        passwordlabel = new QLabel(Login);
        passwordlabel->setObjectName("passwordlabel");
        passwordlabel->setGeometry(QRect(90, 170, 41, 41));
        passwordlabel->setFont(font);
        accounttext = new QLineEdit(Login);
        accounttext->setObjectName("accounttext");
        accounttext->setGeometry(QRect(150, 120, 151, 24));
        passwordtext = new QLineEdit(Login);
        passwordtext->setObjectName("passwordtext");
        passwordtext->setGeometry(QRect(150, 180, 151, 24));
        loginbutton = new QPushButton(Login);
        loginbutton->setObjectName("loginbutton");
        loginbutton->setGeometry(QRect(220, 260, 91, 41));
        loginbutton->setFont(font);
        quitbutton = new QPushButton(Login);
        quitbutton->setObjectName("quitbutton");
        quitbutton->setGeometry(QRect(330, 260, 91, 41));
        quitbutton->setFont(font);
        titlelabel = new QLabel(Login);
        titlelabel->setObjectName("titlelabel");
        titlelabel->setGeometry(QRect(90, 10, 281, 81));
        QFont font1;
        font1.setPointSize(25);
        titlelabel->setFont(font1);
        titlelabel->setTextFormat(Qt::TextFormat::RichText);
        enrollbut = new QPushButton(Login);
        enrollbut->setObjectName("enrollbut");
        enrollbut->setGeometry(QRect(110, 260, 91, 41));
        enrollbut->setFont(font);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        accountlabel->setText(QCoreApplication::translate("Login", "\350\264\246\345\217\267", nullptr));
        passwordlabel->setText(QCoreApplication::translate("Login", "\345\257\206\347\240\201", nullptr));
        loginbutton->setText(QCoreApplication::translate("Login", "\347\231\273\351\231\206", nullptr));
        quitbutton->setText(QCoreApplication::translate("Login", "\351\200\200\345\207\272", nullptr));
        titlelabel->setText(QCoreApplication::translate("Login", "\350\210\252\347\251\272\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        enrollbut->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
