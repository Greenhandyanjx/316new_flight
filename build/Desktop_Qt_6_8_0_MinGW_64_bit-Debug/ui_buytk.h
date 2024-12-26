/********************************************************************************
** Form generated from reading UI file 'buytk.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUYTK_H
#define UI_BUYTK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label_16;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(400, 300);
        label_16 = new QLabel(Dialog);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 140, 311, 121));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rage Italic")});
        font.setPointSize(25);
        font.setItalic(false);
        label_16->setFont(font);
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 34, 121, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223")});
        font1.setPointSize(18);
        label->setFont(font1);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 100, 301, 51));
        label_2->setFont(font1);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 250, 75, 43));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223")});
        font2.setPointSize(14);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(220,220,220);/* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    border: 1px solid rgb(200,200,200); /* \350\256\276\347\275\256\350\276\271\346\241\206 */\n"
"    border-radius: 10px;\n"
"    min-height: 25px;\n"
"    color: #000000; /* \350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    padding:4px 4px;\n"
"    margin:4px 4px;\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234\347\212\266\346\200\201 */\n"
"QPushButton:hover {\n"
"    background-color: rgb(55,144,250); /* \350\256\276\347\275\256\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #ffffff; /* \350\256\276\347\275\256\346\202\254\345\201\234\346\227\266\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"/* \346\214\211\344\270\213\347\212\266\346\200\201 */\n"
"QPushButton:pressed {\n"
"    background-color: rgb(44,133,240); /* \350"
                        "\256\276\347\275\256\346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #ffffff; /* \350\256\276\347\275\256\346\214\211\344\270\213\346\227\266\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"/* \345\244\215\351\200\211\346\241\206\351\200\211\344\270\255\347\212\266\346\200\201 */\n"
"QPushButton:checked {\n"
"    background-color: rgb(55,144,250);  /* \350\256\276\347\275\256\351\200\211\344\270\255\346\227\266\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #ffffff; /* \350\256\276\347\275\256\351\200\211\344\270\255\346\227\266\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\350\242\253\351\200\211\344\270\255\347\212\266\346\200\201 */\n"
"QPushButton:pressed:checked {\n"
"    background-color: rgb(44,133,240); /* \350\256\276\347\275\256\346\214\211\351\222\256\350\242\253\351\200\211\344\270\255\346\227\266\347\232\204\350\203"
                        "\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #ffffff; /* \350\256\276\347\275\256\346\214\211\351\222\256\350\242\253\351\200\211\344\270\255\346\227\266\347\232\204\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"}\n"
"\n"
""));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_16->setText(QCoreApplication::translate("Dialog", "Thank you for choosing us. \n"
"Happy Travels!", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\346\210\220\345\212\237\351\242\204\350\256\242", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "\346\204\237\350\260\242\346\202\250\347\232\204\351\200\211\346\213\251,\347\245\235\346\202\250\346\227\205\350\241\214\345\277\253\344\271\220", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYTK_H
