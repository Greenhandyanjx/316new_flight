/********************************************************************************
** Form generated from reading UI file 'flightmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLIGHTMANAGER_H
#define UI_FLIGHTMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FlightManager
{
public:
    QAction *personsearch;
    QAction *bookticketinsert;
    QAction *ticketsearch;
    QAction *searchaction;
    QAction *insertaction;
    QAction *updateaction;
    QAction *deleteaction;
    QAction *quitacion;
    QAction *quitaction;
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *listlayout;
    QListWidget *list;
    QWidget *gridLayoutWidget_2;
    QGridLayout *showlayout;
    QStackedWidget *stackedWidget;
    QWidget *homepage;
    QLabel *welcomelabel;
    QWidget *searchpage;
    QToolBox *searchtoolbox;
    QWidget *searchairline;
    QTableWidget *searchairlineshow;
    QWidget *searchcustomer;
    QTableWidget *searchcustomershow;
    QWidget *insertpage;
    QWidget *gridLayoutWidget_3;
    QGridLayout *insertlayout;
    QTabWidget *inserttab;
    QWidget *newcustom;
    QLabel *newnolabel;
    QLabel *newnamelabel;
    QLineEdit *newnamedit;
    QLabel *newtypelabel;
    QComboBox *newtypeselect;
    QLabel *newidlabel;
    QLineEdit *newidedit;
    QLabel *newsexlabel;
    QComboBox *newsexshow;
    QLabel *newphonelabel;
    QLineEdit *newphonedit;
    QPushButton *newokbutton;
    QLabel *newnoshow;
    QWidget *booktickettab;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *bktktnoabl;
    QLabel *bktktno;
    QLabel *bktktctmnoabl;
    QComboBox *bktktctmno;
    QLabel *bktktctmnameabl;
    QLabel *bktktctmname;
    QLabel *bktktctmtypabl;
    QLabel *bktktctmtyp;
    QLabel *bktktdiscotabl;
    QLabel *bktktdiscot;
    QLabel *bktktdepcotabl;
    QComboBox *bktktdepcot;
    QLabel *bktktdepcyabl;
    QComboBox *bktktdepcy;
    QLabel *bktktarrcotabl;
    QComboBox *bktktarrcot;
    QLabel *bktktarrcyabl;
    QComboBox *bktktarrcy;
    QLabel *bktktlineabl;
    QComboBox *bktktline;
    QLabel *bktktshipabl;
    QComboBox *bktktship;
    QLabel *bktktpriceabl;
    QLabel *bktktprice;
    QLabel *bktkttotalabl;
    QLabel *bktkttotal;
    QLabel *bktktrest;
    QPushButton *bktktokbtn;
    QWidget *updatepage;
    QWidget *layoutWidget1;
    QGridLayout *updateLayout;
    QGroupBox *airplanechange;
    QWidget *layoutWidget2;
    QGridLayout *chgplanelyo;
    QComboBox *chgplanelinecom;
    QLabel *chgplanelineabl;
    QLabel *chgplanetype;
    QLabel *chgplanelinedep;
    QLabel *chgplanearr;
    QLabel *chgplanenotime;
    QLabel *chgplaneselabl;
    QComboBox *chgplaneselcom;
    QLabel *chgplanedep;
    QLabel *chgplanelinearr;
    QLabel *chgplanelinetime;
    QLabel *chgplanelinecpy;
    QPushButton *chgplaneokbtn;
    QGroupBox *typechange;
    QWidget *layoutWidget3;
    QGridLayout *chgtyplyo;
    QLabel *chgtypselabl;
    QComboBox *chgtypselcom;
    QLabel *chgtypinabl;
    QLineEdit *chgtypinline;
    QPushButton *chgtypokbtn;
    QGroupBox *customerchange;
    QWidget *layoutWidget4;
    QGridLayout *chgctmlyo;
    QCheckBox *chgctmtypchk;
    QComboBox *chgctmtypcom;
    QCheckBox *chgctmphechk;
    QComboBox *chgctmsexcom;
    QLineEdit *chgctmnameline;
    QCheckBox *chgctmnamechk;
    QCheckBox *chgctmsexchk;
    QLineEdit *chgctmpheline;
    QWidget *layoutWidget5;
    QGridLayout *chgctmoklyo;
    QLabel *chgctmselabel;
    QComboBox *chgctmselcom;
    QPushButton *chgctmokbtn;
    QGroupBox *ticketchange;
    QWidget *layoutWidget6;
    QGridLayout *chgtktlyo;
    QLabel *chgtktnoabl;
    QComboBox *chgtktnocom;
    QLabel *chgtktlineabl;
    QLabel *chgtktdepabl;
    QLabel *chgtktarrabl;
    QLabel *chgtkttimeabl;
    QLabel *chgtktlinechg;
    QComboBox *chgtktlinecom;
    QLabel *chgtktshipabl;
    QLabel *chgtktdepature;
    QLabel *chgtktarrive;
    QLabel *chgtkttime;
    QLabel *chgtktshipchg;
    QComboBox *chgtktshipcom;
    QPushButton *chgtktokbtn;
    QGroupBox *airlinechange;
    QWidget *layoutWidget7;
    QGridLayout *chglinelyo;
    QComboBox *chglinenocom;
    QCheckBox *chglinecmpcek;
    QComboBox *chglinecmpcom;
    QCheckBox *chglinedepcek;
    QComboBox *chglinedepcom;
    QCheckBox *chglinearrcek;
    QComboBox *chglinearrcom;
    QCheckBox *chglinedatecek;
    QDateEdit *chglinedatedit;
    QCheckBox *chglinetimecek;
    QTimeEdit *chglinetimedit;
    QCheckBox *chglineecocek;
    QLineEdit *chglineecoedit;
    QCheckBox *chglinebuscek;
    QLineEdit *chglinebusedit;
    QCheckBox *chglinedelcek;
    QLineEdit *chglinedeledit;
    QPushButton *chglineokbtn;
    QLabel *chglinenoabl;
    QWidget *deletepage;
    QWidget *layoutWidget8;
    QGridLayout *deletelayout;
    QGroupBox *delticket;
    QWidget *layoutWidget9;
    QGridLayout *delticketlyo;
    QLabel *delticketnoabl;
    QComboBox *delticketno;
    QLabel *delticketnameabl;
    QLabel *delticketname;
    QLabel *delticketlinenoabl;
    QLabel *delticketlineno;
    QLabel *delticketdepabl;
    QLabel *delticketdep;
    QLabel *delticketarrabl;
    QLabel *delticketarr;
    QLabel *delticketdeptimeabl;
    QLabel *delticketdeptime;
    QLabel *delticketshipabl;
    QLabel *delticketship;
    QPushButton *delticketokbtn;
    QGroupBox *delairline;
    QLabel *label_2;
    QGroupBox *delairplane;
    QLabel *label_3;
    QGroupBox *delcustomer;
    QLabel *label;
    QGroupBox *delairway;
    QLabel *label_4;
    QMenuBar *menubar;
    QMenu *searchmenu;
    QMenu *insertmeun;
    QMenu *updatemenu;
    QMenu *deletemenu;
    QMenu *quitmenu;

    void setupUi(QMainWindow *FlightManager)
    {
        if (FlightManager->objectName().isEmpty())
            FlightManager->setObjectName("FlightManager");
        FlightManager->resize(865, 652);
        personsearch = new QAction(FlightManager);
        personsearch->setObjectName("personsearch");
        bookticketinsert = new QAction(FlightManager);
        bookticketinsert->setObjectName("bookticketinsert");
        ticketsearch = new QAction(FlightManager);
        ticketsearch->setObjectName("ticketsearch");
        searchaction = new QAction(FlightManager);
        searchaction->setObjectName("searchaction");
        insertaction = new QAction(FlightManager);
        insertaction->setObjectName("insertaction");
        updateaction = new QAction(FlightManager);
        updateaction->setObjectName("updateaction");
        deleteaction = new QAction(FlightManager);
        deleteaction->setObjectName("deleteaction");
        quitacion = new QAction(FlightManager);
        quitacion->setObjectName("quitacion");
        quitaction = new QAction(FlightManager);
        quitaction->setObjectName("quitaction");
        centralwidget = new QWidget(FlightManager);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 181, 571));
        listlayout = new QGridLayout(gridLayoutWidget);
        listlayout->setObjectName("listlayout");
        listlayout->setContentsMargins(0, 0, 0, 0);
        list = new QListWidget(gridLayoutWidget);
        list->setObjectName("list");

        listlayout->addWidget(list, 0, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(180, 0, 671, 571));
        showlayout = new QGridLayout(gridLayoutWidget_2);
        showlayout->setObjectName("showlayout");
        showlayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(gridLayoutWidget_2);
        stackedWidget->setObjectName("stackedWidget");
        homepage = new QWidget();
        homepage->setObjectName("homepage");
        welcomelabel = new QLabel(homepage);
        welcomelabel->setObjectName("welcomelabel");
        welcomelabel->setGeometry(QRect(90, 80, 351, 51));
        QFont font;
        font.setPointSize(18);
        welcomelabel->setFont(font);
        stackedWidget->addWidget(homepage);
        searchpage = new QWidget();
        searchpage->setObjectName("searchpage");
        searchtoolbox = new QToolBox(searchpage);
        searchtoolbox->setObjectName("searchtoolbox");
        searchtoolbox->setGeometry(QRect(0, 0, 661, 561));
        searchairline = new QWidget();
        searchairline->setObjectName("searchairline");
        searchairline->setGeometry(QRect(0, 0, 661, 503));
        searchairlineshow = new QTableWidget(searchairline);
        searchairlineshow->setObjectName("searchairlineshow");
        searchairlineshow->setGeometry(QRect(0, 0, 661, 501));
        searchtoolbox->addItem(searchairline, QString::fromUtf8("Page 1"));
        searchcustomer = new QWidget();
        searchcustomer->setObjectName("searchcustomer");
        searchcustomer->setGeometry(QRect(0, 0, 100, 30));
        searchcustomershow = new QTableWidget(searchcustomer);
        searchcustomershow->setObjectName("searchcustomershow");
        searchcustomershow->setGeometry(QRect(0, 0, 661, 501));
        searchtoolbox->addItem(searchcustomer, QString::fromUtf8("Page 2"));
        stackedWidget->addWidget(searchpage);
        insertpage = new QWidget();
        insertpage->setObjectName("insertpage");
        gridLayoutWidget_3 = new QWidget(insertpage);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(0, 0, 671, 571));
        insertlayout = new QGridLayout(gridLayoutWidget_3);
        insertlayout->setObjectName("insertlayout");
        insertlayout->setContentsMargins(0, 0, 0, 0);
        inserttab = new QTabWidget(gridLayoutWidget_3);
        inserttab->setObjectName("inserttab");
        newcustom = new QWidget();
        newcustom->setObjectName("newcustom");
        newnolabel = new QLabel(newcustom);
        newnolabel->setObjectName("newnolabel");
        newnolabel->setGeometry(QRect(190, 110, 81, 41));
        QFont font1;
        font1.setPointSize(14);
        newnolabel->setFont(font1);
        newnamelabel = new QLabel(newcustom);
        newnamelabel->setObjectName("newnamelabel");
        newnamelabel->setGeometry(QRect(190, 160, 91, 41));
        newnamelabel->setFont(font1);
        newnamedit = new QLineEdit(newcustom);
        newnamedit->setObjectName("newnamedit");
        newnamedit->setGeometry(QRect(330, 160, 121, 31));
        newnamedit->setFont(font);
        newtypelabel = new QLabel(newcustom);
        newtypelabel->setObjectName("newtypelabel");
        newtypelabel->setGeometry(QRect(190, 210, 91, 41));
        newtypelabel->setFont(font1);
        newtypeselect = new QComboBox(newcustom);
        newtypeselect->setObjectName("newtypeselect");
        newtypeselect->setGeometry(QRect(330, 220, 121, 24));
        newidlabel = new QLabel(newcustom);
        newidlabel->setObjectName("newidlabel");
        newidlabel->setGeometry(QRect(190, 270, 91, 31));
        newidlabel->setFont(font1);
        newidedit = new QLineEdit(newcustom);
        newidedit->setObjectName("newidedit");
        newidedit->setGeometry(QRect(330, 270, 121, 24));
        newsexlabel = new QLabel(newcustom);
        newsexlabel->setObjectName("newsexlabel");
        newsexlabel->setGeometry(QRect(190, 320, 81, 21));
        newsexlabel->setFont(font1);
        newsexshow = new QComboBox(newcustom);
        newsexshow->setObjectName("newsexshow");
        newsexshow->setGeometry(QRect(330, 320, 121, 24));
        newphonelabel = new QLabel(newcustom);
        newphonelabel->setObjectName("newphonelabel");
        newphonelabel->setGeometry(QRect(190, 360, 81, 31));
        newphonelabel->setFont(font1);
        newphonedit = new QLineEdit(newcustom);
        newphonedit->setObjectName("newphonedit");
        newphonedit->setGeometry(QRect(330, 370, 121, 24));
        newokbutton = new QPushButton(newcustom);
        newokbutton->setObjectName("newokbutton");
        newokbutton->setGeometry(QRect(480, 450, 101, 41));
        newokbutton->setFont(font1);
        newnoshow = new QLabel(newcustom);
        newnoshow->setObjectName("newnoshow");
        newnoshow->setGeometry(QRect(330, 120, 121, 21));
        newnoshow->setFont(font);
        inserttab->addTab(newcustom, QString());
        booktickettab = new QWidget();
        booktickettab->setObjectName("booktickettab");
        layoutWidget = new QWidget(booktickettab);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(140, 20, 381, 491));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        bktktnoabl = new QLabel(layoutWidget);
        bktktnoabl->setObjectName("bktktnoabl");

        gridLayout->addWidget(bktktnoabl, 0, 0, 1, 1);

        bktktno = new QLabel(layoutWidget);
        bktktno->setObjectName("bktktno");

        gridLayout->addWidget(bktktno, 0, 1, 1, 1);

        bktktctmnoabl = new QLabel(layoutWidget);
        bktktctmnoabl->setObjectName("bktktctmnoabl");

        gridLayout->addWidget(bktktctmnoabl, 1, 0, 1, 1);

        bktktctmno = new QComboBox(layoutWidget);
        bktktctmno->setObjectName("bktktctmno");

        gridLayout->addWidget(bktktctmno, 1, 1, 1, 1);

        bktktctmnameabl = new QLabel(layoutWidget);
        bktktctmnameabl->setObjectName("bktktctmnameabl");

        gridLayout->addWidget(bktktctmnameabl, 2, 0, 1, 1);

        bktktctmname = new QLabel(layoutWidget);
        bktktctmname->setObjectName("bktktctmname");

        gridLayout->addWidget(bktktctmname, 2, 1, 1, 1);

        bktktctmtypabl = new QLabel(layoutWidget);
        bktktctmtypabl->setObjectName("bktktctmtypabl");

        gridLayout->addWidget(bktktctmtypabl, 3, 0, 1, 1);

        bktktctmtyp = new QLabel(layoutWidget);
        bktktctmtyp->setObjectName("bktktctmtyp");

        gridLayout->addWidget(bktktctmtyp, 3, 1, 1, 1);

        bktktdiscotabl = new QLabel(layoutWidget);
        bktktdiscotabl->setObjectName("bktktdiscotabl");

        gridLayout->addWidget(bktktdiscotabl, 4, 0, 1, 1);

        bktktdiscot = new QLabel(layoutWidget);
        bktktdiscot->setObjectName("bktktdiscot");

        gridLayout->addWidget(bktktdiscot, 4, 1, 1, 1);

        bktktdepcotabl = new QLabel(layoutWidget);
        bktktdepcotabl->setObjectName("bktktdepcotabl");

        gridLayout->addWidget(bktktdepcotabl, 5, 0, 1, 1);

        bktktdepcot = new QComboBox(layoutWidget);
        bktktdepcot->setObjectName("bktktdepcot");

        gridLayout->addWidget(bktktdepcot, 5, 1, 1, 1);

        bktktdepcyabl = new QLabel(layoutWidget);
        bktktdepcyabl->setObjectName("bktktdepcyabl");

        gridLayout->addWidget(bktktdepcyabl, 6, 0, 1, 1);

        bktktdepcy = new QComboBox(layoutWidget);
        bktktdepcy->setObjectName("bktktdepcy");

        gridLayout->addWidget(bktktdepcy, 6, 1, 1, 1);

        bktktarrcotabl = new QLabel(layoutWidget);
        bktktarrcotabl->setObjectName("bktktarrcotabl");

        gridLayout->addWidget(bktktarrcotabl, 7, 0, 1, 1);

        bktktarrcot = new QComboBox(layoutWidget);
        bktktarrcot->setObjectName("bktktarrcot");

        gridLayout->addWidget(bktktarrcot, 7, 1, 1, 1);

        bktktarrcyabl = new QLabel(layoutWidget);
        bktktarrcyabl->setObjectName("bktktarrcyabl");

        gridLayout->addWidget(bktktarrcyabl, 8, 0, 1, 1);

        bktktarrcy = new QComboBox(layoutWidget);
        bktktarrcy->setObjectName("bktktarrcy");

        gridLayout->addWidget(bktktarrcy, 8, 1, 1, 1);

        bktktlineabl = new QLabel(layoutWidget);
        bktktlineabl->setObjectName("bktktlineabl");

        gridLayout->addWidget(bktktlineabl, 9, 0, 1, 1);

        bktktline = new QComboBox(layoutWidget);
        bktktline->setObjectName("bktktline");

        gridLayout->addWidget(bktktline, 9, 1, 1, 1);

        bktktshipabl = new QLabel(layoutWidget);
        bktktshipabl->setObjectName("bktktshipabl");

        gridLayout->addWidget(bktktshipabl, 10, 0, 1, 1);

        bktktship = new QComboBox(layoutWidget);
        bktktship->setObjectName("bktktship");

        gridLayout->addWidget(bktktship, 10, 1, 1, 1);

        bktktpriceabl = new QLabel(layoutWidget);
        bktktpriceabl->setObjectName("bktktpriceabl");

        gridLayout->addWidget(bktktpriceabl, 11, 0, 1, 1);

        bktktprice = new QLabel(layoutWidget);
        bktktprice->setObjectName("bktktprice");

        gridLayout->addWidget(bktktprice, 11, 1, 1, 1);

        bktkttotalabl = new QLabel(layoutWidget);
        bktkttotalabl->setObjectName("bktkttotalabl");

        gridLayout->addWidget(bktkttotalabl, 12, 0, 1, 1);

        bktkttotal = new QLabel(layoutWidget);
        bktkttotal->setObjectName("bktkttotal");

        gridLayout->addWidget(bktkttotal, 12, 1, 1, 1);

        bktktrest = new QLabel(layoutWidget);
        bktktrest->setObjectName("bktktrest");

        gridLayout->addWidget(bktktrest, 13, 0, 1, 1);

        bktktokbtn = new QPushButton(layoutWidget);
        bktktokbtn->setObjectName("bktktokbtn");

        gridLayout->addWidget(bktktokbtn, 13, 1, 1, 1);

        inserttab->addTab(booktickettab, QString());

        insertlayout->addWidget(inserttab, 0, 0, 1, 1);

        stackedWidget->addWidget(insertpage);
        updatepage = new QWidget();
        updatepage->setObjectName("updatepage");
        layoutWidget1 = new QWidget(updatepage);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 0, 671, 571));
        updateLayout = new QGridLayout(layoutWidget1);
        updateLayout->setObjectName("updateLayout");
        updateLayout->setContentsMargins(0, 0, 0, 0);
        airplanechange = new QGroupBox(layoutWidget1);
        airplanechange->setObjectName("airplanechange");
        airplanechange->setAutoFillBackground(false);
        layoutWidget2 = new QWidget(airplanechange);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(2, 20, 311, 161));
        chgplanelyo = new QGridLayout(layoutWidget2);
        chgplanelyo->setObjectName("chgplanelyo");
        chgplanelyo->setContentsMargins(0, 0, 0, 0);
        chgplanelinecom = new QComboBox(layoutWidget2);
        chgplanelinecom->setObjectName("chgplanelinecom");

        chgplanelyo->addWidget(chgplanelinecom, 2, 1, 1, 1);

        chgplanelineabl = new QLabel(layoutWidget2);
        chgplanelineabl->setObjectName("chgplanelineabl");

        chgplanelyo->addWidget(chgplanelineabl, 2, 0, 1, 1);

        chgplanetype = new QLabel(layoutWidget2);
        chgplanetype->setObjectName("chgplanetype");

        chgplanelyo->addWidget(chgplanetype, 0, 2, 1, 1);

        chgplanelinedep = new QLabel(layoutWidget2);
        chgplanelinedep->setObjectName("chgplanelinedep");

        chgplanelyo->addWidget(chgplanelinedep, 3, 0, 1, 1);

        chgplanearr = new QLabel(layoutWidget2);
        chgplanearr->setObjectName("chgplanearr");

        chgplanelyo->addWidget(chgplanearr, 1, 1, 1, 1);

        chgplanenotime = new QLabel(layoutWidget2);
        chgplanenotime->setObjectName("chgplanenotime");

        chgplanelyo->addWidget(chgplanenotime, 1, 2, 1, 1);

        chgplaneselabl = new QLabel(layoutWidget2);
        chgplaneselabl->setObjectName("chgplaneselabl");

        chgplanelyo->addWidget(chgplaneselabl, 0, 0, 1, 1);

        chgplaneselcom = new QComboBox(layoutWidget2);
        chgplaneselcom->setObjectName("chgplaneselcom");

        chgplanelyo->addWidget(chgplaneselcom, 0, 1, 1, 1);

        chgplanedep = new QLabel(layoutWidget2);
        chgplanedep->setObjectName("chgplanedep");

        chgplanelyo->addWidget(chgplanedep, 1, 0, 1, 1);

        chgplanelinearr = new QLabel(layoutWidget2);
        chgplanelinearr->setObjectName("chgplanelinearr");

        chgplanelyo->addWidget(chgplanelinearr, 3, 1, 1, 1);

        chgplanelinetime = new QLabel(layoutWidget2);
        chgplanelinetime->setObjectName("chgplanelinetime");

        chgplanelyo->addWidget(chgplanelinetime, 3, 2, 1, 1);

        chgplanelinecpy = new QLabel(layoutWidget2);
        chgplanelinecpy->setObjectName("chgplanelinecpy");

        chgplanelyo->addWidget(chgplanelinecpy, 2, 2, 1, 1);

        chgplaneokbtn = new QPushButton(layoutWidget2);
        chgplaneokbtn->setObjectName("chgplaneokbtn");

        chgplanelyo->addWidget(chgplaneokbtn, 4, 2, 1, 1);


        updateLayout->addWidget(airplanechange, 0, 1, 1, 1);

        typechange = new QGroupBox(layoutWidget1);
        typechange->setObjectName("typechange");
        layoutWidget3 = new QWidget(typechange);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(0, 10, 321, 171));
        chgtyplyo = new QGridLayout(layoutWidget3);
        chgtyplyo->setObjectName("chgtyplyo");
        chgtyplyo->setContentsMargins(0, 0, 0, 0);
        chgtypselabl = new QLabel(layoutWidget3);
        chgtypselabl->setObjectName("chgtypselabl");

        chgtyplyo->addWidget(chgtypselabl, 0, 0, 1, 1);

        chgtypselcom = new QComboBox(layoutWidget3);
        chgtypselcom->setObjectName("chgtypselcom");

        chgtyplyo->addWidget(chgtypselcom, 0, 1, 1, 1);

        chgtypinabl = new QLabel(layoutWidget3);
        chgtypinabl->setObjectName("chgtypinabl");

        chgtyplyo->addWidget(chgtypinabl, 1, 0, 1, 1);

        chgtypinline = new QLineEdit(layoutWidget3);
        chgtypinline->setObjectName("chgtypinline");

        chgtyplyo->addWidget(chgtypinline, 1, 1, 1, 1);

        chgtypokbtn = new QPushButton(layoutWidget3);
        chgtypokbtn->setObjectName("chgtypokbtn");

        chgtyplyo->addWidget(chgtypokbtn, 2, 1, 1, 1);


        updateLayout->addWidget(typechange, 2, 1, 1, 1);

        customerchange = new QGroupBox(layoutWidget1);
        customerchange->setObjectName("customerchange");
        layoutWidget4 = new QWidget(customerchange);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(0, 50, 331, 141));
        chgctmlyo = new QGridLayout(layoutWidget4);
        chgctmlyo->setObjectName("chgctmlyo");
        chgctmlyo->setContentsMargins(0, 0, 0, 0);
        chgctmtypchk = new QCheckBox(layoutWidget4);
        chgctmtypchk->setObjectName("chgctmtypchk");

        chgctmlyo->addWidget(chgctmtypchk, 2, 1, 1, 1);

        chgctmtypcom = new QComboBox(layoutWidget4);
        chgctmtypcom->setObjectName("chgctmtypcom");

        chgctmlyo->addWidget(chgctmtypcom, 3, 1, 1, 1);

        chgctmphechk = new QCheckBox(layoutWidget4);
        chgctmphechk->setObjectName("chgctmphechk");

        chgctmlyo->addWidget(chgctmphechk, 2, 0, 1, 1);

        chgctmsexcom = new QComboBox(layoutWidget4);
        chgctmsexcom->setObjectName("chgctmsexcom");

        chgctmlyo->addWidget(chgctmsexcom, 1, 1, 1, 1);

        chgctmnameline = new QLineEdit(layoutWidget4);
        chgctmnameline->setObjectName("chgctmnameline");

        chgctmlyo->addWidget(chgctmnameline, 1, 0, 1, 1);

        chgctmnamechk = new QCheckBox(layoutWidget4);
        chgctmnamechk->setObjectName("chgctmnamechk");

        chgctmlyo->addWidget(chgctmnamechk, 0, 0, 1, 1);

        chgctmsexchk = new QCheckBox(layoutWidget4);
        chgctmsexchk->setObjectName("chgctmsexchk");
        chgctmsexchk->setEnabled(true);

        chgctmlyo->addWidget(chgctmsexchk, 0, 1, 1, 1);

        chgctmpheline = new QLineEdit(layoutWidget4);
        chgctmpheline->setObjectName("chgctmpheline");

        chgctmlyo->addWidget(chgctmpheline, 3, 0, 1, 1);

        layoutWidget5 = new QWidget(customerchange);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(0, 20, 331, 31));
        chgctmoklyo = new QGridLayout(layoutWidget5);
        chgctmoklyo->setObjectName("chgctmoklyo");
        chgctmoklyo->setContentsMargins(0, 0, 0, 0);
        chgctmselabel = new QLabel(layoutWidget5);
        chgctmselabel->setObjectName("chgctmselabel");
        chgctmselabel->setToolTipDuration(-1);
        chgctmselabel->setTextFormat(Qt::TextFormat::MarkdownText);
        chgctmselabel->setIndent(0);

        chgctmoklyo->addWidget(chgctmselabel, 0, 0, 1, 1);

        chgctmselcom = new QComboBox(layoutWidget5);
        chgctmselcom->setObjectName("chgctmselcom");

        chgctmoklyo->addWidget(chgctmselcom, 0, 1, 1, 1);

        chgctmokbtn = new QPushButton(layoutWidget5);
        chgctmokbtn->setObjectName("chgctmokbtn");

        chgctmoklyo->addWidget(chgctmokbtn, 0, 2, 1, 1);


        updateLayout->addWidget(customerchange, 0, 0, 1, 1);

        ticketchange = new QGroupBox(layoutWidget1);
        ticketchange->setObjectName("ticketchange");
        layoutWidget6 = new QWidget(ticketchange);
        layoutWidget6->setObjectName("layoutWidget6");
        layoutWidget6->setGeometry(QRect(0, 10, 321, 171));
        chgtktlyo = new QGridLayout(layoutWidget6);
        chgtktlyo->setObjectName("chgtktlyo");
        chgtktlyo->setContentsMargins(0, 0, 0, 0);
        chgtktnoabl = new QLabel(layoutWidget6);
        chgtktnoabl->setObjectName("chgtktnoabl");

        chgtktlyo->addWidget(chgtktnoabl, 0, 0, 1, 1);

        chgtktnocom = new QComboBox(layoutWidget6);
        chgtktnocom->setObjectName("chgtktnocom");

        chgtktlyo->addWidget(chgtktnocom, 0, 1, 1, 1);

        chgtktlineabl = new QLabel(layoutWidget6);
        chgtktlineabl->setObjectName("chgtktlineabl");

        chgtktlyo->addWidget(chgtktlineabl, 0, 2, 1, 1);

        chgtktdepabl = new QLabel(layoutWidget6);
        chgtktdepabl->setObjectName("chgtktdepabl");

        chgtktlyo->addWidget(chgtktdepabl, 1, 0, 1, 1);

        chgtktarrabl = new QLabel(layoutWidget6);
        chgtktarrabl->setObjectName("chgtktarrabl");

        chgtktlyo->addWidget(chgtktarrabl, 1, 1, 1, 1);

        chgtkttimeabl = new QLabel(layoutWidget6);
        chgtkttimeabl->setObjectName("chgtkttimeabl");

        chgtktlyo->addWidget(chgtkttimeabl, 1, 2, 1, 1);

        chgtktlinechg = new QLabel(layoutWidget6);
        chgtktlinechg->setObjectName("chgtktlinechg");

        chgtktlyo->addWidget(chgtktlinechg, 2, 0, 1, 1);

        chgtktlinecom = new QComboBox(layoutWidget6);
        chgtktlinecom->setObjectName("chgtktlinecom");

        chgtktlyo->addWidget(chgtktlinecom, 2, 1, 1, 1);

        chgtktshipabl = new QLabel(layoutWidget6);
        chgtktshipabl->setObjectName("chgtktshipabl");

        chgtktlyo->addWidget(chgtktshipabl, 2, 2, 1, 1);

        chgtktdepature = new QLabel(layoutWidget6);
        chgtktdepature->setObjectName("chgtktdepature");

        chgtktlyo->addWidget(chgtktdepature, 3, 0, 1, 1);

        chgtktarrive = new QLabel(layoutWidget6);
        chgtktarrive->setObjectName("chgtktarrive");

        chgtktlyo->addWidget(chgtktarrive, 3, 1, 1, 1);

        chgtkttime = new QLabel(layoutWidget6);
        chgtkttime->setObjectName("chgtkttime");

        chgtktlyo->addWidget(chgtkttime, 3, 2, 1, 1);

        chgtktshipchg = new QLabel(layoutWidget6);
        chgtktshipchg->setObjectName("chgtktshipchg");

        chgtktlyo->addWidget(chgtktshipchg, 4, 0, 1, 1);

        chgtktshipcom = new QComboBox(layoutWidget6);
        chgtktshipcom->setObjectName("chgtktshipcom");

        chgtktlyo->addWidget(chgtktshipcom, 4, 1, 1, 1);

        chgtktokbtn = new QPushButton(layoutWidget6);
        chgtktokbtn->setObjectName("chgtktokbtn");

        chgtktlyo->addWidget(chgtktokbtn, 4, 2, 1, 1);


        updateLayout->addWidget(ticketchange, 1, 1, 1, 1);

        airlinechange = new QGroupBox(layoutWidget1);
        airlinechange->setObjectName("airlinechange");
        layoutWidget7 = new QWidget(airlinechange);
        layoutWidget7->setObjectName("layoutWidget7");
        layoutWidget7->setGeometry(QRect(20, 30, 281, 331));
        chglinelyo = new QGridLayout(layoutWidget7);
        chglinelyo->setObjectName("chglinelyo");
        chglinelyo->setContentsMargins(0, 0, 0, 0);
        chglinenocom = new QComboBox(layoutWidget7);
        chglinenocom->setObjectName("chglinenocom");

        chglinelyo->addWidget(chglinenocom, 0, 1, 1, 1);

        chglinecmpcek = new QCheckBox(layoutWidget7);
        chglinecmpcek->setObjectName("chglinecmpcek");

        chglinelyo->addWidget(chglinecmpcek, 1, 0, 1, 1);

        chglinecmpcom = new QComboBox(layoutWidget7);
        chglinecmpcom->setObjectName("chglinecmpcom");

        chglinelyo->addWidget(chglinecmpcom, 1, 1, 1, 1);

        chglinedepcek = new QCheckBox(layoutWidget7);
        chglinedepcek->setObjectName("chglinedepcek");

        chglinelyo->addWidget(chglinedepcek, 2, 0, 1, 1);

        chglinedepcom = new QComboBox(layoutWidget7);
        chglinedepcom->setObjectName("chglinedepcom");

        chglinelyo->addWidget(chglinedepcom, 2, 1, 1, 1);

        chglinearrcek = new QCheckBox(layoutWidget7);
        chglinearrcek->setObjectName("chglinearrcek");

        chglinelyo->addWidget(chglinearrcek, 3, 0, 1, 1);

        chglinearrcom = new QComboBox(layoutWidget7);
        chglinearrcom->setObjectName("chglinearrcom");

        chglinelyo->addWidget(chglinearrcom, 3, 1, 1, 1);

        chglinedatecek = new QCheckBox(layoutWidget7);
        chglinedatecek->setObjectName("chglinedatecek");

        chglinelyo->addWidget(chglinedatecek, 4, 0, 1, 1);

        chglinedatedit = new QDateEdit(layoutWidget7);
        chglinedatedit->setObjectName("chglinedatedit");

        chglinelyo->addWidget(chglinedatedit, 4, 1, 1, 1);

        chglinetimecek = new QCheckBox(layoutWidget7);
        chglinetimecek->setObjectName("chglinetimecek");

        chglinelyo->addWidget(chglinetimecek, 5, 0, 1, 1);

        chglinetimedit = new QTimeEdit(layoutWidget7);
        chglinetimedit->setObjectName("chglinetimedit");

        chglinelyo->addWidget(chglinetimedit, 5, 1, 1, 1);

        chglineecocek = new QCheckBox(layoutWidget7);
        chglineecocek->setObjectName("chglineecocek");

        chglinelyo->addWidget(chglineecocek, 6, 0, 1, 1);

        chglineecoedit = new QLineEdit(layoutWidget7);
        chglineecoedit->setObjectName("chglineecoedit");

        chglinelyo->addWidget(chglineecoedit, 6, 1, 1, 1);

        chglinebuscek = new QCheckBox(layoutWidget7);
        chglinebuscek->setObjectName("chglinebuscek");

        chglinelyo->addWidget(chglinebuscek, 7, 0, 1, 1);

        chglinebusedit = new QLineEdit(layoutWidget7);
        chglinebusedit->setObjectName("chglinebusedit");

        chglinelyo->addWidget(chglinebusedit, 7, 1, 1, 1);

        chglinedelcek = new QCheckBox(layoutWidget7);
        chglinedelcek->setObjectName("chglinedelcek");

        chglinelyo->addWidget(chglinedelcek, 8, 0, 1, 1);

        chglinedeledit = new QLineEdit(layoutWidget7);
        chglinedeledit->setObjectName("chglinedeledit");

        chglinelyo->addWidget(chglinedeledit, 8, 1, 1, 1);

        chglineokbtn = new QPushButton(layoutWidget7);
        chglineokbtn->setObjectName("chglineokbtn");

        chglinelyo->addWidget(chglineokbtn, 9, 1, 1, 1);

        chglinenoabl = new QLabel(layoutWidget7);
        chglinenoabl->setObjectName("chglinenoabl");

        chglinelyo->addWidget(chglinenoabl, 0, 0, 1, 1);


        updateLayout->addWidget(airlinechange, 1, 0, 2, 1);

        stackedWidget->addWidget(updatepage);
        deletepage = new QWidget();
        deletepage->setObjectName("deletepage");
        layoutWidget8 = new QWidget(deletepage);
        layoutWidget8->setObjectName("layoutWidget8");
        layoutWidget8->setGeometry(QRect(0, 0, 671, 571));
        deletelayout = new QGridLayout(layoutWidget8);
        deletelayout->setObjectName("deletelayout");
        deletelayout->setContentsMargins(0, 0, 0, 0);
        delticket = new QGroupBox(layoutWidget8);
        delticket->setObjectName("delticket");
        layoutWidget9 = new QWidget(delticket);
        layoutWidget9->setObjectName("layoutWidget9");
        layoutWidget9->setGeometry(QRect(40, 40, 231, 321));
        delticketlyo = new QGridLayout(layoutWidget9);
        delticketlyo->setObjectName("delticketlyo");
        delticketlyo->setContentsMargins(0, 0, 0, 0);
        delticketnoabl = new QLabel(layoutWidget9);
        delticketnoabl->setObjectName("delticketnoabl");

        delticketlyo->addWidget(delticketnoabl, 0, 0, 1, 1);

        delticketno = new QComboBox(layoutWidget9);
        delticketno->setObjectName("delticketno");

        delticketlyo->addWidget(delticketno, 0, 1, 1, 1);

        delticketnameabl = new QLabel(layoutWidget9);
        delticketnameabl->setObjectName("delticketnameabl");

        delticketlyo->addWidget(delticketnameabl, 1, 0, 1, 1);

        delticketname = new QLabel(layoutWidget9);
        delticketname->setObjectName("delticketname");

        delticketlyo->addWidget(delticketname, 1, 1, 1, 1);

        delticketlinenoabl = new QLabel(layoutWidget9);
        delticketlinenoabl->setObjectName("delticketlinenoabl");

        delticketlyo->addWidget(delticketlinenoabl, 2, 0, 1, 1);

        delticketlineno = new QLabel(layoutWidget9);
        delticketlineno->setObjectName("delticketlineno");

        delticketlyo->addWidget(delticketlineno, 2, 1, 1, 1);

        delticketdepabl = new QLabel(layoutWidget9);
        delticketdepabl->setObjectName("delticketdepabl");

        delticketlyo->addWidget(delticketdepabl, 3, 0, 1, 1);

        delticketdep = new QLabel(layoutWidget9);
        delticketdep->setObjectName("delticketdep");

        delticketlyo->addWidget(delticketdep, 3, 1, 1, 1);

        delticketarrabl = new QLabel(layoutWidget9);
        delticketarrabl->setObjectName("delticketarrabl");

        delticketlyo->addWidget(delticketarrabl, 4, 0, 1, 1);

        delticketarr = new QLabel(layoutWidget9);
        delticketarr->setObjectName("delticketarr");

        delticketlyo->addWidget(delticketarr, 4, 1, 1, 1);

        delticketdeptimeabl = new QLabel(layoutWidget9);
        delticketdeptimeabl->setObjectName("delticketdeptimeabl");

        delticketlyo->addWidget(delticketdeptimeabl, 5, 0, 1, 1);

        delticketdeptime = new QLabel(layoutWidget9);
        delticketdeptime->setObjectName("delticketdeptime");

        delticketlyo->addWidget(delticketdeptime, 5, 1, 1, 1);

        delticketshipabl = new QLabel(layoutWidget9);
        delticketshipabl->setObjectName("delticketshipabl");

        delticketlyo->addWidget(delticketshipabl, 6, 0, 1, 1);

        delticketship = new QLabel(layoutWidget9);
        delticketship->setObjectName("delticketship");

        delticketlyo->addWidget(delticketship, 6, 1, 1, 1);

        delticketokbtn = new QPushButton(layoutWidget9);
        delticketokbtn->setObjectName("delticketokbtn");

        delticketlyo->addWidget(delticketokbtn, 7, 1, 1, 1);


        deletelayout->addWidget(delticket, 0, 0, 2, 1);

        delairline = new QGroupBox(layoutWidget8);
        delairline->setObjectName("delairline");
        label_2 = new QLabel(delairline);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 80, 221, 41));

        deletelayout->addWidget(delairline, 0, 1, 1, 1);

        delairplane = new QGroupBox(layoutWidget8);
        delairplane->setObjectName("delairplane");
        label_3 = new QLabel(delairplane);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 90, 221, 41));

        deletelayout->addWidget(delairplane, 1, 1, 1, 1);

        delcustomer = new QGroupBox(layoutWidget8);
        delcustomer->setObjectName("delcustomer");
        label = new QLabel(delcustomer);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 80, 221, 41));

        deletelayout->addWidget(delcustomer, 2, 0, 1, 1);

        delairway = new QGroupBox(layoutWidget8);
        delairway->setObjectName("delairway");
        label_4 = new QLabel(delairway);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 80, 221, 41));

        deletelayout->addWidget(delairway, 2, 1, 1, 1);

        stackedWidget->addWidget(deletepage);

        showlayout->addWidget(stackedWidget, 0, 0, 1, 1);

        FlightManager->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FlightManager);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 865, 21));
        searchmenu = new QMenu(menubar);
        searchmenu->setObjectName("searchmenu");
        insertmeun = new QMenu(menubar);
        insertmeun->setObjectName("insertmeun");
        updatemenu = new QMenu(menubar);
        updatemenu->setObjectName("updatemenu");
        deletemenu = new QMenu(menubar);
        deletemenu->setObjectName("deletemenu");
        quitmenu = new QMenu(menubar);
        quitmenu->setObjectName("quitmenu");
        FlightManager->setMenuBar(menubar);

        menubar->addAction(searchmenu->menuAction());
        menubar->addAction(insertmeun->menuAction());
        menubar->addAction(updatemenu->menuAction());
        menubar->addAction(deletemenu->menuAction());
        menubar->addAction(quitmenu->menuAction());
        searchmenu->addAction(searchaction);
        insertmeun->addAction(insertaction);
        updatemenu->addAction(updateaction);
        deletemenu->addAction(deleteaction);
        quitmenu->addAction(quitaction);

        retranslateUi(FlightManager);
        QObject::connect(list, &QListWidget::currentRowChanged, stackedWidget, &QStackedWidget::setCurrentIndex);

        stackedWidget->setCurrentIndex(2);
        searchtoolbox->setCurrentIndex(0);
        inserttab->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(FlightManager);
    } // setupUi

    void retranslateUi(QMainWindow *FlightManager)
    {
        FlightManager->setWindowTitle(QCoreApplication::translate("FlightManager", "MainWindow", nullptr));
        personsearch->setText(QCoreApplication::translate("FlightManager", "Person", nullptr));
        bookticketinsert->setText(QCoreApplication::translate("FlightManager", "Book Ticket", nullptr));
        ticketsearch->setText(QCoreApplication::translate("FlightManager", "Ticket", nullptr));
        searchaction->setText(QCoreApplication::translate("FlightManager", "Search Page", nullptr));
        insertaction->setText(QCoreApplication::translate("FlightManager", "Add Page", nullptr));
        updateaction->setText(QCoreApplication::translate("FlightManager", "Update Page", nullptr));
        deleteaction->setText(QCoreApplication::translate("FlightManager", "Delete Page", nullptr));
        quitacion->setText(QCoreApplication::translate("FlightManager", "Quit System", nullptr));
        quitaction->setText(QCoreApplication::translate("FlightManager", "Quit System", nullptr));
        welcomelabel->setText(QCoreApplication::translate("FlightManager", "\346\254\242\350\277\216\344\275\277\347\224\250316\350\210\252\347\251\272\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237\357\274\201", nullptr));
        searchtoolbox->setItemText(searchtoolbox->indexOf(searchairline), QCoreApplication::translate("FlightManager", "Page 1", nullptr));
        searchtoolbox->setItemText(searchtoolbox->indexOf(searchcustomer), QCoreApplication::translate("FlightManager", "Page 2", nullptr));
        newnolabel->setText(QCoreApplication::translate("FlightManager", "\345\256\242\346\210\267\347\274\226\345\217\267", nullptr));
        newnamelabel->setText(QCoreApplication::translate("FlightManager", "\345\256\242\346\210\267\345\247\223\345\220\215", nullptr));
        newtypelabel->setText(QCoreApplication::translate("FlightManager", "\345\256\242\346\210\267\347\261\273\345\236\213", nullptr));
        newidlabel->setText(QCoreApplication::translate("FlightManager", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        newsexlabel->setText(QCoreApplication::translate("FlightManager", "\346\200\247        \345\210\253", nullptr));
        newphonelabel->setText(QCoreApplication::translate("FlightManager", "\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
        newokbutton->setText(QCoreApplication::translate("FlightManager", "\347\241\256\350\256\244", nullptr));
        newnoshow->setText(QCoreApplication::translate("FlightManager", "No.", nullptr));
        inserttab->setTabText(inserttab->indexOf(newcustom), QCoreApplication::translate("FlightManager", "Tab 1", nullptr));
        bktktnoabl->setText(QCoreApplication::translate("FlightManager", "\350\256\242\345\215\225\347\274\226\345\217\267", nullptr));
        bktktno->setText(QCoreApplication::translate("FlightManager", "No.", nullptr));
        bktktctmnoabl->setText(QCoreApplication::translate("FlightManager", "\345\256\242\346\210\267\347\274\226\345\217\267", nullptr));
        bktktctmnameabl->setText(QCoreApplication::translate("FlightManager", "\345\256\242\346\210\267\345\247\223\345\220\215", nullptr));
        bktktctmname->setText(QCoreApplication::translate("FlightManager", "Name", nullptr));
        bktktctmtypabl->setText(QCoreApplication::translate("FlightManager", "\345\256\242\346\210\267\347\261\273\345\236\213", nullptr));
        bktktctmtyp->setText(QCoreApplication::translate("FlightManager", "Type", nullptr));
        bktktdiscotabl->setText(QCoreApplication::translate("FlightManager", "\346\212\230\346\211\243\346\257\224\344\276\213", nullptr));
        bktktdiscot->setText(QCoreApplication::translate("FlightManager", "Discount", nullptr));
        bktktdepcotabl->setText(QCoreApplication::translate("FlightManager", "\345\207\272\345\217\221\345\233\275\345\256\266", nullptr));
        bktktdepcyabl->setText(QCoreApplication::translate("FlightManager", "\345\207\272\345\217\221\345\237\216\345\270\202", nullptr));
        bktktarrcotabl->setText(QCoreApplication::translate("FlightManager", "\345\210\260\350\276\276\345\233\275\345\256\266", nullptr));
        bktktarrcyabl->setText(QCoreApplication::translate("FlightManager", "\345\210\260\350\276\276\345\237\216\345\270\202", nullptr));
        bktktlineabl->setText(QCoreApplication::translate("FlightManager", "\350\210\252\347\272\277\351\200\211\346\213\251", nullptr));
        bktktshipabl->setText(QCoreApplication::translate("FlightManager", "\350\210\261\344\275\215\347\255\211\347\272\247", nullptr));
        bktktpriceabl->setText(QCoreApplication::translate("FlightManager", "\346\234\272\347\245\250\344\273\267\351\222\261", nullptr));
        bktktprice->setText(QCoreApplication::translate("FlightManager", "Price", nullptr));
        bktkttotalabl->setText(QCoreApplication::translate("FlightManager", "\346\234\272\347\245\250\346\200\273\344\273\267", nullptr));
        bktkttotal->setText(QCoreApplication::translate("FlightManager", "Total", nullptr));
        bktktrest->setText(QCoreApplication::translate("FlightManager", "\345\211\251\344\275\231\347\245\250\346\225\260", nullptr));
        bktktokbtn->setText(QCoreApplication::translate("FlightManager", "\347\241\256\345\256\232\350\264\255\347\245\250", nullptr));
        inserttab->setTabText(inserttab->indexOf(booktickettab), QCoreApplication::translate("FlightManager", "Tab 2", nullptr));
        airplanechange->setTitle(QCoreApplication::translate("FlightManager", "\345\256\242\346\234\272\346\233\264\346\226\260", nullptr));
        chgplanelineabl->setText(QCoreApplication::translate("FlightManager", "\351\200\211\346\213\251\346\233\264\346\224\271\347\232\204\350\210\252\347\272\277", nullptr));
        chgplanetype->setText(QCoreApplication::translate("FlightManager", "\345\256\242\346\234\272\347\261\273\345\236\213", nullptr));
        chgplanelinedep->setText(QCoreApplication::translate("FlightManager", "\350\265\267\347\202\271", nullptr));
        chgplanearr->setText(QCoreApplication::translate("FlightManager", "\347\273\210\347\202\271", nullptr));
        chgplanenotime->setText(QCoreApplication::translate("FlightManager", "\346\227\266\351\227\264", nullptr));
        chgplaneselabl->setText(QCoreApplication::translate("FlightManager", "\351\200\211\346\213\251\345\256\242\346\234\272", nullptr));
        chgplanedep->setText(QCoreApplication::translate("FlightManager", "\350\265\267\347\202\271", nullptr));
        chgplanelinearr->setText(QCoreApplication::translate("FlightManager", "\347\273\210\347\202\271", nullptr));
        chgplanelinetime->setText(QCoreApplication::translate("FlightManager", "\346\227\266\351\227\264", nullptr));
        chgplanelinecpy->setText(QCoreApplication::translate("FlightManager", "\350\210\252\347\251\272\345\205\254\345\217\270", nullptr));
        chgplaneokbtn->setText(QCoreApplication::translate("FlightManager", "\347\241\256\345\256\232\346\233\264\346\226\260", nullptr));
        typechange->setTitle(QCoreApplication::translate("FlightManager", "\345\256\242\346\210\267\347\261\273\345\236\213\344\274\230\346\203\240\346\233\264\346\226\260", nullptr));
        chgtypselabl->setText(QCoreApplication::translate("FlightManager", "\350\257\267\351\200\211\346\213\251\351\234\200\346\233\264\346\226\260\347\232\204\344\274\230\346\203\240\347\261\273\345\236\213", nullptr));
        chgtypinabl->setText(QCoreApplication::translate("FlightManager", "\350\257\267\350\276\223\345\205\245\346\233\264\346\224\271\347\232\204\346\225\260\345\200\274\357\274\2100-90\357\274\211", nullptr));
        chgtypokbtn->setText(QCoreApplication::translate("FlightManager", "\347\241\256\345\256\232\346\233\264\346\226\260", nullptr));
        customerchange->setTitle(QCoreApplication::translate("FlightManager", "\345\256\242\346\210\267\344\277\241\346\201\257\346\233\264\346\226\260", nullptr));
        chgctmtypchk->setText(QCoreApplication::translate("FlightManager", "\347\261\273\345\236\213", nullptr));
        chgctmphechk->setText(QCoreApplication::translate("FlightManager", "\346\211\213\346\234\272", nullptr));
        chgctmnamechk->setText(QCoreApplication::translate("FlightManager", "\345\247\223\345\220\215", nullptr));
        chgctmsexchk->setText(QCoreApplication::translate("FlightManager", "\346\200\247\345\210\253", nullptr));
        chgctmselabel->setText(QCoreApplication::translate("FlightManager", "\350\257\267\351\200\211\346\213\251\351\234\200\346\233\264\346\224\271\347\232\204\345\256\242\346\210\267", nullptr));
        chgctmokbtn->setText(QCoreApplication::translate("FlightManager", "\347\241\256\345\256\232\346\233\264\346\226\260", nullptr));
        ticketchange->setTitle(QCoreApplication::translate("FlightManager", "\350\256\242\347\245\250\346\233\264\346\224\271", nullptr));
        chgtktnoabl->setText(QCoreApplication::translate("FlightManager", "\350\256\242\345\215\225\347\274\226\345\217\267", nullptr));
        chgtktlineabl->setText(QCoreApplication::translate("FlightManager", "\350\210\252\347\272\277\345\217\267", nullptr));
        chgtktdepabl->setText(QCoreApplication::translate("FlightManager", "\350\265\267\347\202\271", nullptr));
        chgtktarrabl->setText(QCoreApplication::translate("FlightManager", "\347\273\210\347\202\271", nullptr));
        chgtkttimeabl->setText(QCoreApplication::translate("FlightManager", "\346\227\266\351\227\264", nullptr));
        chgtktlinechg->setText(QCoreApplication::translate("FlightManager", "\346\233\264\346\224\271\350\210\252\347\272\277\345\217\267", nullptr));
        chgtktshipabl->setText(QCoreApplication::translate("FlightManager", "\350\210\261\344\275\215\347\255\211\347\272\247", nullptr));
        chgtktdepature->setText(QCoreApplication::translate("FlightManager", "\350\265\267\347\202\271", nullptr));
        chgtktarrive->setText(QCoreApplication::translate("FlightManager", "\347\273\210\347\202\271", nullptr));
        chgtkttime->setText(QCoreApplication::translate("FlightManager", "\346\227\266\351\227\264", nullptr));
        chgtktshipchg->setText(QCoreApplication::translate("FlightManager", "\346\233\264\346\224\271\350\210\261\344\275\215\347\255\211\347\272\247", nullptr));
        chgtktokbtn->setText(QCoreApplication::translate("FlightManager", "\347\241\256\345\256\232\346\233\264\346\226\260", nullptr));
        airlinechange->setTitle(QCoreApplication::translate("FlightManager", "\350\210\252\347\272\277\346\233\264\346\226\260", nullptr));
        chglinecmpcek->setText(QCoreApplication::translate("FlightManager", "\350\210\252\347\251\272\345\205\254\345\217\270", nullptr));
        chglinedepcek->setText(QCoreApplication::translate("FlightManager", "\345\207\272\345\217\221\345\237\216\345\270\202", nullptr));
        chglinearrcek->setText(QCoreApplication::translate("FlightManager", "\345\210\260\350\276\276\345\237\216\345\270\202", nullptr));
        chglinedatecek->setText(QCoreApplication::translate("FlightManager", "\345\207\272\345\217\221\346\227\245\346\234\237", nullptr));
        chglinetimecek->setText(QCoreApplication::translate("FlightManager", "\345\207\272\345\217\221\346\227\266\351\227\264", nullptr));
        chglineecocek->setText(QCoreApplication::translate("FlightManager", "\347\273\217\346\265\216\350\210\261\344\273\267\346\240\274", nullptr));
        chglinebuscek->setText(QCoreApplication::translate("FlightManager", "\345\225\206\345\212\241\350\210\261\344\273\267\346\240\274", nullptr));
        chglinedelcek->setText(QCoreApplication::translate("FlightManager", "\345\244\264\347\255\211\350\210\261\344\273\267\346\240\274", nullptr));
        chglineokbtn->setText(QCoreApplication::translate("FlightManager", "\347\241\256\345\256\232\346\233\264\346\226\260", nullptr));
        chglinenoabl->setText(QCoreApplication::translate("FlightManager", "     \350\210\252\347\272\277\347\274\226\345\217\267", nullptr));
        delticket->setTitle(QCoreApplication::translate("FlightManager", "\351\200\200\347\245\250", nullptr));
        delticketnoabl->setText(QCoreApplication::translate("FlightManager", "\350\256\242\345\215\225\347\274\226\345\217\267", nullptr));
        delticketnameabl->setText(QCoreApplication::translate("FlightManager", "\345\256\242\346\210\267\345\247\223\345\220\215", nullptr));
        delticketname->setText(QCoreApplication::translate("FlightManager", "name", nullptr));
        delticketlinenoabl->setText(QCoreApplication::translate("FlightManager", "\350\210\252\347\272\277\347\274\226\345\217\267", nullptr));
        delticketlineno->setText(QCoreApplication::translate("FlightManager", "No.", nullptr));
        delticketdepabl->setText(QCoreApplication::translate("FlightManager", "\345\207\272\345\217\221\345\234\260\347\202\271", nullptr));
        delticketdep->setText(QCoreApplication::translate("FlightManager", "departure", nullptr));
        delticketarrabl->setText(QCoreApplication::translate("FlightManager", "\345\210\260\350\276\276\345\234\260\347\202\271", nullptr));
        delticketarr->setText(QCoreApplication::translate("FlightManager", "arrive", nullptr));
        delticketdeptimeabl->setText(QCoreApplication::translate("FlightManager", "\345\207\272\345\217\221\346\227\266\351\227\264", nullptr));
        delticketdeptime->setText(QCoreApplication::translate("FlightManager", "time", nullptr));
        delticketshipabl->setText(QCoreApplication::translate("FlightManager", "\350\210\261\344\275\215\347\255\211\347\272\247", nullptr));
        delticketship->setText(QCoreApplication::translate("FlightManager", "ship", nullptr));
        delticketokbtn->setText(QCoreApplication::translate("FlightManager", "\347\241\256\350\256\244\345\210\240\351\231\244", nullptr));
        delairline->setTitle(QCoreApplication::translate("FlightManager", "\345\210\240\351\231\244\350\210\252\347\272\277\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("FlightManager", "\346\212\261\346\255\211\357\274\214\346\255\244\345\212\237\350\203\275\346\255\243\345\244\204\344\272\216\346\212\242\344\277\256\345\275\223\344\270\255\343\200\202\343\200\202\343\200\202", nullptr));
        delairplane->setTitle(QCoreApplication::translate("FlightManager", "\345\210\240\351\231\244\345\256\242\346\234\272\344\277\241\346\201\257", nullptr));
        label_3->setText(QCoreApplication::translate("FlightManager", "\346\212\261\346\255\211\357\274\214\346\255\244\345\212\237\350\203\275\346\255\243\345\244\204\344\272\216\346\212\242\344\277\256\345\275\223\344\270\255\343\200\202\343\200\202\343\200\202", nullptr));
        delcustomer->setTitle(QCoreApplication::translate("FlightManager", "\345\210\240\351\231\244\345\256\242\346\210\267\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("FlightManager", "\346\212\261\346\255\211\357\274\214\346\255\244\345\212\237\350\203\275\346\255\243\345\244\204\344\272\216\346\212\242\344\277\256\345\275\223\344\270\255\343\200\202\343\200\202\343\200\202", nullptr));
        delairway->setTitle(QCoreApplication::translate("FlightManager", "\345\210\240\351\231\244\350\210\252\347\251\272\345\205\254\345\217\270\344\277\241\346\201\257", nullptr));
        label_4->setText(QCoreApplication::translate("FlightManager", "\346\212\261\346\255\211\357\274\214\346\255\244\345\212\237\350\203\275\346\255\243\345\244\204\344\272\216\346\212\242\344\277\256\345\275\223\344\270\255\343\200\202\343\200\202\343\200\202", nullptr));
        searchmenu->setTitle(QCoreApplication::translate("FlightManager", "\346\237\245\350\257\242", nullptr));
        insertmeun->setTitle(QCoreApplication::translate("FlightManager", "\346\267\273\345\212\240", nullptr));
        updatemenu->setTitle(QCoreApplication::translate("FlightManager", "\346\233\264\346\226\260", nullptr));
        deletemenu->setTitle(QCoreApplication::translate("FlightManager", "\345\210\240\351\231\244", nullptr));
        quitmenu->setTitle(QCoreApplication::translate("FlightManager", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FlightManager: public Ui_FlightManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIGHTMANAGER_H
