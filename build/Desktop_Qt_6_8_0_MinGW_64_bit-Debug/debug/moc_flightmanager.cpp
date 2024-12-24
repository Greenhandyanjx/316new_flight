/****************************************************************************
** Meta object code from reading C++ file 'flightmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
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
#error "This file was generated using the moc from 6.8.0. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFlightItemWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFlightItemWidgetENDCLASS = QtMocHelpers::stringData(
    "FlightItemWidget"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFlightItemWidgetENDCLASS[] = {

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
    qt_meta_stringdata_CLASSFlightItemWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFlightItemWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFlightItemWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FlightItemWidget, std::true_type>
    >,
    nullptr
} };

void FlightItemWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *FlightItemWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightItemWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFlightItemWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FlightItemWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFlightManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFlightManagerENDCLASS = QtMocHelpers::stringData(
    "FlightManager",
    "receive",
    "",
    "turn2search",
    "turn2insert",
    "turn2update",
    "turn2delete",
    "turn2quit",
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
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFlightManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  338,    2, 0x0a,    1 /* Public */,
       3,    0,  339,    2, 0x08,    2 /* Private */,
       4,    0,  340,    2, 0x08,    3 /* Private */,
       5,    0,  341,    2, 0x08,    4 /* Private */,
       6,    0,  342,    2, 0x08,    5 /* Private */,
       7,    0,  343,    2, 0x08,    6 /* Private */,
       8,    1,  344,    2, 0x08,    7 /* Private */,
      10,    0,  347,    2, 0x08,    9 /* Private */,
      11,    1,  348,    2, 0x08,   10 /* Private */,
      12,    1,  351,    2, 0x08,   12 /* Private */,
      14,    1,  354,    2, 0x08,   14 /* Private */,
      15,    1,  357,    2, 0x08,   16 /* Private */,
      16,    1,  360,    2, 0x08,   18 /* Private */,
      17,    0,  363,    2, 0x08,   20 /* Private */,
      18,    1,  364,    2, 0x08,   21 /* Private */,
      18,    1,  367,    2, 0x08,   23 /* Private */,
      19,    1,  370,    2, 0x08,   25 /* Private */,
      20,    1,  373,    2, 0x08,   27 /* Private */,
      21,    0,  376,    2, 0x08,   29 /* Private */,
      22,    1,  377,    2, 0x08,   30 /* Private */,
      23,    0,  380,    2, 0x08,   32 /* Private */,
      24,    1,  381,    2, 0x08,   33 /* Private */,
      25,    1,  384,    2, 0x08,   35 /* Private */,
      26,    0,  387,    2, 0x08,   37 /* Private */,
      27,    1,  388,    2, 0x08,   38 /* Private */,
      28,    1,  391,    2, 0x08,   40 /* Private */,
      29,    1,  394,    2, 0x08,   42 /* Private */,
      30,    1,  397,    2, 0x08,   44 /* Private */,
      31,    1,  400,    2, 0x08,   46 /* Private */,
      32,    1,  403,    2, 0x08,   48 /* Private */,
      33,    1,  406,    2, 0x08,   50 /* Private */,
      34,    1,  409,    2, 0x08,   52 /* Private */,
      35,    1,  412,    2, 0x08,   54 /* Private */,
      36,    0,  415,    2, 0x08,   56 /* Private */,
      37,    1,  416,    2, 0x08,   57 /* Private */,
      38,    0,  419,    2, 0x08,   59 /* Private */,
      39,    1,  420,    2, 0x08,   60 /* Private */,
      40,    1,  423,    2, 0x08,   62 /* Private */,
      41,    1,  426,    2, 0x08,   64 /* Private */,
      42,    1,  429,    2, 0x08,   66 /* Private */,
      43,    0,  432,    2, 0x08,   68 /* Private */,
      44,    1,  433,    2, 0x08,   69 /* Private */,
      46,    0,  436,    2, 0x08,   71 /* Private */,
      40,    1,  437,    2, 0x08,   72 /* Private */,
      47,    1,  440,    2, 0x08,   74 /* Private */,
      48,    1,  443,    2, 0x08,   76 /* Private */,
      42,    1,  446,    2, 0x08,   78 /* Private */,
      49,    1,  449,    2, 0x08,   80 /* Private */,
      50,    0,  452,    2, 0x08,   82 /* Private */,
      51,    1,  453,    2, 0x08,   83 /* Private */,
      52,    1,  456,    2, 0x08,   85 /* Private */,
      53,    0,  459,    2, 0x08,   87 /* Private */,
      54,    0,  460,    2, 0x08,   88 /* Private */,
      55,    0,  461,    2, 0x08,   89 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   45,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FlightManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSFlightManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFlightManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFlightManagerENDCLASS_t,
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
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlightManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->receive(); break;
        case 1: _t->turn2search(); break;
        case 2: _t->turn2insert(); break;
        case 3: _t->turn2update(); break;
        case 4: _t->turn2delete(); break;
        case 5: _t->turn2quit(); break;
        case 6: _t->on_inserttab_tabBarClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_newokbutton_clicked(); break;
        case 8: _t->on_inserttab_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_chgctmnamechk_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_chgctmphechk_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_chgctmsexchk_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->on_chgctmtypchk_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_chgctmokbtn_clicked(); break;
        case 14: _t->on_chgctmselcom_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->on_chgctmselcom_activated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->on_chgplaneselcom_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_chgplanelinecom_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->on_chgplaneokbtn_clicked(); break;
        case 19: _t->on_chgtypselcom_activated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->on_chgtypokbtn_clicked(); break;
        case 21: _t->on_chgtktnocom_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->on_chgtktlinecom_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->on_chgtktokbtn_clicked(); break;
        case 24: _t->on_chglinecmpcek_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->on_chglinedepcek_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->on_chglinearrcek_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 27: _t->on_chglinedatecek_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 28: _t->on_chglinetimecek_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->on_chglineecocek_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 30: _t->on_chglinebuscek_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 31: _t->on_chglinedelcek_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 32: _t->on_chglinenocom_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->on_chglineokbtn_clicked(); break;
        case 34: _t->on_delticketno_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 35: _t->on_delticketokbtn_clicked(); break;
        case 36: _t->on_bktktctmno_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 37: _t->on_bktktdepcot_activated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 38: _t->on_bktktarrcot_activated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 39: _t->on_bktktarrcy_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 40: _t->on_bktktokbtn_clicked(); break;
        case 41: _t->on_newnoshow_linkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 42: _t->UpdateNewNo(); break;
        case 43: _t->on_bktktdepcot_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 44: _t->on_bktktdepcot_textActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 45: _t->on_bktktarrcot_textActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 46: _t->on_bktktarrcy_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 47: _t->on_bktktarrcy_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 48: _t->updateTicketPrice(); break;
        case 49: _t->on_bktktdepcy_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 50: _t->on_bktktship_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 51: _t->updateTicketNum(); break;
        case 52: _t->Getdelno(); break;
        case 53: _t->on_pushButton_clicked(); break;
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
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFlightManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FlightManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 54;
    }
    return _id;
}
QT_WARNING_POP
