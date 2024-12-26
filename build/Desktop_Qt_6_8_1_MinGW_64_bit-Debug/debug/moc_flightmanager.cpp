/****************************************************************************
** Meta object code from reading C++ file 'flightmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../MainWindow/flightmanager.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flightmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN16FlightItemWidgetE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN16FlightItemWidgetE = QtMocHelpers::stringData(
    "FlightItemWidget"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN16FlightItemWidgetE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject FlightItemWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN16FlightItemWidgetE.offsetsAndSizes,
    qt_meta_data_ZN16FlightItemWidgetE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN16FlightItemWidgetE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FlightItemWidget, std::true_type>
    >,
    nullptr
} };

void FlightItemWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FlightItemWidget *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *FlightItemWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightItemWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN16FlightItemWidgetE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FlightItemWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN13FlightManagerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN13FlightManagerE = QtMocHelpers::stringData(
    "FlightManager",
    "receive",
    "",
    "turn2search",
    "turn2insert",
    "turn2update",
    "turn2delete",
    "turn2quit",
    "turn2welcome",
    "turn2userinfo",
    "on_ItemClicked",
    "QListWidgetItem*",
    "item",
    "on_inserttab_tabBarClicked",
    "index",
    "on_newokbutton_clicked",
    "on_inserttab_currentChanged",
    "on_chgctmnamechk_stateChanged",
    "arg1",
    "on_chgctmphechk_stateChanged",
    "on_chgctmsexchk_stateChanged",
    "on_chgctmtypchk_stateChanged",
    "on_chgctmokbtn_clicked",
    "on_chgctmselcom_activated",
    "on_chgplaneselcom_activated",
    "on_chgplanelinecom_activated",
    "on_chgplaneokbtn_clicked",
    "on_chgtypselcom_activated",
    "on_chgtypokbtn_clicked",
    "on_chgtktnocom_activated",
    "on_chgtktlinecom_activated",
    "on_chgtktokbtn_clicked",
    "on_chglinecmpcek_stateChanged",
    "on_chglinedepcek_stateChanged",
    "on_chglinearrcek_stateChanged",
    "on_chglinedatecek_stateChanged",
    "on_chglinetimecek_stateChanged",
    "on_chglineecocek_stateChanged",
    "on_chglinebuscek_stateChanged",
    "on_chglinedelcek_stateChanged",
    "on_chglinenocom_activated",
    "on_chglineokbtn_clicked",
    "on_delticketno_activated",
    "on_delticketokbtn_clicked",
    "on_bktktctmno_activated",
    "on_bktktdepcot_activated",
    "on_bktktarrcot_activated",
    "on_bktktarrcy_currentIndexChanged",
    "on_bktktokbtn_clicked",
    "on_newnoshow_linkActivated",
    "link",
    "UpdateNewNo",
    "on_bktktdepcot_textActivated",
    "on_bktktarrcot_textActivated",
    "on_bktktarrcy_currentTextChanged",
    "updateTicketPrice",
    "on_bktktdepcy_currentTextChanged",
    "on_bktktship_activated",
    "updateTicketNum",
    "Getdelno",
    "on_pushButton_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN13FlightManagerE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      57,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  356,    2, 0x0a,    1 /* Public */,
       3,    0,  357,    2, 0x08,    2 /* Private */,
       4,    0,  358,    2, 0x08,    3 /* Private */,
       5,    0,  359,    2, 0x08,    4 /* Private */,
       6,    0,  360,    2, 0x08,    5 /* Private */,
       7,    0,  361,    2, 0x08,    6 /* Private */,
       8,    0,  362,    2, 0x08,    7 /* Private */,
       9,    0,  363,    2, 0x08,    8 /* Private */,
      10,    1,  364,    2, 0x08,    9 /* Private */,
      13,    1,  367,    2, 0x08,   11 /* Private */,
      15,    0,  370,    2, 0x08,   13 /* Private */,
      16,    1,  371,    2, 0x08,   14 /* Private */,
      17,    1,  374,    2, 0x08,   16 /* Private */,
      19,    1,  377,    2, 0x08,   18 /* Private */,
      20,    1,  380,    2, 0x08,   20 /* Private */,
      21,    1,  383,    2, 0x08,   22 /* Private */,
      22,    0,  386,    2, 0x08,   24 /* Private */,
      23,    1,  387,    2, 0x08,   25 /* Private */,
      23,    1,  390,    2, 0x08,   27 /* Private */,
      24,    1,  393,    2, 0x08,   29 /* Private */,
      25,    1,  396,    2, 0x08,   31 /* Private */,
      26,    0,  399,    2, 0x08,   33 /* Private */,
      27,    1,  400,    2, 0x08,   34 /* Private */,
      28,    0,  403,    2, 0x08,   36 /* Private */,
      29,    1,  404,    2, 0x08,   37 /* Private */,
      30,    1,  407,    2, 0x08,   39 /* Private */,
      31,    0,  410,    2, 0x08,   41 /* Private */,
      32,    1,  411,    2, 0x08,   42 /* Private */,
      33,    1,  414,    2, 0x08,   44 /* Private */,
      34,    1,  417,    2, 0x08,   46 /* Private */,
      35,    1,  420,    2, 0x08,   48 /* Private */,
      36,    1,  423,    2, 0x08,   50 /* Private */,
      37,    1,  426,    2, 0x08,   52 /* Private */,
      38,    1,  429,    2, 0x08,   54 /* Private */,
      39,    1,  432,    2, 0x08,   56 /* Private */,
      40,    1,  435,    2, 0x08,   58 /* Private */,
      41,    0,  438,    2, 0x08,   60 /* Private */,
      42,    1,  439,    2, 0x08,   61 /* Private */,
      43,    0,  442,    2, 0x08,   63 /* Private */,
      44,    1,  443,    2, 0x08,   64 /* Private */,
      45,    1,  446,    2, 0x08,   66 /* Private */,
      46,    1,  449,    2, 0x08,   68 /* Private */,
      47,    1,  452,    2, 0x08,   70 /* Private */,
      48,    0,  455,    2, 0x08,   72 /* Private */,
      49,    1,  456,    2, 0x08,   73 /* Private */,
      51,    0,  459,    2, 0x08,   75 /* Private */,
      45,    1,  460,    2, 0x08,   76 /* Private */,
      52,    1,  463,    2, 0x08,   78 /* Private */,
      53,    1,  466,    2, 0x08,   80 /* Private */,
      47,    1,  469,    2, 0x08,   82 /* Private */,
      54,    1,  472,    2, 0x08,   84 /* Private */,
      55,    0,  475,    2, 0x08,   86 /* Private */,
      56,    1,  476,    2, 0x08,   87 /* Private */,
      57,    1,  479,    2, 0x08,   89 /* Private */,
      58,    0,  482,    2, 0x08,   91 /* Private */,
      59,    0,  483,    2, 0x08,   92 /* Private */,
      60,    0,  484,    2, 0x08,   93 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FlightManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ZN13FlightManagerE.offsetsAndSizes,
    qt_meta_data_ZN13FlightManagerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN13FlightManagerE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FlightManager, std::true_type>,
        // method 'receive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'turn2search'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'turn2insert'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'turn2update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'turn2delete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'turn2quit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'turn2welcome'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'turn2userinfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ItemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_inserttab_tabBarClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_newokbutton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_inserttab_currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_chgctmnamechk_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_chgctmphechk_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_chgctmsexchk_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_chgctmtypchk_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_chgctmokbtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_chgctmselcom_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_chgctmselcom_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_chgplaneselcom_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_chgplanelinecom_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_chgplaneokbtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_chgtypselcom_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_chgtypokbtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_chgtktnocom_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_chgtktlinecom_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_chgtktokbtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_chglinecmpcek_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_chglinedepcek_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_chglinearrcek_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_chglinedatecek_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_chglinetimecek_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_chglineecocek_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_chglinebuscek_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_chglinedelcek_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_chglinenocom_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_chglineokbtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_delticketno_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_delticketokbtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bktktctmno_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_bktktdepcot_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_bktktarrcot_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_bktktarrcy_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_bktktokbtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_newnoshow_linkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'UpdateNewNo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bktktdepcot_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_bktktdepcot_textActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_bktktarrcot_textActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_bktktarrcy_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_bktktarrcy_currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'updateTicketPrice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bktktdepcy_currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_bktktship_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateTicketNum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Getdelno'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FlightManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FlightManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->receive(); break;
        case 1: _t->turn2search(); break;
        case 2: _t->turn2insert(); break;
        case 3: _t->turn2update(); break;
        case 4: _t->turn2delete(); break;
        case 5: _t->turn2quit(); break;
        case 6: _t->turn2welcome(); break;
        case 7: _t->turn2userinfo(); break;
        case 8: _t->on_ItemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 9: _t->on_inserttab_tabBarClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_newokbutton_clicked(); break;
        case 11: _t->on_inserttab_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->on_chgctmnamechk_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_chgctmphechk_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->on_chgctmsexchk_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->on_chgctmtypchk_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->on_chgctmokbtn_clicked(); break;
        case 17: _t->on_chgctmselcom_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->on_chgctmselcom_activated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->on_chgplaneselcom_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->on_chgplanelinecom_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->on_chgplaneokbtn_clicked(); break;
        case 22: _t->on_chgtypselcom_activated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->on_chgtypokbtn_clicked(); break;
        case 24: _t->on_chgtktnocom_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->on_chgtktlinecom_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->on_chgtktokbtn_clicked(); break;
        case 27: _t->on_chglinecmpcek_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 28: _t->on_chglinedepcek_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->on_chglinearrcek_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 30: _t->on_chglinedatecek_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 31: _t->on_chglinetimecek_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 32: _t->on_chglineecocek_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->on_chglinebuscek_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 34: _t->on_chglinedelcek_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 35: _t->on_chglinenocom_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 36: _t->on_chglineokbtn_clicked(); break;
        case 37: _t->on_delticketno_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 38: _t->on_delticketokbtn_clicked(); break;
        case 39: _t->on_bktktctmno_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 40: _t->on_bktktdepcot_activated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 41: _t->on_bktktarrcot_activated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 42: _t->on_bktktarrcy_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 43: _t->on_bktktokbtn_clicked(); break;
        case 44: _t->on_newnoshow_linkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 45: _t->UpdateNewNo(); break;
        case 46: _t->on_bktktdepcot_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 47: _t->on_bktktdepcot_textActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 48: _t->on_bktktarrcot_textActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 49: _t->on_bktktarrcy_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 50: _t->on_bktktarrcy_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 51: _t->updateTicketPrice(); break;
        case 52: _t->on_bktktdepcy_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 53: _t->on_bktktship_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 54: _t->updateTicketNum(); break;
        case 55: _t->Getdelno(); break;
        case 56: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *FlightManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN13FlightManagerE.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FlightManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 57)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 57;
    }
    return _id;
}
QT_WARNING_POP
