/********************************************************************************
** Form generated from reading UI file 'enroll.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENROLL_H
#define UI_ENROLL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_enroll
{
public:
    QPushButton *newcustomer;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *newnolabel;
    QLabel *newnoshow;
    QHBoxLayout *horizontalLayout_5;
    QLabel *newnamelabel;
    QLineEdit *newnamedit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *newtypelabel;
    QComboBox *newtypeselect;
    QHBoxLayout *horizontalLayout_7;
    QLabel *newidlabel;
    QLineEdit *newidedit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *newsexlabel;
    QComboBox *newsexshow;
    QHBoxLayout *horizontalLayout_9;
    QLabel *newphonelabel;
    QLineEdit *newphonedit;

    void setupUi(QWidget *enroll)
    {
        if (enroll->objectName().isEmpty())
            enroll->setObjectName("enroll");
        enroll->resize(500, 434);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::AddressBookNew));
        enroll->setWindowIcon(icon);
        enroll->setAutoFillBackground(false);
        enroll->setStyleSheet(QString::fromUtf8("QWidget#enroll {\n"
"    background-image: url(:/images/images/login.jpg);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"}\n"
""));
        newcustomer = new QPushButton(enroll);
        newcustomer->setObjectName("newcustomer");
        newcustomer->setGeometry(QRect(350, 380, 91, 43));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223")});
        font.setPointSize(14);
        newcustomer->setFont(font);
        newcustomer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(220,220,220);\n"
"    border-style: solid;\n"
"    border-width: 1px;\n"
"    border-color: aqua;\n"
"	border-radius: 10px;\n"
"    min-height: 25px;\n"
"    color: #000000;\n"
"    padding:4px 20px;\n"
"    margin:4px 4px;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(55,144,250); \n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(44,133,240); \n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:checked {\n"
"    background-color: rgb(55,144,250); \n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed:checked {\n"
"    background-color: rgb(44,133,240);\n"
"    color: #ffffff;\n"
"}"));
        layoutWidget = new QWidget(enroll);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 60, 440, 311));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        newnolabel = new QLabel(layoutWidget);
        newnolabel->setObjectName("newnolabel");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223")});
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setItalic(false);
        newnolabel->setFont(font1);

        horizontalLayout_4->addWidget(newnolabel);

        newnoshow = new QLabel(layoutWidget);
        newnoshow->setObjectName("newnoshow");
        newnoshow->setFont(font1);

        horizontalLayout_4->addWidget(newnoshow);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        newnamelabel = new QLabel(layoutWidget);
        newnamelabel->setObjectName("newnamelabel");
        newnamelabel->setFont(font1);

        horizontalLayout_5->addWidget(newnamelabel);

        newnamedit = new QLineEdit(layoutWidget);
        newnamedit->setObjectName("newnamedit");
        QFont font2;
        font2.setPointSize(18);
        newnamedit->setFont(font2);

        horizontalLayout_5->addWidget(newnamedit);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        newtypelabel = new QLabel(layoutWidget);
        newtypelabel->setObjectName("newtypelabel");
        newtypelabel->setFont(font1);

        horizontalLayout_6->addWidget(newtypelabel);

        newtypeselect = new QComboBox(layoutWidget);
        newtypeselect->setObjectName("newtypeselect");

        horizontalLayout_6->addWidget(newtypeselect);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        newidlabel = new QLabel(layoutWidget);
        newidlabel->setObjectName("newidlabel");
        newidlabel->setFont(font1);

        horizontalLayout_7->addWidget(newidlabel);

        newidedit = new QLineEdit(layoutWidget);
        newidedit->setObjectName("newidedit");

        horizontalLayout_7->addWidget(newidedit);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        newsexlabel = new QLabel(layoutWidget);
        newsexlabel->setObjectName("newsexlabel");
        newsexlabel->setFont(font1);

        horizontalLayout_8->addWidget(newsexlabel);

        newsexshow = new QComboBox(layoutWidget);
        newsexshow->setObjectName("newsexshow");

        horizontalLayout_8->addWidget(newsexshow);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        newphonelabel = new QLabel(layoutWidget);
        newphonelabel->setObjectName("newphonelabel");
        newphonelabel->setFont(font1);

        horizontalLayout_9->addWidget(newphonelabel);

        newphonedit = new QLineEdit(layoutWidget);
        newphonedit->setObjectName("newphonedit");

        horizontalLayout_9->addWidget(newphonedit);


        verticalLayout_5->addLayout(horizontalLayout_9);


        retranslateUi(enroll);

        QMetaObject::connectSlotsByName(enroll);
    } // setupUi

    void retranslateUi(QWidget *enroll)
    {
        enroll->setWindowTitle(QCoreApplication::translate("enroll", "\344\270\252\344\272\272\344\277\241\346\201\257\346\263\250\345\206\214\347\225\214\351\235\242", nullptr));
        newcustomer->setText(QCoreApplication::translate("enroll", "\345\256\214\346\210\220", nullptr));
        newnolabel->setText(QCoreApplication::translate("enroll", "\345\256\242\346\210\267\347\274\226\345\217\267", nullptr));
        newnoshow->setText(QCoreApplication::translate("enroll", "No.", nullptr));
        newnamelabel->setText(QCoreApplication::translate("enroll", "\345\256\242\346\210\267\345\247\223\345\220\215", nullptr));
        newtypelabel->setText(QCoreApplication::translate("enroll", "\345\256\242\346\210\267\347\261\273\345\236\213", nullptr));
        newidlabel->setText(QCoreApplication::translate("enroll", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        newsexlabel->setText(QCoreApplication::translate("enroll", "\346\200\247        \345\210\253", nullptr));
        newphonelabel->setText(QCoreApplication::translate("enroll", "\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class enroll: public Ui_enroll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENROLL_H
