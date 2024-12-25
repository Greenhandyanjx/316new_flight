/********************************************************************************
** Form generated from reading UI file 'enroll.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENROLL_H
#define UI_ENROLL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_enroll
{
public:
    QLineEdit *newnamedit;
    QLineEdit *newidedit;
    QLabel *newnamelabel;
    QLabel *newidlabel;
    QLabel *newsexlabel;
    QLabel *newnoshow;
    QPushButton *newcustomer;
    QComboBox *genderselect;
    QLabel *newtypelabel;
    QLabel *newnolabel;
    QLabel *newphonelabel;
    QComboBox *newtypeselect;
    QLineEdit *newphonedit;

    void setupUi(QWidget *enroll)
    {
        if (enroll->objectName().isEmpty())
            enroll->setObjectName("enroll");
        enroll->resize(557, 434);
        newnamedit = new QLineEdit(enroll);
        newnamedit->setObjectName("newnamedit");
        newnamedit->setGeometry(QRect(280, 130, 121, 20));
        newidedit = new QLineEdit(enroll);
        newidedit->setObjectName("newidedit");
        newidedit->setGeometry(QRect(280, 280, 121, 20));
        newnamelabel = new QLabel(enroll);
        newnamelabel->setObjectName("newnamelabel");
        newnamelabel->setGeometry(QRect(70, 130, 40, 21));
        newidlabel = new QLabel(enroll);
        newidlabel->setObjectName("newidlabel");
        newidlabel->setGeometry(QRect(80, 280, 40, 12));
        newsexlabel = new QLabel(enroll);
        newsexlabel->setObjectName("newsexlabel");
        newsexlabel->setGeometry(QRect(80, 350, 40, 12));
        newnoshow = new QLabel(enroll);
        newnoshow->setObjectName("newnoshow");
        newnoshow->setGeometry(QRect(280, 50, 51, 21));
        newcustomer = new QPushButton(enroll);
        newcustomer->setObjectName("newcustomer");
        newcustomer->setGeometry(QRect(480, 350, 56, 41));
        genderselect = new QComboBox(enroll);
        genderselect->setObjectName("genderselect");
        genderselect->setGeometry(QRect(280, 340, 60, 22));
        newtypelabel = new QLabel(enroll);
        newtypelabel->setObjectName("newtypelabel");
        newtypelabel->setGeometry(QRect(70, 210, 40, 12));
        newnolabel = new QLabel(enroll);
        newnolabel->setObjectName("newnolabel");
        newnolabel->setGeometry(QRect(70, 50, 61, 21));
        newphonelabel = new QLabel(enroll);
        newphonelabel->setObjectName("newphonelabel");
        newphonelabel->setGeometry(QRect(80, 400, 40, 21));
        newtypeselect = new QComboBox(enroll);
        newtypeselect->setObjectName("newtypeselect");
        newtypeselect->setGeometry(QRect(280, 200, 60, 22));
        newphonedit = new QLineEdit(enroll);
        newphonedit->setObjectName("newphonedit");
        newphonedit->setGeometry(QRect(280, 400, 121, 20));

        retranslateUi(enroll);

        QMetaObject::connectSlotsByName(enroll);
    } // setupUi

    void retranslateUi(QWidget *enroll)
    {
        enroll->setWindowTitle(QCoreApplication::translate("enroll", "Form", nullptr));
        newnamelabel->setText(QCoreApplication::translate("enroll", "\347\224\250\346\210\267\345\247\223\345\220\215", nullptr));
        newidlabel->setText(QCoreApplication::translate("enroll", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        newsexlabel->setText(QCoreApplication::translate("enroll", "\346\200\247\345\210\253", nullptr));
        newnoshow->setText(QCoreApplication::translate("enroll", "No.", nullptr));
        newcustomer->setText(QCoreApplication::translate("enroll", "\345\241\253\345\206\231\345\256\214\346\210\220", nullptr));
        newtypelabel->setText(QCoreApplication::translate("enroll", "\345\256\242\346\210\267\347\261\273\345\236\213", nullptr));
        newnolabel->setText(QCoreApplication::translate("enroll", "\345\256\242\346\210\267\347\274\226\345\217\267", nullptr));
        newphonelabel->setText(QCoreApplication::translate("enroll", "\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class enroll: public Ui_enroll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENROLL_H
