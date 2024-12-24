#include "flightmanager.h"
#include "ui_flightmanager.h"

#include <cstdlib>

#include <iostream>
using std::cout;
using std::endl;
QString FlightManager::customer_Name="";
FlightManager::FlightManager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FlightManager)
{
    ui->setupUi(this);
    if (m_LineInfo.isEmpty()) {
        qDebug() << "Warning: Line info is empty during initialization!";
    }
    if (m_City.isEmpty()) {
        qDebug() << "Warning: City info is empty during initialization!";
    }
    setObjectName("FilghtManager");
    setWindowTitle("316航天信息管理系统");
    ui->searchairWG->setVisible(false);
    ui->lineEdit->setPlaceholderText("请输入出发地城市");
    ui->lineEdit_2->setPlaceholderText("请输入目的地城市");
    ui->arrive->setText("未输入");
    ui->departure->setText("未输入");
    QString date = ui->calendarWidget->selectedDate().toString("yyyy-MM-dd");
    ui->depatime->setText("出发日期 | "+date);
    ui->direct->setPixmap(QPixmap(":/SVG/SVG/dire.svg").scaled(60, 30, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    m_Connect = ConnectDataBase::GetInstance();

    Init();

    //建立信号槽连接
    connect(ui->searchaction, SIGNAL(triggered(bool)), this, SLOT(turn2search()) );
    connect(ui->insertaction, SIGNAL(triggered(bool)), this, SLOT(turn2insert()) );
    connect(ui->updateaction, SIGNAL(triggered(bool)), this, SLOT(turn2update()) );
    connect(ui->deleteaction, SIGNAL(triggered(bool)), this, SLOT(turn2delete()) );
    connect(ui->quitaction, &QAction::triggered, this, &FlightManager::turn2quit);
    connect(ui->departure,&QPushButton::clicked,[=](){
        ui->searchairWG->setVisible(true);
    });
    connect(ui->arrive,&QPushButton::clicked,[=](){
        ui->searchairWG->setVisible(true);
    });
    connect(ui->depatime,&QPushButton::clicked,[=](){
        ui->searchairWG->setVisible(true);
    });
}

FlightManager::~FlightManager()
{
    delete ui;
    cout << "delete FlightManger" << endl;
}

void FlightManager::getuser(){
    // ui->usermenu->setIcon(QIcon(":/SVG/SVG/user.svg"));
    // QFile file(":/SVG/SVG/user.svg");
    // if (!file.exists()) {
    //     qDebug() << "图标文件不存在: " << file.fileName();
    // }
    if(ReturnAccountType(customer_Name)==1)
    ui->usermenu->setTitle("用户: "+customer_Name+" ,欢迎回来!");
    else{
        ui->usermenu->setTitle("管理员: "+customer_Name+" ,欢迎回来!");
    }
}
void FlightManager::Init()
{
    m_Sex.append("男");
    m_Sex.append("女");
    qDebug()<<customer_Name<<"!!!";
    ui->usermenu->setTitle(customer_Name);
    ui->list->setFont(QFont("华文楷体", 15));
    ui->list->insertItem(0, "欢迎");
    ui->list->insertItem(1, "查询");
    ui->list->insertItem(2, "添加");
    ui->list->insertItem(3, "更新");
    ui->list->insertItem(4, "删除");

    ui->list->setCurrentRow(0);
    ui->stackedWidget->setCurrentIndex(0);

    //查询页面中的航班查询标签页
    // ui->searchairlineshow->setColumnCount(19);
    // ui->searchairlineshow->verticalHeader()->setVisible(false);
    // ui->searchairlineshow->setHorizontalHeaderLabels(QStringList() << "航班号" << "航空公司"
    //                                                  << "客机类型" << "出发国家" << "出发城市"
    //                                                  << "到达国家" << "到达城市" << "出发日期"
    //                                                  << "出发时间" << "到达时间" << "经济舱价格"
    //                                                  << "经济舱座位" << "剩余经济舱票数" << "商务舱票价"
    //                                                  << "商务舱座位" << "剩余商务舱票数" << "头等舱票价"
    //                                                  << "头等舱座位" << "剩余头等舱票数");
    GetAirLineInfo();
    ShowAirLineOnSearch();
    ui->searchtoolbox->setItemText(0, "查询航班信息");

    //查询页面中客户查询标签页
    ui->searchcustomershow->setColumnCount(8);
    ui->searchcustomershow->verticalHeader()->setVisible(false);
    ui->searchcustomershow->setHorizontalHeaderLabels(QStringList() << "客户编号" << "客户姓名"
                                                      << "客户类型编号" << "客户类型" << "折扣比例"
                                                      << "身份证号码" << "性别" << "联系方式");
    GetCustomerInfo();
    ShowCustomerOnSearch();

    ui->searchtoolbox->setItemText(1, "查询客户信息");
    ui->searchtoolbox->setCurrentIndex(0);

    //添加页面中的创建客户信息标签页
    JudgeReturnValue(ui->newnoshow, GetMaxNum("SELECT * FROM vi_customernum") );
    ui->newtypeselect->setEditable(false);
    if (!m_CustomerType.size())
        GetCustomerType();
    SetCustomer(ui->newtypeselect, m_CustomerType);
    SetCustomer(ui->newsexshow, m_Sex);
    ui->inserttab->setTabText(0, "创建客户信息");

    //添加页面中的订票信息标签页
    JudgeReturnValue(ui->bktktno, GetMaxNum("SELECT * FROM vi_ticket_max") );
    if (!m_CustomerInfo.size())
        GetCustomerInfo();
    SetCustomer(ui->bktktctmno, m_CustomerNo);
    SetCustomerInfoOnBook(ui->bktktctmno->currentIndex());
    if (!m_Country_Name.size())
        GetCity();
    SetCustomer(ui->bktktdepcot, m_Country_Name);
    SetCityOnBook(ui->bktktdepcy, ui->bktktdepcot->currentText());
    SetCustomer(ui->bktktarrcot, m_Country_Name);
    SetCityOnBook(ui->bktktarrcy, ui->bktktarrcot->currentText());
    if (!m_Ship.size())
        GetShip();
    SetCustomer(ui->bktktship, m_Ship);

    ui->inserttab->setTabText(1, "订票");
    ui->inserttab->setCurrentIndex(0);

    //更新页面中的客户信息更改
    ui->chgctmnamechk->setChecked(false);
    ui->chgctmnameline->setEnabled(false);
    ui->chgctmsexchk->setChecked(false);
    ui->chgctmsexcom->setEditable(false);
    ui->chgctmsexcom->setEnabled(false);
    ui->chgctmphechk->setChecked(false);
    ui->chgctmpheline->setEnabled(false);
    ui->chgctmtypchk->setChecked(false);
    ui->chgctmtypcom->setEditable(false);
    ui->chgctmtypcom->setEnabled(false);
    if (!m_CustomerInfo.size())
        GetCustomerInfo();
    SetCustomer(ui->chgctmselcom, m_CustomerNo);
    SetCustomer(ui->chgctmsexcom, m_Sex);
    SetCustomer(ui->chgctmtypcom, m_CustomerType);
    CustomerValueChange(0);

    //更新页面中的客机信息更改
    GetAirPlaneChange();
    for (int i = 0; i < m_PlaneInfo.size(); ++i)
        ui->chgplaneselcom->addItem(QString::number(m_PlaneInfo[i].plane_no) );
    PlaneValueChange(0);
    //更新页面中客机航线信息的更改

    GetAirLineInfo();
    for (int i = 0; i < m_LineInfo.size(); ++i)
    {
        ui->chgplanelinecom->addItem(QString::number(m_LineInfo[i].line_no) );
        ui->chglinenocom->addItem(QString::number(m_LineInfo[i].line_no) );
    }
    LineChangeOnPlane(0);

    //更新页面中客户优惠类型
    SetCustomer(ui->chgtypselcom, m_CustomerType );
    ui->chgtypselcom->setCurrentIndex(0);
    ui->chgtypinline->setPlaceholderText(QString::number(m_TypeDiscount[ui->chgtypselcom->currentText()]) );

    //更新页面中的订票类型
    GetTicket();
    for (int i = 0; i < m_TicketInfo.size(); ++i)
    {
        ui->chgtktnocom->addItem(QString::number(m_TicketInfo[i].order_id) );
        //删除那个在这里!!!!!!
        ui->delticketno->addItem(QString::number(m_TicketInfo[i].order_id) );
    }
    TicketValueChangeOnUpdate(0);
    if (!m_Ship.size())
        GetShip();
    SetCustomer(ui->chgtktshipcom, m_Ship);
    GetAirLineInfo();
    for (int i = 0; i < m_LineInfo.size(); ++i)
        ui->chgtktlinecom->addItem(QString::number(m_LineInfo[i].line_no) );
    LineChangeOnTicket(ui->chgtktlinecom->currentIndex() );

    //更新页面中航线类型的更改
    GetAirLineInfo();
    ui->chglinecmpcek->setChecked(false);
    ui->chglinedepcek->setChecked(false);
    ui->chglinearrcek->setChecked(false);
    ui->chglinedatecek->setChecked(false);
    ui->chglinetimecek->setChecked(false);
    ui->chglineecocek->setChecked(false);
    ui->chglinebuscek->setChecked(false);
    ui->chglinedelcek->setChecked(false);
    ui->chglinenocom->setEditable(false);
    ui->chglinecmpcom->setEnabled(false);
    ui->chglinecmpcom->setEditable(false);
    ui->chglinedepcom->setEnabled(false);
    ui->chglinedepcom->setEditable(false);
    ui->chglinearrcom->setEnabled(false);
    ui->chglinearrcom->setEditable(false);
    ui->chglinedatedit->setEnabled(false);
    ui->chglinetimedit->setEnabled(false);
    ui->chglineecoedit->setEnabled(false);
    ui->chglinebusedit->setEnabled(false);
    ui->chglinedeledit->setEnabled(false);

    if (!m_Airway.size())
        GetAirWay();
    if (!m_City_Name.size())
        GetCity();
    SetCustomer(ui->chglinecmpcom, m_Airway);
    SetCustomer(ui->chglinedepcom, m_City_Name);
    SetCustomer(ui->chglinearrcom, m_City_Name);
    ValueChangeOnAirLine(ui->chglinenocom->currentIndex() );

    UpdateNewNo();

    //删除页面上的退票

    //删除页面上退票项
    TicketValueChangeOnDelete(ui->delticketno->currentIndex() );
}

int FlightManager::GetMaxNum(const QString& sql)
{
    QSqlQuery* sqlquery = new QSqlQuery;
    try
    {
        if (m_Connect->SelectResult(sqlquery, sql))
            sqlquery->next();
        else
            throw false;
    }
    catch (bool&)
    {
        QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打卡, 请检查网络配置！", QMessageBox::Ok).exec();
        return -2;
    }

    return sqlquery->value(0).toInt();
}

void FlightManager::JudgeReturnValue(QLabel* label, const int& value)
{
    if (value >= 0)
        label->setText(QString::number(value + 1));
    else
        label->setText("数据库无法打开");
}

bool FlightManager::GetCustomerType()
{
    //查询得到所有用户类型名称
    QString sql = "SELECT * FROM vi_type_discount";
    QSqlQuery* sqlquery = new QSqlQuery;
    try
    {
        if (!m_Connect->SelectResult(sqlquery, sql))
            throw false;
    }
    catch (bool&)
    {
        QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打卡, 请检查网络配置！", QMessageBox::Ok).exec();
        return false;
    }

    while (sqlquery->next())
    {
        m_CustomerType.append(sqlquery->value("customertypename").toString() );
        m_TypeDiscount.insert(sqlquery->value("customertypename").toString(), sqlquery->value("discountpercent").toString().toInt() );
    }

    delete sqlquery;
    sqlquery = NULL;

    return true;
}

bool FlightManager::GetAirWay()
{
    QString sql = "SELECT airwayshortname FROM airway";
    QSqlQuery* sqlquery = new QSqlQuery;
    try
    {
        if (!m_Connect->SelectResult(sqlquery, sql))
            throw false;
    }
    catch (bool&)
    {
        QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打卡, 请检查网络配置！", QMessageBox::Ok).exec();
        return false;
    }

    while (sqlquery->next())
        m_Airway.append(sqlquery->value(0).toString());

    delete sqlquery;
    sqlquery = NULL;

    return true;
}

bool FlightManager::GetCity()
{
    QString sql = "SELECT * FROM vi_country_city";
    QSqlQuery* sqlquery = new QSqlQuery;
    try
    {
        if (!m_Connect->SelectResult(sqlquery, sql))
            throw false;
    }
    catch (bool&)
    {
        QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打卡, 请检查网络配置！", QMessageBox::Ok).exec();
        return false;
    }

    while (sqlquery->next())
    {
        City city;
        city.country_no = sqlquery->value("countryno").toString().toInt();
        city.country_name = sqlquery->value("countryname").toString();
        if (0 > m_Country_Name.indexOf(city.country_name))
            m_Country_Name.append(city.country_name);
        city.province = sqlquery->value("provincename").toString();
        city.city = sqlquery->value("cityname").toString();
        m_City_Name.append(city.city);
        m_City.append(city);
    }

    delete sqlquery;
    sqlquery = NULL;

    return true;
}

void FlightManager::SetCustomer(QComboBox* combobox, const QVector<QString>& string)
{
    for (QString str : string)
        combobox->addItem(str);
}

bool FlightManager::GetCustomerInfo()
{
    QString sql = "SELECT * FROM vi_customer_info";
    QSqlQuery* sqlquery = new QSqlQuery;
    try
    {
        if (!m_Connect->SelectResult(sqlquery, sql))
            throw false;
    }
    catch (bool&)
    {
        QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打卡, 请检查网络配置！", QMessageBox::Ok).exec();
        return false;
    }

    if (m_CustomerInfo.size())
        m_CustomerInfo.clear();
    if (m_CustomerNo.size())
        m_CustomerNo.clear();

    while (sqlquery->next())
    {
        Customer ctm;
        ctm.no = sqlquery->value("customerno").toString().toInt();
        m_CustomerNo.append(QString::number(ctm.no));
        ctm.name = sqlquery->value("customername").toString();
        ctm.type_no = sqlquery->value("customertypeno").toString().toInt();
        ctm.type_name = sqlquery->value("customertypename").toString();
        ctm.discount = sqlquery->value("discountpercent").toString().toInt();
        ctm.id = sqlquery->value("identifynum").toString();
        ctm.sex = sqlquery->value("sex").toString();
        ctm.phone = sqlquery->value("phonenum").toString();
        m_CustomerInfo.append(ctm);
    }

    delete sqlquery;
    sqlquery = NULL;

    return true;
}

void FlightManager::CustomerValueChange(const int& order)
{
    ui->chgctmnameline->setText(m_CustomerInfo[order].name);
    ui->chgctmsexcom->setCurrentText(m_CustomerInfo[order].sex);
    ui->chgctmpheline->setText(m_CustomerInfo[order].phone);
    ui->chgctmtypcom->setCurrentText(m_CustomerInfo[order].type_name);
}

bool FlightManager::GetAirPlaneChange()
{
    QString date = QDate::currentDate().toString("yyyy-MM-dd");
    QString time = QTime::currentTime().toString("hh:mm:ss");
    QString sql = QString("SELECT * FROM vi_plane_line_info where departuredate > '")
            + date + QString("' OR (departuredate = '") + date
            + QString("' and departuretime > '") + time + QString("')");
    QSqlQuery* sqlquery = new QSqlQuery;
    try
    {
        if (!m_Connect->SelectResult(sqlquery, sql))
            throw false;
    }
    catch (bool&)
    {
        QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打开, 请检查网络配置！", QMessageBox::Ok).exec();
        return false;
    }

    if (m_PlaneInfo.size())
        m_PlaneInfo.clear();

    while (sqlquery->next())
    {
        AirPlane plane;
        plane.plane_no = sqlquery->value("airplaneno").toString().toInt();
        plane.plane_type = sqlquery->value("airplanetype").toString();
        plane.line_no = sqlquery->value("airlineno").toString();
        plane.departure = sqlquery->value("departurecity").toString();
        plane.arrive = sqlquery->value("arrivecity").toString();
        plane.date = sqlquery->value("departuredate").toString();
        plane.time = sqlquery->value("departuretime").toString();
        m_PlaneInfo.append(plane);
    }

    delete sqlquery;
    sqlquery = NULL;

    return true;
}

void FlightManager::PlaneValueChange(const int& index)
{
    ui->chgplanetype->setText(m_PlaneInfo[index].plane_type);
    ui->chgplanedep->setText(m_PlaneInfo[index].departure);
    ui->chgplanearr->setText(m_PlaneInfo[index].arrive);
    ui->chgplanenotime->setText(m_PlaneInfo[index].date + "\n" + m_PlaneInfo[index].time);
}
bool FlightManager::GetAirLineInfo()
{
    QString date = QDate::currentDate().toString("yyyy-MM-dd");
    QString time = QTime::currentTime().toString("hh:mm:ss");
    QString sql = QString("SELECT * FROM vi_airline_info WHERE departuredate > '")
            + date + QString("' OR (departuredate = '") + date
            + QString("' AND departuretime > '") + time + QString("')");
    QSqlQuery* sqlquery = new QSqlQuery;
    try
    {
        if (!m_Connect->SelectResult(sqlquery, sql))
            throw false;
    }
    catch (bool&)
    {
        QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打开, 请检查网络配置！", QMessageBox::Ok).exec();
        return false;
    }

    if (m_LineInfo.size())
        m_LineInfo.clear();
    while (sqlquery->next())
    {
        AirLine line;
        line.line_no = sqlquery->value("airlineno").toString().toInt();
        line.airway_short_name = sqlquery->value("airwayshortname").toString();
        line.airplane_type = sqlquery->value("airplanetype").toString();
        line.departure_country = sqlquery->value("departurecountry").toString();
        line.departure_city = sqlquery->value("departurecity").toString();
        line.arrive_country = sqlquery->value("arrivecountry").toString();
        line.arrive_city = sqlquery->value("arrivecity").toString();
        line.departure_date = sqlquery->value("departuredate").toString();
        line.departure_time = sqlquery->value("departuretime").toString();
        line.arrive_time = sqlquery->value("arrivetime").toString();
        line.econemy_price = sqlquery->value("economyclassprice").toString().toInt();
        line.econemy_num = sqlquery->value("economyclassnum").toString().toInt();
        line.econemy_rest = line.econemy_num - m_Connect->CallPro(QString("CALL pro_count_ticket(") + QString::number(line.line_no) + ", 3)");
        line.bussiness_price = sqlquery->value("businessclassprice").toString().toInt();
        line.bussiness_num = sqlquery->value("businessclassnum").toString().toInt();
        line.bussiness_rest = line.bussiness_num - m_Connect->CallPro(QString("CALL pro_count_ticket(") + QString::number(line.line_no) + ", 2)");
        line.deluxe_price = sqlquery->value("deluxeclassprice").toString().toInt();
        line.deluxe_num = sqlquery->value("deluxeclassnum").toString().toInt();
        line.deluxe_rest = line.deluxe_num - m_Connect->CallPro(QString("CALL pro_count_ticket(") + QString::number(line.line_no) + ", 2)");
        m_LineInfo.append(line);
    }
    delete sqlquery;
    sqlquery = NULL;

    return true;
}

void FlightManager::LineChangeOnPlane(const int& index)
{
    ui->chgplanelinecpy->setText(m_LineInfo[index].airway_short_name);
    ui->chgplanelinedep->setText(m_LineInfo[index].departure_city);
    ui->chgplanelinearr->setText(m_LineInfo[index].arrive_city);
    ui->chgplanelinetime->setText(m_LineInfo[index].departure_date + "\n" + m_LineInfo[index].departure_time);
}
//getticket 票票票
bool FlightManager::GetTicket()
{
    QString date = QDate::currentDate().toString("yyyy-MM-dd");
    QString time = QTime::currentTime().toString("hh:mm:ss");
    QString sql = QString("SELECT * FROM vi_ticket_change WHERE departuredate > '")
            + date + QString("' OR (departuredate = '") + date
            + QString("' AND departuretime > '") + time + QString("')");
    QSqlQuery* sqlquery = new QSqlQuery;
    try
    {
        if (!m_Connect->SelectResult(sqlquery, sql))
            throw false;
    }
    catch (bool&)
    {
        QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打开, 请检查网络配置！", QMessageBox::Ok).exec();
        return false;
    }

    if (m_TicketInfo.size())
        m_TicketInfo.clear();

    while (sqlquery->next())
    {
        Ticket ticket;
        ticket.order_id = sqlquery->value("order_id").toString().toInt();
        ticket.customer_name = sqlquery->value("customer_name").toString();
        ticket.airline_no = sqlquery->value("airlineno").toString().toInt();
        ticket.departure = sqlquery->value("departurecity").toString();
        ticket.arrive = sqlquery->value("arrivecity").toString();
        ticket.date = sqlquery->value("departuredate").toString();
        ticket.time = sqlquery->value("departuretime").toString();
        ticket.ship_no = sqlquery->value("shipno").toString().toInt();
        ticket.ship_name = sqlquery->value("shipname").toString();
        m_TicketInfo.append(ticket);
    }

    delete sqlquery;
    sqlquery = NULL;

    return true;
}
//
void FlightManager::TicketValueChangeOnUpdate(const int &index)
{
    ui->chgtktlineabl->setText(QString::number(m_TicketInfo[index].airline_no) );
    ui->chgtktdepabl->setText(m_TicketInfo[index].departure);
    ui->chgtktarrabl->setText(m_TicketInfo[index].arrive);
    ui->chgtkttimeabl->setText(m_TicketInfo[index].date + "\n" + m_TicketInfo[index].time);
    ui->chgtktshipabl->setText(m_TicketInfo[index].ship_name);
}

bool FlightManager::GetShip()
{
    QString sql = "SELECT * FROM vi_ship_name";
    QSqlQuery* sqlquery = new QSqlQuery;
    try
    {
        if (!m_Connect->SelectResult(sqlquery, sql))
            throw false;
    }
    catch (bool&)
    {
        QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打卡, 请检查网络配置！", QMessageBox::Ok).exec();
        return false;
    }

    while (sqlquery->next())
        m_Ship.append(sqlquery->value(0).toString());

    delete sqlquery;
    sqlquery = NULL;

    return true;
}

void FlightManager::LineChangeOnTicket(const int &index)
{
    ui->chgtktdepature->setText(m_LineInfo[index].departure_city);
    ui->chgtktarrive->setText(m_LineInfo[index].arrive_city);
    ui->chgtkttime->setText(m_LineInfo[index].departure_date + "\n" + m_LineInfo[index].departure_time);
}

void FlightManager::ValueChangeOnAirLine(const int& index)
{
    ui->chglinecmpcom->setCurrentText(m_LineInfo[index].airway_short_name);
    ui->chglinedepcom->setCurrentText(m_LineInfo[index].departure_city);
    ui->chglinearrcom->setCurrentText(m_LineInfo[index].arrive_city);

    QStringList datelist = m_LineInfo[index].departure_date.split("-");
    int indate[3];
    int i = 0;

    for (QString d: datelist)
    {
        indate[i] = d.toInt();
        ++i;
    }

    QDate date(indate[0], indate[1], indate[2]);
    ui->chglinedatedit->setDate(date);
    QTime time = QTime::fromString(m_LineInfo[index].departure_time);

    ui->chglinetimedit->setTime(time);
    ui->chglineecoedit->setText(QString::number(m_LineInfo[index].econemy_price));
    ui->chglinebusedit->setText(QString::number(m_LineInfo[index].bussiness_price));
    ui->chglinedeledit->setText(QString::number(m_LineInfo[index].deluxe_price));
}

void FlightManager::TicketValueChangeOnDelete(const int& index)
{
    ui->delticketname->setText(m_TicketInfo[index].customer_name);
    ui->delticketlineno->setText(QString::number(m_TicketInfo[index].airline_no));
    ui->delticketdep->setText(m_TicketInfo[index].departure);
    ui->delticketarr->setText(m_TicketInfo[index].arrive);
    ui->delticketdeptime->setText(m_TicketInfo[index].date + "\n" + m_TicketInfo[index].time);
    ui->delticketship->setText(m_TicketInfo[index].ship_name);
}

void FlightManager::SetCustomerInfoOnBook(const int& index)
{
    ui->bktktctmname->setText(m_CustomerInfo[index].name);
    ui->bktktctmtyp->setText(m_CustomerInfo[index].type_name);
    ui->bktktdiscot->setText(QString::number(m_CustomerInfo[index].discount) );
    updateTicketPrice();
    updateTicketNum();
}
//
void FlightManager::SetCityOnBook(QComboBox* combobox, const QString &index)
{
    combobox->clear();
    if (m_City.isEmpty())
    {
        qDebug() << "No city data available.";
        return;
    }

    bool found = false;
    for (int i = 0; i < m_City.size(); ++i)
    {
        if (index.compare(m_City[i].country_name) == 0)
        {
            found = true;
            if (m_City[i].province.isEmpty())
                combobox->addItem(m_City[i].city);
            else
                combobox->addItem(m_City[i].province + "," + m_City[i].city);
        }
    }

    if (!found)
        qDebug() << "No matching cities found for country: " << index;
}
//tag1
//
//查询修改
// void FlightManager::ShowAirLineOnSearch()
// {
//     ui->searchairlineshow->setRowCount(m_LineInfo.size());
//     for (int i = 0; i < m_LineInfo.size(); ++i)
//     {
//         ui->searchairlineshow->setItem(i, 0, new QTableWidgetItem(QString::number(m_LineInfo[i].line_no)) );
//         ui->searchairlineshow->setItem(i, 1, new QTableWidgetItem(m_LineInfo[i].airway_short_name) );
//         ui->searchairlineshow->setItem(i, 2, new QTableWidgetItem(m_LineInfo[i].airplane_type) );
//         ui->searchairlineshow->setItem(i, 3, new QTableWidgetItem(m_LineInfo[i].departure_country) );
//         ui->searchairlineshow->setItem(i, 4, new QTableWidgetItem(m_LineInfo[i].departure_city) );
//         ui->searchairlineshow->setItem(i, 5, new QTableWidgetItem(m_LineInfo[i].arrive_country) );
//         ui->searchairlineshow->setItem(i, 6, new QTableWidgetItem(m_LineInfo[i].arrive_city) );
//         ui->searchairlineshow->setItem(i, 7, new QTableWidgetItem(m_LineInfo[i].departure_date) );
//         ui->searchairlineshow->setItem(i, 8, new QTableWidgetItem(m_LineInfo[i].departure_time) );
//         ui->searchairlineshow->setItem(i, 9, new QTableWidgetItem(m_LineInfo[i].arrive_time) );
//         ui->searchairlineshow->setItem(i, 10, new QTableWidgetItem(QString::number(m_LineInfo[i].econemy_price)) );
//         ui->searchairlineshow->setItem(i, 11, new QTableWidgetItem(QString::number(m_LineInfo[i].econemy_num)) );
//         ui->searchairlineshow->setItem(i, 12, new QTableWidgetItem(QString::number(m_LineInfo[i].econemy_rest)) );
//         ui->searchairlineshow->setItem(i, 13, new QTableWidgetItem(QString::number(m_LineInfo[i].bussiness_price)) );
//         ui->searchairlineshow->setItem(i, 14, new QTableWidgetItem(QString::number(m_LineInfo[i].bussiness_num)) );
//         ui->searchairlineshow->setItem(i, 15, new QTableWidgetItem(QString::number(m_LineInfo[i].bussiness_rest)) );
//         ui->searchairlineshow->setItem(i, 16, new QTableWidgetItem(QString::number(m_LineInfo[i].deluxe_price)) );
//         ui->searchairlineshow->setItem(i, 17, new QTableWidgetItem(QString::number(m_LineInfo[i].deluxe_num)) );
//         ui->searchairlineshow->setItem(i, 18, new QTableWidgetItem(QString::number(m_LineInfo[i].deluxe_rest)) );
//     }
// }
void FlightManager::ShowAirLineOnSearch() {
    ui->searchairlineshow->clear(); // 清空列表
    // ui->searchairlineshow->setStyleSheet("");
    for (const auto &line : m_LineInfo) {
        QListWidgetItem *item = new QListWidgetItem(ui->searchairlineshow);
        // 创建航班数据结构
        FlightData data;
        data.airlineName = line.airway_short_name;
        data.flightNo = QString::number(line.line_no);
        data.airplaneType = line.airplane_type;
        QStringList ql1,ql2;
        QString time1,time2;
        ql1=line.departure_time.split(':',Qt::SkipEmptyParts);
        time1=ql1[0]+":"+ql1[1];
        data.departureTime = time1;
        data.departureAirport = line.departure_country+" "+line.departure_city;
        ql2=line.arrive_time.split(':',Qt::SkipEmptyParts);
        time2=ql2[0]+":"+ql2[1];
        data.arriveTime = time2;
        data.arriveAirport =line.arrive_country+" "+ line.arrive_city;
        int a1=ql1[0].toInt(),a2=ql2[0].toInt();
        if(a2<a1)a2+=24;
        int b1=ql1[1].toInt(),b2=ql2[1].toInt();
        if(b2<b1){
            a2-=1;
            b2+=60;
        }
        if(b2!=b1)
        data.duration = QString::number(a2-a1)+"小时"+QString::number(b2-b1)+"分"; // 可以根据起飞和到达时间计算
        else data.duration = QString::number(a2-a1)+"小时";
        data.price = line.econemy_price;

        // 创建并填充自定义小部件
        FlightItemWidget *flightWidget = new FlightItemWidget;
        flightWidget->setFlightData(data);

        item->setSizeHint(flightWidget->sizeHint()); // 调整项大小
        ui->searchairlineshow->addItem(item);
        ui->searchairlineshow->setItemWidget(item, flightWidget);
    }
}
//

void FlightManager::ShowCustomerOnSearch()
{
    ui->searchcustomershow->setRowCount(m_CustomerInfo.size());
    for (int i = 0; i < m_CustomerInfo.size(); ++i)
    {
        ui->searchcustomershow->setItem(i, 0, new QTableWidgetItem(QString::number(m_CustomerInfo[i].no)) );
        ui->searchcustomershow->setItem(i, 1, new QTableWidgetItem(m_CustomerInfo[i].name) );
        ui->searchcustomershow->setItem(i, 2, new QTableWidgetItem(QString::number(m_CustomerInfo[i].type_no)) );
        ui->searchcustomershow->setItem(i, 3, new QTableWidgetItem(m_CustomerInfo[i].type_name) );
        ui->searchcustomershow->setItem(i, 4, new QTableWidgetItem(QString::number(m_CustomerInfo[i].discount)) );
        ui->searchcustomershow->setItem(i, 5, new QTableWidgetItem(m_CustomerInfo[i].id) );
        ui->searchcustomershow->setItem(i, 6, new QTableWidgetItem(m_CustomerInfo[i].sex) );
        ui->searchcustomershow->setItem(i, 7, new QTableWidgetItem(m_CustomerInfo[i].phone) );
    }
}

//void FlightManager::resizeEvent(QResizeEvent*)
//{
//    // 计算宽度和高度的缩放比例
//    qreal ratioW = width() / 852.0;
//    qreal ratioH = height() / 595.0;

//    ui->gridLayoutWidget->setGeometry(0, 0, 239 * ratioW, 570 * ratioH);//重画左边列表
//    ui->gridLayoutWidget_2->setGeometry(239 * ratioW, 0, 609 * ratioW, 570 * ratioH);//重画右边stackwidget
//    ui->welcomelabel->setGeometry(90 * ratioW, 80 * ratioH, 231 * ratioW, 51 * ratioH);//重画欢迎标签
//    ui->gridLayoutWidget_3->setGeometry(1 * ratioW, 1 * ratioH, 609 * ratioW, 570 * ratioH);//重画插入面板

//    //重画“创建客户信息板面”
//    ui->newnolabel->setGeometry(210 * ratioW, 110 * ratioH, 61 * ratioW, 41 * ratioH);
//    ui->newnoshow->setGeometry(330 * ratioW, 113 * ratioH, 121 * ratioW, 31 * ratioH);
//    ui->newnamelabel->setGeometry(210 * ratioW, 160 * ratioH,71 * ratioW, 41 * ratioH);
//    ui->newnamedit->setGeometry(330 * ratioW, 160 * ratioH, 121 * ratioW, 31 * ratioH);
//    ui->newtypelabel->setGeometry(210 * ratioW, 210 * ratioH, 71 * ratioW, 41 * ratioH);
//    ui->newtypeselect->setGeometry(330 * ratioW, 220 * ratioH, 121 * ratioW, 24 * ratioH);
//    ui->newidlabel->setGeometry(210 * ratioW, 270 * ratioH, 71 * ratioW, 31 * ratioH);
//    ui->newidedit->setGeometry(330 * ratioW, 270 * ratioH, 121 * ratioW, 24 * ratioH);
//    ui->newsexlabel->setGeometry(210 * ratioW, 320 * ratioH, 61 * ratioW, 21 * ratioH);
//    ui->newsexshow->setGeometry(330 * ratioW, 320 * ratioH, 121 * ratioW, 24 * ratioH);
//    ui->newphonelabel->setGeometry(210 * ratioW, 360 * ratioH, 61 * ratioW, 31 * ratioH);
//    ui->newphonedit->setGeometry(330 * ratioW, 370 * ratioH, 121 * ratioW, 24 * ratioH);
//    ui->newokbutton->setGeometry(480 * ratioW, 450 * ratioH, 101 * ratioW, 41 * ratioH);

//    //重画“更新面板”
//    ui->layoutWidget->setGeometry(0, 0, 669 * ratioW, 570 * ratioH);
//    //重画“更新客户信息面板”
//    ui->layoutWidget1->setGeometry(4 * ratioW, 60 * ratioH, 327 * ratioW, 140 * ratioH);//重画需更改栏目的布局
//    ui->widget->setGeometry(1 * ratioW, 32 * ratioH, 327 * ratioW, 27 * ratioH);//重画“标签 选择 确定”按钮的布局

//    //重画“更新客机航线信息面板”

//    //重画“更新客户类型优惠信息面板”

//}

void FlightManager::closeEvent(QCloseEvent *)
{
    cout << "Close FlightManger" << endl;
}

//公共槽，用于接收登陆界面的信号，接收到信号后就显示主界面
void FlightManager::receive()
{
    cout << "FlightManager Show" << endl;
    show();
}

//返回此客户的账号是管理者还是普通用户
int FlightManager::ReturnAccountType(const QString &customerName) {
    QSqlQuery query;
    QString queryString = "SELECT account.type "
                          "FROM account "
                          "WHERE account.account = '"+customerName+"'";
    query.prepare(queryString);
    qDebug()<<queryString;
    if (query.exec()) {
        query.next();
        int accountType = query.value("type").toInt(); // 直接转换为整数类型
            return accountType;
    } else {
        qDebug() << "Error executing query: " << query.lastError().text();
    }
    // 默认情况下，如果没有找到匹配的账号类型，返回-1
    return -1;
}

//菜单栏动作
void FlightManager::turn2search()
{
    ui->list->setCurrentRow(1);
    ui->stackedWidget->setCurrentIndex(1);
}

void FlightManager::turn2insert()
{
    ui->list->setCurrentRow(2);
    ui->stackedWidget->setCurrentIndex(2);
}

void FlightManager::turn2update()
{
    // 检查账号类型是否为管理者，如果不是则直接返回
    int accountType = ReturnAccountType(customer_Name);
    qDebug()<<accountType;
    if (accountType != 0) {
        QMessageBox::warning(this, "您不是管理员", "只有管理可以更新！", QMessageBox::Ok);
        return;
    }
    ui->list->setCurrentRow(3);
    ui->stackedWidget->setCurrentIndex(3);
}

void FlightManager::turn2delete()
{
    // 检查账号类型是否为管理者，如果不是则直接返回
    int accountType = ReturnAccountType(customer_Name);
    if (accountType != 0) {
        QMessageBox::warning(this, "您不是管理员", "只有管理可以删除", QMessageBox::Ok);
        return;
    }
    ui->list->setCurrentRow(4);
    ui->stackedWidget->setCurrentIndex(4);
}

void FlightManager::turn2quit()
{
    qDebug() << "Exiting application...";
    QCoreApplication::quit();
}

void FlightManager::on_inserttab_tabBarClicked(int index)
{
    if (0 == index)
    {
        JudgeReturnValue(ui->newnoshow, GetMaxNum("SELECT * FROM vi_customernum"));
        ui->newtypeselect->clear();
        if (!m_CustomerType.size())
            GetCustomerType();
        for (QString str : m_CustomerType)
            ui->newtypeselect->addItem(str);
    }
}

void FlightManager::UpdateNewNo()
{
    // 查询 customer 表中最大的 no
    QString sql = "SELECT MAX(no) FROM customer";
    QSqlQuery query;

    try {
        if (!query.exec(sql)) {
            throw std::runtime_error("Failed to query max no: " + query.lastError().text().toStdString());
        }

        int maxNo = 0;
        if (query.next()) {
            maxNo = query.value(0).toInt(); // 获取最大值
        }

        // 设置 newnoshow 的值为 maxNo + 1
        ui->newnoshow->setText(QString::number(maxNo + 1));
    } catch (const std::exception& e) {
        QMessageBox::warning(this, "错误", QString("获取编号失败：%1").arg(e.what()), QMessageBox::Ok);
    }
}

void FlightManager::on_newokbutton_clicked()
{
    QVector<QString> insertstr;
    QString no = ui->newnoshow->text();
    insertstr.append(no);
    QString name = ui->newnamedit->text();
    insertstr.append(name);
    QString type = QString::number(ui->newtypeselect->currentIndex() + 1);
    insertstr.append(type);
    QString id = ui->newidedit->text();
    insertstr.append(id);
    QString sex = ui->newsexshow->currentText();
    insertstr.append(sex);
    QString phone = ui->newphonedit->text();
    insertstr.append(phone);

    QString sql = "INSERT INTO customer VALUES (?, ?, ?, ?, ?, ?)";
    QString rtn = m_Connect->InsertValue(sql, 6, insertstr);
    try
    {
        if ("Success" != rtn)
            throw false;
        QMessageBox(QMessageBox::Information, "添加成功", "恭喜，成功新添一名客户", QMessageBox::Ok).exec();

        ui->newnoshow->setText(QString::number(no.toInt() + 1));
        ui->newnamedit->clear();
        ui->newtypeselect->setCurrentIndex(0);
        ui->newidedit->clear();
        ui->newphonedit->clear();
    }
    catch (bool&)
    {
        QMessageBox(QMessageBox::Warning, "插入失败", rtn, QMessageBox::Ok).exec();
    }
}

void FlightManager::on_inserttab_currentChanged(int index)
{
    if (0 == index)
    {
        ui->newnamedit->clear();
        ui->newtypeselect->setCurrentIndex(0);
        ui->newidedit->clear();
        ui->newphonedit->clear();
    }
}

void FlightManager::on_chgctmnamechk_stateChanged(int arg1)
{
    if (arg1)
        ui->chgctmnameline->setEnabled(true);
    else
        ui->chgctmnameline->setEnabled(false);
}

void FlightManager::on_chgctmphechk_stateChanged(int arg1)
{
    if (arg1)
        ui->chgctmpheline->setEnabled(true);
    else
        ui->chgctmpheline->setEnabled(false);
}

void FlightManager::on_chgctmsexchk_stateChanged(int arg1)
{
    if (arg1)
        ui->chgctmsexcom->setEnabled(true);
    else
        ui->chgctmsexcom->setEnabled(false);
}

void FlightManager::on_chgctmtypchk_stateChanged(int arg1)
{
    if (arg1)
        ui->chgctmtypcom->setEnabled(true);
    else
        ui->chgctmtypcom->setEnabled(false);
}

void FlightManager::on_chgctmokbtn_clicked()//更新用户信息
{
    bool chg_name = ui->chgctmnamechk->isChecked();
    bool chg_phone = ui->chgctmphechk->isChecked();
    bool chg_sex = ui->chgctmsexchk->isChecked();
    bool chg_tye = ui->chgctmtypchk->isChecked();

    if (!chg_name && !chg_phone && !chg_sex && !chg_tye)
    {
        QMessageBox(QMessageBox::Warning, "更新错误", "请至少选择一项更新项", QMessageBox::Ok).exec();
        return;
    }

    QString name = ui->chgctmnameline->text();
    QString phone = ui->chgctmpheline->text();
    QString sex = ui->chgctmsexcom->currentText();
    int type = ui->chgctmtypcom->currentIndex() + 1;

    QString ctmno = ui->chgctmselcom->currentText();
    QString udtname = QString("UPDATE customer SET name = '") + name + QString("' WHERE no = ") + ctmno;
    QString udtphe = QString("UPDATE customer SET phone = '") + phone + QString("' WHERE no = ") + ctmno;
    QString udtsex = QString("UPDATE customer SET sex = '") + sex + QString("' WHERE no = ") + ctmno;
    QString udttye = QString("UPDATE customer SET type = '") + QString::number(type) + QString("' WHERE no = ") + ctmno;
    if (!chg_name)
        udtname = "";
    if (!chg_phone)
        udtphe = "";
    if (!chg_sex)
        udtsex = "";
    if (!chg_tye)
        udttye = "";
    qDebug()<<"sqlname"<<udtname;
    qDebug()<<"sqlphe"<<udtphe;
    qDebug()<<"sqlsex"<<udtsex;
    qDebug()<<"sqltype"<<udttye;

    QVector<QString> udtsql;
    udtsql.append(udtname);
    udtsql.append(udtphe);
    udtsql.append(udtsex);
    udtsql.append(udttye);
    QString rtn = m_Connect->UpdateValue(udtsql);
    if (rtn == "Success")
        QMessageBox(QMessageBox::Information, "成功", "更新成功", QMessageBox::Ok).exec();
    else
        QMessageBox(QMessageBox::Critical, "更新错误", rtn, QMessageBox::Ok).exec();

    QSqlQuery *qsql = new QSqlQuery();
    QString chk_sql = "SELECT * FROM ticket where customer_id = "+ctmno;
    try
    {
        if(!m_Connect->SelectResult(qsql,chk_sql))
            throw false;
    }
    catch(bool&)
    {
        QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打卡, 请检查网络配置！", QMessageBox::Ok).exec();
        return;
    }
    while(qsql->next())
    {
        QString orderno  = qsql->value("order_id").toString();
        QVector<QString> update;
        QString update_name = "UPDATE ticket SET customer_name = '"+ name +"' WHERE order_id = "+orderno;

        QString customer_type;
        if(type == 1)
            customer_type = "普通用户";
        else if(type == 2)
            customer_type = "会员";
        else if(type == 3)
            customer_type = "VIP";
        QString update_type = "UPDATE ticket SET customer_type = '"+customer_type + "' WHERE order_id = "+orderno;
        //获得优惠-type对应

        QSqlQuery *qs = new QSqlQuery();
        QString chk = "SELECT * FROM vi_type_discount WHERE customertypename = '"+customer_type+"'";
        try
        {
            if (!m_Connect->SelectResult(qs, chk))
                throw false;
        }
        catch (bool&)
        {
            QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打卡, 请检查网络配置！", QMessageBox::Ok).exec();
            return;
        }
        qs->next();
        //更新正确价格
        int discountpercent = qs->value("discountpercent").toInt();
        QString update_discountpercent = "UPDATE ticket SET discount_rate = "+QString::number(discountpercent)+" WHERE order_id = "+orderno;
        int oriprice = qsql->value("ticket_price").toInt();

        double new_price = (double)oriprice*(discountpercent)/100.0;
        QString update_total_price = "UPDATE ticket SET total_price = " + QString::number(new_price) + " WHERE order_id = "+orderno;
        update.append(update_name);
        update.append(update_type);
        update.append(update_discountpercent);
        update.append(update_total_price);
        QString rtn = m_Connect->UpdateValue(update);
        // if (rtn == "Success")
        //     QMessageBox(QMessageBox::Information, "成功", "更新成功", QMessageBox::Ok).exec();
        // else
        //     QMessageBox(QMessageBox::Critical, "更新错误", rtn, QMessageBox::Ok).exec();
    }






}

void FlightManager::on_chgctmselcom_activated(int index)
{
    CustomerValueChange(index);
}

void FlightManager::on_chgctmselcom_activated(const QString &arg1)
{
    GetCustomerInfo();
}

void FlightManager::on_chgplaneselcom_activated(int index)
{
    PlaneValueChange(index);
}

void FlightManager::on_chgplanelinecom_activated(int index)
{
    LineChangeOnPlane(index);
}

void FlightManager::on_chgplaneokbtn_clicked()
{
    QString plane_no = ui->chgplaneselcom->currentText();
    QString chg_line = ui->chgplanelinecom->currentText();

    QSqlQuery *qsql  = new QSqlQuery;
    QString search_sql = "SELECT * FROM vi_airline_info WHERE airlineno = " + chg_line;
    try
    {
        if (!m_Connect->SelectResult(qsql, search_sql))
            throw false;
    }
    catch (bool&)
    {
        QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打卡, 请检查网络配置！", QMessageBox::Ok).exec();
        return;
    }
    qsql->next();
    QString depareture_city  = qsql->value("departurecity").toString();
    QString arrival_city = qsql->value("arrivecity").toString();
    QString departure_date = qsql ->value("departuredate").toString();
    QString departure_time = qsql ->value("departuretime").toString();
    QString sql = "UPDATE vi_plane_line_info SET airlineno = " + chg_line
                  + " ,departurecity = '" + depareture_city
                  + "' ,arrivecity = '" + arrival_city
                  + "',departuredate = '" + departure_date
                  + "',departuretime = '" + departure_time
                  + "' WHERE airplaneno = " + plane_no;
    qDebug()<<"sql:"<<sql;

    QVector<QString> plane_sql;
    plane_sql.append(sql);
    QString rtn = m_Connect->UpdateValue(plane_sql);
    if (rtn == "Success")
        QMessageBox(QMessageBox::Information, "成功", "更新成功", QMessageBox::Ok).exec();
    else
        QMessageBox(QMessageBox::Critical, "更新错误", rtn, QMessageBox::Ok).exec();
}

void FlightManager::on_chgtypselcom_activated(const QString &arg1)
{
    ui->chgtypinline->setPlaceholderText(QString::number(m_TypeDiscount[arg1]) );
}

void FlightManager::on_chgtypokbtn_clicked()
{
    int discount = ui->chgtypinline->text().toInt();
    qDebug()<<discount<<ui->chgtypselcom->currentText();
    if (discount <= 0 || discount > 90)
    {
        QMessageBox(QMessageBox::Critical, "违法输入", "只可以输入0-90之间的数字", QMessageBox::Ok).exec();
        return;
    }
    else
    {
        QString sql = "UPDATE customer_type SET discountpercent = " + QString::number(discount)
                + " WHERE typename = '" + ui->chgtypselcom->currentText() + "'";
        qDebug()<<sql;
        QVector<QString> discount_sql;
        discount_sql.append(sql);
        QString type_name = ui->chgtypselcom->currentText();
        QString sqlq = "UPDATE vi_type_discount SET discountpercent = " + QString::number(100-discount)
                       +" WHERE customertypename = '" +ui->chgtypselcom->currentText() +"'";
        QString rtn = m_Connect->UpdateValue(discount_sql);
        if (rtn == "Success")
            QMessageBox(QMessageBox::Information, "成功", "更新成功", QMessageBox::Ok).exec();
        else
            QMessageBox(QMessageBox::Critical, "更新错误", rtn, QMessageBox::Ok).exec();
        QSqlQuery *qsql = new QSqlQuery();
        QString chk = "SELECT * FROM ticket WHERE customer_type = '" + type_name + "'";
        try
        {
            if (!m_Connect->SelectResult(qsql, chk))
                throw false;
        }
        catch (bool&)
        {
            QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打卡, 请检查网络配置！", QMessageBox::Ok).exec();
            return;
        }
        while(qsql->next())
        {
            QVector<QString> update;
            QString orderno = qsql->value("order_id").toString();
            QString update_discountpercent = "UPDATE ticket SET discount_rate = "+QString::number(100-discount)+" WHERE order_id = "+orderno;
            int oriprice = qsql->value("ticket_price").toInt();

            double new_price = (double)oriprice*(100-discount)/100.0;
            QString update_total_price = "UPDATE ticket SET total_price = " + QString::number(new_price) + " WHERE order_id = "+orderno;
            update.append(update_discountpercent);
            update.append(update_total_price);
            QString rtn = m_Connect->UpdateValue(update);
            // if (rtn == "Success")
            //     QMessageBox(QMessageBox::Information, "成功", "更新成功", QMessageBox::Ok).exec();
            // else
            //     QMessageBox(QMessageBox::Critical, "更新错误", rtn, QMessageBox::Ok).exec();
        }
    }
}

void FlightManager::on_chgtktnocom_activated(int index)
{
    TicketValueChangeOnUpdate(index);
}

void FlightManager::on_chgtktlinecom_activated(int index)
{
    LineChangeOnTicket(index);
}

void FlightManager::on_chgtktokbtn_clicked()
{
    int book_num = ui->chgtktnocom->currentText().toInt();
    int line = ui->chgtktlinecom->currentText().toInt();
    int ship = ui->chgtktshipcom->currentIndex() ;
    //chk if changed
    //查询对饮班次信息，并且判定是否有进行更改，两个维度，ship 和 route
    QString check_sql = "SELECT * FROM vi_ticket_change WHERE order_id = " + QString::number(book_num);
    QSqlQuery *sqlq = new QSqlQuery;
    try
    {
        if (!m_Connect->SelectResult(sqlq, check_sql))
            throw false;
    }
    catch (bool&)
    {
        QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打卡, 请检查网络配置！", QMessageBox::Ok).exec();
        return;
    }
    sqlq->next();
    bool chg_line = (line != sqlq->value("airlineno").toInt()) ? true : false;
    bool chg_ship = ((ship+567) != (sqlq->value("shipno").toInt())) ? true :false;
    // qDebug()<<"line "<<line<< "line in database "<<sqlq->value("airlineno").toInt();
    // qDebug()<<"ship"<<ship+567<<"ship in database "<<sqlq->value("shipno").toInt();
    // //qDebug()<<"test current :"<<book_num<<" "<<line<<" "<<ship<<" "<<"in database"<<sqlq->value("airlineno").toInt()<<" "<<sqlq->value("shipno").toInt();
    // qDebug()<<chg_line<<" "<<chg_ship;
    // qDebug()<<"test Break";

    delete sqlq;
    sqlq = NULL;

    if (!chg_line && !chg_ship)
    {
        QMessageBox(QMessageBox::Warning, "更新错误", "请选择不同值进行更新", QMessageBox::Ok).exec();
        return;
    }
    else
    {
        QString search_line_ship = "SELECT * FROM ticket WHERE order_id =" + QString::number(book_num);
        qDebug()<<"search_line_ship"<<search_line_ship;

        QSqlQuery* sqlquery = new QSqlQuery;
        try
        {
            if (!m_Connect->SelectResult(sqlquery, search_line_ship))
                throw false;
        }
        catch (bool&)
        {
            QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打卡, 请检查网络配置！", QMessageBox::Ok).exec();
            return;
        }

        sqlquery->next();
        //int departure_country = sqlquery->value("departurecountry").toString().toInt();
        QString departure_country = sqlquery->value("departure_country").toString();
        QString departure_city = sqlquery->value("departure_city").toString();
        //int arrive_country = sqlquery->value("arrivecountry").toString().toInt();
        QString arrive_country = sqlquery->value("arrival_country").toString();
        QString arrive_city = sqlquery->value("arrival_city").toString();
        qDebug()<<"citys:d/a"<<departure_city<<" "<<arrive_city;

        int price = sqlquery->value("total_price").toInt();

        QSqlQuery *Psql = new QSqlQuery;
        QString search_price_sql = "SELECT * FROM vi_airline_info WHERE airlineno = " + QString::number(line);
        try
        {
            if (!m_Connect->SelectResult(Psql, search_price_sql))
                throw false;
        }
        catch (bool&)
        {
            QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打卡, 请检查网络配置！", QMessageBox::Ok).exec();
            return;
        }
        Psql->next();
        int discountrate = sqlquery->value("discount_rate").toString().toInt();
        switch (ship)
        {
        case 0: price = Psql->value("deluxeclassprice").toString().toInt(); break;
        case 1: price = Psql->value("businessclassprice").toString().toInt(); break;
        case 2: price = Psql->value("economyclassprice").toString().toInt(); break;
        }




        QVector<QString> vec_sql;
        if (!chg_line && chg_ship)
        {
            QString ship_sql = "UPDATE ticket SET grade = " + QString::number(567+ship)
                    + ", ticket_price = " + QString::number(price)
                               + ", total_price = " + QString::number(price*(double)(100-discountrate)/100.0)
                    + " WHERE order_id = "
                    + QString::number(book_num);
            vec_sql.append(ship_sql);
            qDebug()<<"ship sql:"<<ship_sql;
        }
        else
        {
            QString route = sqlquery->value("route").toString();
            qDebug()<<"route"<<route;
            QStringList parts = route.split(',');
            //int airlineno = parts[0].toInt();
            QString shipname  = parts[1];

            QString line_sql = "UPDATE ticket SET route = '" + QString::number(line) + ","+shipname+"'"
                    + ", departure_country = '" + departure_country//QString::number(departure_country)
                    + "', departure_city = '" + departure_city
                    + "', arrival_country = '" + arrive_country//QString::number(arrive_country)
                    + "', arrival_city = '" + arrive_city
                    + "', ticket_price = " + QString::number(price)
                    + ", total_price = " + QString::number(price*(double)(100-discountrate)/100.0)
                    //+ "', shipno = " + QString::number(ship)
                    //+ ", ticketprice = " + QString::number(price)
                    + " WHERE order_id = " + QString::number(book_num);
            vec_sql.append(line_sql);
            qDebug()<<"sql:"<<line_sql;
        }

        QString rtn = m_Connect->UpdateValue(vec_sql);
        if (rtn == "Success")
            QMessageBox(QMessageBox::Information, "成功", "更新成功", QMessageBox::Ok).exec();
        else
            QMessageBox(QMessageBox::Critical, "更新错误", rtn, QMessageBox::Ok).exec();
        delete sqlquery;
        sqlquery = NULL;
    }

}

void FlightManager::on_chglinecmpcek_stateChanged(int arg1)
{
    if (arg1)
        ui->chglinecmpcom->setEnabled(true);
    else
        ui->chglinecmpcom->setEnabled(false);
}

void FlightManager::on_chglinedepcek_stateChanged(int arg1)
{
    if (arg1)
        ui->chglinedepcom->setEnabled(true);
    else
        ui->chglinedepcom->setEnabled(false);
}

void FlightManager::on_chglinearrcek_stateChanged(int arg1)
{
    if(arg1)
        ui->chglinearrcom->setEnabled(true);
    else
        ui->chglinearrcom->setEnabled(false);
}

void FlightManager::on_chglinedatecek_stateChanged(int arg1)
{
    if (arg1)
        ui->chglinedatedit->setEnabled(true);
    else
        ui->chglinedatedit->setEnabled(false);
}

void FlightManager::on_chglinetimecek_stateChanged(int arg1)
{
    if (arg1)
        ui->chglinetimedit->setEnabled(true);
    else
        ui->chglinetimedit->setEnabled(false);
}

void FlightManager::on_chglineecocek_stateChanged(int arg1)
{
    if (arg1)
        ui->chglineecoedit->setEnabled(true);
    else
        ui->chglineecoedit->setEnabled(false);
}

void FlightManager::on_chglinebuscek_stateChanged(int arg1)
{
    if (arg1)
        ui->chglinebusedit->setEnabled(true);
    else
        ui->chglinebusedit->setEnabled(false);
}

void FlightManager::on_chglinedelcek_stateChanged(int arg1)
{
    if (arg1)
        ui->chglinedeledit->setEnabled(true);
    else
        ui->chglinedeledit->setEnabled(false);
}

void FlightManager::on_chglinenocom_activated(int index)
{
    ValueChangeOnAirLine(index);
}

void FlightManager::on_chglineokbtn_clicked()
{
    bool chg_way = ui->chglinecmpcek->isChecked();
    bool chg_dep = ui->chglinedepcek->isChecked();
    bool chg_arr = ui->chglinearrcek->isChecked();
    bool chg_date = ui->chglinedatecek->isChecked();
    bool chg_time = ui->chglinetimecek->isChecked();
    bool chg_econ = ui->chglineecocek->isChecked();
    bool chg_bus = ui->chglinebuscek->isChecked();
    bool chg_del = ui->chglinedelcek->isChecked();

    if (!chg_way && !chg_dep && !chg_arr && !chg_date && !chg_time && !chg_econ && !chg_bus && !chg_del)
    {
        QMessageBox(QMessageBox::Warning, "更新错误", "请至少选择一项更新项", QMessageBox::Ok).exec();
        return;
    }

    QString way = ui->chglinecmpcom->currentText();
    QString dep = ui->chglinedepcom->currentText();
    QString arr = ui->chglinearrcom->currentText();
    QString time = ui->chglinetimedit->text();
    QString econ = ui->chglineecoedit->text();
    QString bus = ui->chglinebusedit->text();
    QString del = ui->chglinedeledit->text();

    QString d = ui->chglinedatedit->text();
    QStringList datelist = d.split("/");
    QString indate[3];
    int i = 0;

    for (QString dt : datelist)
    {
        indate[i] = dt;
        ++i;
    }
    qDebug()<<"indate 0 "<<indate[0]<<"indate 1 "<<indate[1]<<"indate 2" <<indate[2];

    QString date = indate[0] + "-" + indate[1] + "-" + indate[2];
    //tag
    QSqlQuery *sqlqd = new QSqlQuery;
    QString chk_sqld = "SELECT * FROM vi_country_city WHERE cityname = '" + dep +"'";
    QSqlQuery *sqlqa = new QSqlQuery;
    QString chk_sqla = "SELECT * FROM vi_country_city WHERE cityname = '" + arr +"'";
    try
    {
        if (!m_Connect->SelectResult(sqlqd, chk_sqld))
            throw false;
    }
    catch (bool&)
    {
        QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打卡, 请检查网络配置！", QMessageBox::Ok).exec();
        return;
    }
    sqlqd->next();
    QString depcoun = sqlqd -> value("countryname").toString();
    try
    {
        if (!m_Connect->SelectResult(sqlqa, chk_sqla))
            throw false;
    }
    catch (bool&)
    {
        QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打卡, 请检查网络配置！", QMessageBox::Ok).exec();
        return;
    }
    sqlqa->next();
    QString arrcoun = sqlqa ->value("countryname").toString();

    QString line_no = ui->chglinenocom->currentText();
    QString udtway = QString("UPDATE airline SET airwayshortname = '") + way + "' WHERE airlineno = " + line_no;
    QString udtdep = QString("UPDATE airline SET departurecity = '") + dep + "' WHERE airlineno = " + line_no;
    QString udtarr = QString("UPDATE airline SET arrivecity = '") + arr + "' WHERE airlineno = " + line_no;
    QString udtdate = QString("UPDATE airline SET departuredate = '") + date + "' WHERE airlineno = " + line_no;
    QString udttime = QString("UPDATE airline SET departuretime = '") + time + "' WHERE airlineno = " + line_no;
    QString udtecon = QString("UPDATE airline SET economyclassprice = ") + econ + " WHERE airlineno = " + line_no;
    QString udtbus = QString("UPDATE airline SET businessclassprice = ") + bus + " WHERE airlineno = " + line_no;
    QString udtdel = QString("UPDATE airline SET deluxeclassprice = ") + del + " WHERE airlineno = " + line_no;
    QString udtdepc = QString("UPDATE airline SET departurecountry = '") + depcoun + "' WHERE airlineno = " + line_no;
    QString udtarrc = QString("UPDATE airline SET arrivecountry = '") + arrcoun + "' WHERE airlineno = " + line_no;
    if (!chg_way)
        udtway = "";
    if (!chg_dep)
        udtdep = "";
    if (!chg_arr)
        udtarr = "";
    if (!chg_date)
        udtdate = "";
    if (!chg_time)
        udttime = "";
    if (!chg_econ)
        udtecon = "";
    if (!chg_bus)
        udtbus = "";
    if (!chg_del)
        udtdel = "";

    QVector<QString> udtsql;
    udtsql.append(udtway);
    udtsql.append(udtdep);
    udtsql.append(udtarr);
    udtsql.append(udtdate);
    udtsql.append(udttime);
    udtsql.append(udtecon);
    udtsql.append(udtbus);
    udtsql.append(udtdel);
    udtsql.append(udtdepc);
    udtsql.append(udtarrc);
    QString rtn = m_Connect->UpdateValue(udtsql);
    if (rtn == "Success")
        QMessageBox(QMessageBox::Information, "成功", "更新成功", QMessageBox::Ok).exec();
    else
        QMessageBox(QMessageBox::Critical, "更新错误", rtn, QMessageBox::Ok).exec();
    QSqlQuery *qupdt = new QSqlQuery;
    QString ticket_chk = "SELECT * FROM vi_ticket_change WHERE airlineno = " + line_no;
    try
    {
        if (!m_Connect->SelectResult(qupdt, ticket_chk))
            throw false;
    }
    catch (bool&)
    {
        QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打卡, 请检查网络配置！", QMessageBox::Ok).exec();
        return;
    }
    while(qupdt->next())
    {
        QString order_id = qupdt->value("order_id").toString();
        QSqlQuery *qsql = new QSqlQuery;
        QString chk_sql = "SELECT * FROM ticket where order_id = '" + order_id + "'";
        try
        {
            if (!m_Connect->SelectResult(qsql, chk_sql))
                throw false;
        }
        catch (bool&)
        {
            QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打卡, 请检查网络配置！", QMessageBox::Ok).exec();
            return;
        }
        qsql->next();
        double disrate = qsql->value("discount_rate").toInt();
        int price = 0;
        int grade = qsql -> value("grade").toString().toInt();
        if(grade == 567) price = econ.toInt();
        else if(grade == 568) price = bus.toInt();
        else price = del.toInt();


        QVector<QString> sqlupt;
        //depcon , cit , arr con cit , tkprice totl price;
        //first 4 from upper
        QString depcupt = QString("UPDATE ticket SET departure_city = '") + dep + "' WHERE order_id = '" + order_id + "'";
        QString arrcupt = QString("UPDATE ticket SET arrival_city = '") + arr + "' WHERE order_id = '" + order_id + "'";
        QString depcounupt = QString("UPDATE ticket SET departure_country = '") + depcoun + "' WHERE order_id = '" + order_id + "'";
        QString arrcounupt = QString("UPDATE ticket SET arrival_country = '") + arrcoun + "' WHERE order_id = '" + order_id + "'";
        QString priupt = QString("UPDATE ticket SET ticket_price = ") + QString::number(price);
        QString totpriupt = QString("UPDATE ticket SET total_price = ") + QString::number(price*(double)(100-disrate)/100.0);
        sqlupt.append(depcupt);
        sqlupt.append(arrcupt);
        sqlupt.append(depcounupt);
        sqlupt.append(arrcounupt);
        sqlupt.append(priupt);
        sqlupt.append(totpriupt);
        QString rtn = m_Connect->UpdateValue(sqlupt);
        if (rtn == "Success");
        else
            QMessageBox(QMessageBox::Critical, "同步数据出现问题", rtn, QMessageBox::Ok).exec();

    }
}

void FlightManager::on_delticketno_activated(int index)
{
    TicketValueChangeOnDelete(index);
}

void FlightManager::on_delticketokbtn_clicked()
{
    QString ticket_no = ui->delticketno->currentText();
    QString sql = "DELETE FROM ticket WHERE order_id = " + ticket_no;

    QString rtn = m_Connect->DeletValue(sql);
    GetTicket();
    Getdelno();
    if (rtn == "Success")
        QMessageBox(QMessageBox::Information, "成功", "删除成功", QMessageBox::Ok).exec();
    else
        QMessageBox(QMessageBox::Critical, "删除错误", rtn, QMessageBox::Ok).exec();
}

void FlightManager::on_bktktctmno_activated(int index)
{
    SetCustomerInfoOnBook(index);
}

void FlightManager::on_bktktdepcot_activated(const QString &arg1)
{
    SetCityOnBook(ui->bktktdepcy, arg1);
}

void FlightManager::on_bktktarrcot_activated(const QString &arg1)
{
    SetCityOnBook(ui->bktktarrcy, arg1);
}
void FlightManager::on_bktktdepcot_textActivated(const QString &arg1)
{
    SetCityOnBook(ui->bktktdepcy, arg1);
}


void FlightManager::on_bktktarrcot_textActivated(const QString &arg1)
{
    SetCityOnBook(ui->bktktarrcy, arg1);
}


void FlightManager::on_bktktarrcy_currentIndexChanged(const QString &arg1)
{
}


void FlightManager::on_bktktokbtn_clicked()
{
    if (ui->bktktline->currentText().size()==0)
    {
        QMessageBox(QMessageBox::Warning,"请选择正确的航线","您未选择正确的航班或您目前的航班没有票,请重新选择",QMessageBox::Ok).exec();
        return;
    }
    int ticketnum=ui->bktktnum->text().toInt();
    if(ticketnum<=0){
        QMessageBox(QMessageBox::Warning,"票数不足","请选择其他航班或者座位等级",QMessageBox::Ok).exec();
        return;
    }
    QSqlQuery que;
    QString columnnum;
    QString linetext = ui->bktktline->currentText();
    int classType = ui->bktktship->currentIndex();
    QStringList ql;
    QString str;
    if (linetext.size() != 0)
    {
        ql = linetext.split(",", Qt::SkipEmptyParts);
        str = ql[0];
    }
    else{
        ui->bktktnum->setText(QString("未选择正确的航线"));
        return;
    }
    int lineIndex = str.toInt()-1;
    if (lineIndex >= 0 && classType >= 0)
    {
        AirLine selectedLine = m_LineInfo[lineIndex];
        switch (classType)
        {
        case 0:
        {
            columnnum = "economyclassnum";
            m_LineInfo[lineIndex].econemy_num--;
            qDebug()<<m_LineInfo[lineIndex].econemy_num<<"????";
            break;
        }
        case 1:
        {
            columnnum ="businessclassnum";
            m_LineInfo[lineIndex].bussiness_num--;
            break;
        }
        case 2:
        {
            columnnum =  "deluxeclassnum";
            m_LineInfo[lineIndex].deluxe_num--;
            break;
        }
        default:
            break;
        }
    }
    // 收集购票信息
    QString orderId = QString::number(QDateTime::currentDateTime().toSecsSinceEpoch()%100000); // 生成订单编号
    QString customerId = ui->bktktctmno->currentText(); // 客户编号
    QString customerName = ui->bktktctmname->text(); // 客户姓名
    QString ctmType = ui->bktktctmtyp->text(); // kehu的类型
    int discountRate = ui->bktktdiscot->text().toInt(); // 折扣比例
    QString departureCountry = ui->bktktdepcot->currentText();
    QString departureCity = ui->bktktdepcy->currentText();
    QString arrivalCountry = ui->bktktarrcot->currentText();
    QString arrivalCity = ui->bktktarrcy->currentText();
    QString route = ui->bktktline->currentText();
    QString grade = ui->bktktship->currentText(); // 等级
    int ticketP = ui->bktktprice->text().toInt(); // 机票单价
    double totalPrice = ticketP * (100-discountRate)*0.01; // 计算总价

    // 插入到 ticket 表
    QString sql = QString(
        "INSERT INTO ticket (order_id, customer_id, customer_name, customer_type, discount_rate, "
        "departure_country, departure_city, arrival_country, arrival_city, route, grade, ticket_price, total_price) "
        "VALUES (:order_id, :customer_id, :customer_name, :customer_type, :discount_rate, "
        ":departure_country, :departure_city, :arrival_country, :arrival_city, :route, :grade, :ticket_price, :total_price)"
        );

    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":order_id", orderId);
    query.bindValue(":customer_id", customerId);
    query.bindValue(":customer_name", customerName);
    query.bindValue(":customer_type", ctmType);
    query.bindValue(":discount_rate", discountRate);
    query.bindValue(":departure_country", departureCountry);
    query.bindValue(":departure_city", departureCity);
    query.bindValue(":arrival_country", arrivalCountry);
    query.bindValue(":arrival_city", arrivalCity);
    query.bindValue(":route", route);
    query.bindValue(":grade", grade);
    query.bindValue(":ticket_price", ticketP);
    query.bindValue(":total_price", totalPrice);
    if (!query.exec())
    {
        QMessageBox::critical(this, "数据库错误", "购票失败！\n" + query.lastError().text());
        return;
    }
    QString updateSql = QString("UPDATE airline SET %1 = %1 - 1 WHERE airlineno = :airlineno").arg(columnnum);
    query.prepare(updateSql);
    query.bindValue(":airlineno", str);
    if (!query.exec()) {
        QMessageBox::critical(this, "数据库错误", "购票成功,但是更新票数失败！\n" + query.lastError().text());
        return;
    }

    updateTicketNum();
    GetTicket();
    Getdelno();
    QMessageBox::information(this, "成功", "购票成功！");


}
void FlightManager::on_newnoshow_linkActivated(const QString &link)
{
}
void FlightManager::on_bktktdepcot_activated(int index)
{
}
void FlightManager::on_bktktarrcy_currentIndexChanged(int index)
{
}
void FlightManager::updateTicketNum()
{
    QString linetext = ui->bktktline->currentText();
    int classType = ui->bktktship->currentIndex();
    qDebug() << linetext << classType;
    QStringList ql;
    QString str;
    if (linetext.size() != 0)
    {
        ql = linetext.split(",", Qt::SkipEmptyParts);
        str = ql[0];
    }
    else{
        ui->bktktnum->setText(QString("未选择正确的航线"));
        return;
    }
    int lineIndex = str.toInt()-1;
    if (lineIndex >= 0 && classType >= 0)
    {
        AirLine selectedLine = m_LineInfo[lineIndex];
        int ticket = 0;
        switch (classType)
        {
        case 0:
            ticket = selectedLine.econemy_num;
            break;
        case 1:
            ticket = selectedLine.bussiness_num;
            break;
        case 2:
            ticket = selectedLine.deluxe_num;
            break;
        default:
            break;
        }
        ui->bktktnum->setText(QString::number(ticket));
    }
}
void FlightManager::updateTicketPrice()
{
    QString linetext = ui->bktktline->currentText();

    int classType = ui->bktktship->currentIndex();
    qDebug() << linetext << classType;

    QStringList ql;
    QString str;
    if (linetext.size() != 0)
    {
        ql = linetext.split(",", Qt::SkipEmptyParts);
        str = ql[0];
    }
    else{
        ui->bktktprice->setText(QString("未选择正确的航线"));
        ui->bktkttotal->setText(QString("未选择正确的航线"));
        ui->bktktnum->setText(QString("未选择正确的航线"));
        ui->bkttime->setText(QString("未选择正确的航线"));
        return;
    }
    //因为这个数组是从0开始存的所以要在那个框的第一个数字那里减一,下标从0开始.
    int lineIndex = str.toInt()-1;
    QString discount = ui->bktktdiscot->text();
    double discot = (100 - ui->bktktdiscot->text().toInt()) * 0.01;
    qDebug() << discot<<discount.toInt()<<discount;

    if (lineIndex >= 0 && classType >= 0)
    {
        AirLine selectedLine = m_LineInfo[lineIndex];
        int price = 0;
        switch (classType)
        {
        case 0:
            price = selectedLine.econemy_price;
            break;
        case 1:
            price = selectedLine.bussiness_price;
            break;
        case 2:
            price = selectedLine.deluxe_price;
            break;
        default:
            break;
        }
        double total = price * discot;
        qDebug() << total;
        ui->bktktprice->setText(QString::number(price));
        ui->bktkttotal->setText(QString::number(total, 'f', 2));
        QString temp;
        if(selectedLine.arrive_time<selectedLine.departure_time){
            QStringList l;
            l=selectedLine.departure_date.split('-',Qt::SkipEmptyParts);
            int y=l[0].toInt(),d=0;
            int m=l[1].toInt();
            int day=l[2].toInt();
            switch(m)
            {
            case 2:{d = 28;
                if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)d++; break;}
            case 4:
            case 6:
            case 9:
            case 11:d = 30; break;
            default:d = 31; break;
            }
            day++;
            if (day > d) {
                day = 1; m++;
                if (m > 12){m = 1; y++;}
            }
            temp=QString::number(y)+"-"+QString::number(m)+"-"+QString::number(day);
        }
        else temp=selectedLine.departure_date;
        ui->bkttime->setText(selectedLine.departure_date+" "+selectedLine.departure_time+"\n"+temp+" "+selectedLine.arrive_time);
    }
}

void FlightManager::on_bktktarrcy_currentTextChanged(const QString &arg1)
{
    QString dep = ui->bktktdepcy->currentText();
    QStringList d = dep.split(",", Qt::SkipEmptyParts);
    QString dt[2];
    int i = 0;
    for (QString str : d)
    {
        dt[i] = str;
        ++i;
    }
    QString departure = dt[1];
    QStringList a = arg1.split(",", Qt::SkipEmptyParts);
    i = 0;
    for (QString str : a)
    {
        dt[i] = str;
        ++i;
    }
    QString arrive = dt[1];
    GetAirLineInfo();
    ui->bktktline->clear();
    for (int k=0;k< m_LineInfo.size();k++)
    {
        AirLine airline=m_LineInfo[k];
        if (departure.compare(airline.departure_city) == 0 && arrive.compare(airline.arrive_city) == 0)
        {
            ui->bktktline->addItem(QString::number(k+1)+","+airline.airway_short_name);
        }
    }
    updateTicketPrice();
    updateTicketNum();
}


void FlightManager::on_bktktdepcy_currentTextChanged(const QString &arg1)
{
    QString arr = ui->bktktarrcy->currentText();
    QStringList d = arr.split(",", Qt::SkipEmptyParts);
    QString dt[2];
    int i = 0;
    for (QString str : d)
    {
        dt[i] = str;
        ++i;
    }
    QString arrive = dt[1];
    QStringList a = arg1.split(",", Qt::SkipEmptyParts);
    i = 0;
    for (QString str : a)
    {
        dt[i] = str;
        ++i;
    }
    QString departure = dt[1];
    GetAirLineInfo();
    ui->bktktline->clear();
    for (int k=0;k< m_LineInfo.size();k++)
    {
        AirLine airline=m_LineInfo[k];
        if (departure.compare(airline.departure_city) == 0 && arrive.compare(airline.arrive_city) == 0)
        {
            ui->bktktline->addItem(QString::number(k+1)+","+airline.airway_short_name);//因为表中使用的是1-...所以使用从1开始的下标
        }
    }
    updateTicketPrice();
    updateTicketNum();
}


void FlightManager::on_bktktship_activated(int index)
{
    updateTicketPrice();
    updateTicketNum();
}
void FlightManager::Getdelno(){
    if(ui->delticketno->currentText().size()!=0)ui->delticketno->clear();
    for(int i=0;i<m_TicketInfo.size();i++)
    ui->delticketno->addItem(QString::number(m_TicketInfo[i].order_id) );
}


void FlightManager::on_pushButton_clicked()
{
    ui->searchairWG->setVisible(false);
    QString departure = ui->lineEdit->text();
    QString arrive = ui->lineEdit_2->text();
    QString date = ui->calendarWidget->selectedDate().toString("yyyy-MM-dd");
    if(departure.size()!=0)
    ui->departure->setText(departure);
    else
        ui->departure->setText("未输入");
    if(arrive.size()!=0)
    ui->arrive->setText(arrive);
    else
        ui->arrive->setText("未输入");
    ui->depatime->setText("出发日期 | "+date);
    qDebug()<<"dbg"<<date;
    if (departure =="" and arrive == "")
    {
        ShowAirLineOnSearch();
        return;
    }
    //qDebug()<<"test"<<departure<<" "<<arrive;
    QSqlQuery *qsql = new QSqlQuery;
    QString chk_sql = "SELECT * FROM airline WHERE departurecity = '"+departure+"'and arrivecity = '"+arrive+"'and departuredate = '"+date+"'";
    try
    {
        if (!m_Connect->SelectResult(qsql, chk_sql))
            throw false;
    }
    catch (bool&)
    {
        QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打卡, 请检查网络配置！", QMessageBox::Ok).exec();
        return;
    }
    QVector<AirLine> recieve;
    while(qsql->next())
    {
        qDebug()<<qsql->value("airlineno").toString();
        AirLine temp;
        temp.line_no = qsql->value("airlineno").toString().toInt();
        temp.airway_short_name = qsql->value("airwayshortname").toString();
        temp.airplane_type = qsql->value("airplanetype").toString();
        temp.departure_country = qsql->value("departurecountry").toString();
        temp.departure_city = qsql->value("departurecity").toString();
        temp.arrive_country = qsql->value("arrivecountry").toString();
        temp.arrive_city = qsql->value("arrivecity").toString();
        temp.departure_date = qsql->value("departuredate").toString();
        temp.departure_time = qsql->value("departuretime").toString();
        temp.arrive_time = qsql->value("arrivetime").toString();
        temp.econemy_price = qsql->value("economyclassprice").toString().toInt();
        temp.econemy_num = qsql->value("economyclassnum").toString().toInt();
        temp.econemy_rest = temp.econemy_num;
        temp.bussiness_price = qsql->value("businessclassprice").toString().toInt();
        temp.bussiness_num = qsql->value("businessclassnum").toString().toInt();
        temp.bussiness_rest = temp.bussiness_num;
        temp.deluxe_price = qsql->value("deluxeclassprice").toString().toInt();
        temp.deluxe_num = qsql->value("deluxeclassnum").toString().toInt();
        temp.deluxe_rest = temp.deluxe_num;
        recieve.push_back(temp);
    }
    ui->searchairlineshow->clear();
    for (const auto &line : recieve) {
        QListWidgetItem *item = new QListWidgetItem(ui->searchairlineshow);
        // 创建航班数据结构
        FlightData data;
        data.airlineName = line.airway_short_name;
        data.flightNo = QString::number(line.line_no);
        data.airplaneType = line.airplane_type;
        QStringList ql1,ql2;
        QString time1,time2;
        ql1=line.departure_time.split(':',Qt::SkipEmptyParts);
        time1=ql1[0]+":"+ql1[1];
        data.departureTime = time1;
        data.departureAirport = line.departure_country+" "+line.departure_city;
        ql2=line.arrive_time.split(':',Qt::SkipEmptyParts);
        time2=ql2[0]+":"+ql2[1];
        data.arriveTime = time2;
        data.arriveAirport =line.arrive_country+" "+ line.arrive_city;
        int a1=ql1[0].toInt(),a2=ql2[0].toInt();
        if(a2<a1)a2+=24;
        int b1=ql1[1].toInt(),b2=ql2[1].toInt();
        if(b2<b1){
            a2-=1;
            b2+=60;
        }
        if(b2!=b1)
            data.duration = QString::number(a2-a1)+"小时"+QString::number(b2-b1)+"分"; // 可以根据起飞和到达时间计算
        else data.duration = QString::number(a2-a1)+"小时";
        data.price = line.econemy_price;

        // 创建并填充自定义小部件
        FlightItemWidget *flightWidget = new FlightItemWidget;
        flightWidget->setFlightData(data);

        item->setSizeHint(flightWidget->sizeHint()); // 调整项大小
        ui->searchairlineshow->addItem(item);
        ui->searchairlineshow->setItemWidget(item, flightWidget);
    }
    // ui->searchairlineshow->setRowCount(recieve.size());
    // for (int i = 0; i < recieve.size(); ++i)
    // {
    //     ui->searchairlineshow->setItem(i, 0, new QTableWidgetItem(QString::number(recieve[i].line_no)) );
    //     ui->searchairlineshow->setItem(i, 1, new QTableWidgetItem(recieve[i].airway_short_name) );
    //     ui->searchairlineshow->setItem(i, 2, new QTableWidgetItem(recieve[i].airplane_type) );
    //     ui->searchairlineshow->setItem(i, 3, new QTableWidgetItem(recieve[i].departure_country) );
    //     ui->searchairlineshow->setItem(i, 4, new QTableWidgetItem(recieve[i].departure_city) );
    //     ui->searchairlineshow->setItem(i, 5, new QTableWidgetItem(recieve[i].arrive_country) );
    //     ui->searchairlineshow->setItem(i, 6, new QTableWidgetItem(recieve[i].arrive_city) );
    //     ui->searchairlineshow->setItem(i, 7, new QTableWidgetItem(recieve[i].departure_date) );
    //     ui->searchairlineshow->setItem(i, 8, new QTableWidgetItem(recieve[i].departure_time) );
    //     ui->searchairlineshow->setItem(i, 9, new QTableWidgetItem(recieve[i].arrive_time) );
    //     ui->searchairlineshow->setItem(i, 10, new QTableWidgetItem(QString::number(recieve[i].econemy_price)) );
    //     ui->searchairlineshow->setItem(i, 11, new QTableWidgetItem(QString::number(recieve[i].econemy_num)) );
    //     ui->searchairlineshow->setItem(i, 12, new QTableWidgetItem(QString::number(recieve[i].econemy_rest)) );
    //     ui->searchairlineshow->setItem(i, 13, new QTableWidgetItem(QString::number(recieve[i].bussiness_price)) );
    //     ui->searchairlineshow->setItem(i, 14, new QTableWidgetItem(QString::number(recieve[i].bussiness_num)) );
    //     ui->searchairlineshow->setItem(i, 15, new QTableWidgetItem(QString::number(recieve[i].bussiness_rest)) );
    //     ui->searchairlineshow->setItem(i, 16, new QTableWidgetItem(QString::number(recieve[i].deluxe_price)) );
    //     ui->searchairlineshow->setItem(i, 17, new QTableWidgetItem(QString::number(recieve[i].deluxe_num)) );
    //     ui->searchairlineshow->setItem(i, 18, new QTableWidgetItem(QString::number(recieve[i].deluxe_rest)) );
    // }

}
