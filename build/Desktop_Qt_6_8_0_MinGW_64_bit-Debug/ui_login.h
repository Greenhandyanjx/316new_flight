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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *ckbuser;
    QCheckBox *ckbmanager;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(433, 342);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223")});
        Login->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/airplane.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Login->setWindowIcon(icon);
        accountlabel = new QLabel(Login);
        accountlabel->setObjectName("accountlabel");
        accountlabel->setGeometry(QRect(80, 120, 61, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223")});
        font1.setPointSize(17);
        accountlabel->setFont(font1);
        passwordlabel = new QLabel(Login);
        passwordlabel->setObjectName("passwordlabel");
        passwordlabel->setGeometry(QRect(80, 170, 51, 41));
        passwordlabel->setFont(font1);
        accounttext = new QLineEdit(Login);
        accounttext->setObjectName("accounttext");
        accounttext->setGeometry(QRect(150, 120, 151, 24));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        accounttext->setFont(font2);
        accounttext->setStyleSheet(QString::fromUtf8(""));
        passwordtext = new QLineEdit(Login);
        passwordtext->setObjectName("passwordtext");
        passwordtext->setGeometry(QRect(150, 180, 151, 24));
        loginbutton = new QPushButton(Login);
        loginbutton->setObjectName("loginbutton");
        loginbutton->setGeometry(QRect(220, 260, 91, 41));
        loginbutton->setFont(font1);
        quitbutton = new QPushButton(Login);
        quitbutton->setObjectName("quitbutton");
        quitbutton->setGeometry(QRect(330, 260, 91, 41));
        quitbutton->setFont(font1);
        titlelabel = new QLabel(Login);
        titlelabel->setObjectName("titlelabel");
        titlelabel->setGeometry(QRect(90, 10, 281, 81));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223")});
        font3.setPointSize(25);
        titlelabel->setFont(font3);
        titlelabel->setTextFormat(Qt::TextFormat::RichText);
        enrollbut = new QPushButton(Login);
        enrollbut->setObjectName("enrollbut");
        enrollbut->setGeometry(QRect(110, 260, 91, 41));
        enrollbut->setFont(font1);
        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(150, 226, 151, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ckbuser = new QCheckBox(layoutWidget);
        ckbuser->setObjectName("ckbuser");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223")});
        font4.setPointSize(15);
        ckbuser->setFont(font4);

        horizontalLayout->addWidget(ckbuser);

        ckbmanager = new QCheckBox(layoutWidget);
        ckbmanager->setObjectName("ckbmanager");
        ckbmanager->setFont(font4);

        horizontalLayout->addWidget(ckbmanager);

        enrollbut->raise();
        accountlabel->raise();
        passwordlabel->raise();
        accounttext->raise();
        passwordtext->raise();
        loginbutton->raise();
        quitbutton->raise();
        titlelabel->raise();
        layoutWidget->raise();

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "316\350\210\252\347\251\272\347\231\273\351\231\206\347\225\214\351\235\242", nullptr));
        accountlabel->setText(QCoreApplication::translate("Login", "\350\264\246\345\217\267", nullptr));
        passwordlabel->setText(QCoreApplication::translate("Login", "\345\257\206\347\240\201", nullptr));
        loginbutton->setText(QCoreApplication::translate("Login", "\347\231\273\351\231\206", nullptr));
        quitbutton->setText(QCoreApplication::translate("Login", "\351\200\200\345\207\272", nullptr));
        titlelabel->setText(QCoreApplication::translate("Login", "\350\210\252\347\251\272\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        enrollbut->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214", nullptr));
        ckbuser->setText(QCoreApplication::translate("Login", "user", nullptr));
        ckbmanager->setText(QCoreApplication::translate("Login", "manager", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
