#ifndef FLIGHTMANAGER_H
#define FLIGHTMANAGER_H

#include <QMap>
#include <QDate>
#include <QTime>
#include <QVector>
#include <QMainWindow>
#include <QMessageBox>
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include "connectdatabase.h"
#include<windows.h>

namespace Ui
{
class FlightManager;
}
struct FlightData {
    QString airlineName;        // 航空公司名称
    QString flightNo;           // 航班号
    QString airplaneType;       // 飞机类型
    QString departureTime;      // 出发时间
    QString departureAirport;
    QString arriveTime;         // 到达时间
    QString arriveAirport;
    QString duration;           // 飞行时长
    double price;               // 价格
};
class FlightItemWidget : public QWidget {
    Q_OBJECT
public:
    explicit FlightItemWidget(QWidget *parent = nullptr) : QWidget(parent) {
        QVBoxLayout *mainLayout = new QVBoxLayout(this);

        // 航空公司和航班号
        QHBoxLayout *airlineLayout = new QHBoxLayout;
        airlineLogo = new QLabel;
        airlineLogo->setPixmap(QPixmap(":/SVG/SVG/mplane.svg").scaled(15, 15)); // 默认 logo
        flightInfo = new QLabel;
        flightInfo->setFixedWidth(120);
        airlineLayout->addWidget(airlineLogo);
        airlineLayout->addWidget(flightInfo);
        // airlineLayout->addStretch();

        // 出发和到达时间、机场
        departureInfo = new QLabel;
        arriveInfo = new QLabel;
        durationInfo = new QLabel;
        durationInfo->setStyleSheet("color: rgb(85, 170, 255);");
         departureInfo->setFixedWidth(100);
        departureInfo->setAlignment(Qt::AlignRight);
        arriveInfo->setFixedWidth(100);
        // 设置对齐
        airlineLayout->addWidget(departureInfo);
        QLabel *arrowIcon = new QLabel;
        arrowIcon->setPixmap(QPixmap(":/SVG/SVG/dire.svg").scaled(30, 30, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        airlineLayout->addWidget(arrowIcon);
        airlineLayout->addWidget(arriveInfo);
        airlineLayout->addWidget(durationInfo);

        // 设置对齐方式
        airlineLayout->setAlignment(departureInfo, Qt::AlignVCenter); // 垂直居中对齐
        airlineLayout->setAlignment(arriveInfo, Qt::AlignVCenter);
        airlineLayout->setAlignment(durationInfo, Qt::AlignVCenter);

        // 价格和按钮
        QWidget *priceAndButtonWidget = new QWidget;
        QHBoxLayout *priceAndButtonLayout = new QHBoxLayout(priceAndButtonWidget);
        priceLabel = new QLabel;
        bookButton = new QPushButton("订票");
        bookButton->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.122, y1:0.829409, x2:0, y2:0.995, stop:0 rgba(255, 110, 0, 255), stop:1 rgba(255, 255, 255, 255));"
                                  "border: 1px solid rgb(200,200,200);"
                                  "color:white;"
                                  "border-radius: 3px;"
                                  "padding:4px 4px;");
        bookButton->setFixedSize(15, 10);
        airlineLayout->addStretch();
        priceAndButtonLayout->addWidget(priceLabel);
        priceAndButtonLayout->addWidget(bookButton);
        priceAndButtonLayout->setSpacing(10);
        priceAndButtonLayout->setContentsMargins(0, 0, 0, 0);
        priceAndButtonLayout->setAlignment(bookButton, Qt::AlignVCenter | Qt::AlignRight);
        priceAndButtonLayout->addStretch();
        airlineLayout->addWidget(priceAndButtonWidget);

        mainLayout->addLayout(airlineLayout);
        this->setLayout(mainLayout);
    }

    // 设置航班数据
    void setFlightData(const FlightData &data) {
        flightInfo->setText(QString("航线编号:%2<br><span style='color:blue;'>%1 %3</span>").arg(data.airlineName, data.flightNo, data.airplaneType));
        departureInfo->setText(
            QString("<span style='font-size:24px;'>%1</span><br>%2")
                .arg(data.departureTime)
                .arg(data.departureAirport)
            );
        arriveInfo->setText(
            QString("<span style='font-size:24px;'>%1</span><br>%2")
                .arg(data.arriveTime)
                .arg(data.arriveAirport)
            );
        durationInfo->setText(data.duration);
        priceLabel->setText(
            QString("<span style='font-size:18px; color: orange;'>¥%1</span>起")
                .arg(data.price)
            );
        // priceLabel->setText(QString("¥%1").arg(data.price)); // 保留两位小数
    }

private:
    QLabel *airlineLogo;   // 航空公司 logo
    QLabel *flightInfo;    // 航班信息
    QLabel *departureInfo; // 出发信息
    QLabel *arriveInfo;    // 到达信息
    QLabel *durationInfo;  // 飞行时长
    QLabel *priceLabel;    // 价格
    QPushButton *bookButton; // 订票按钮
};
class FlightManager : public QMainWindow
{
    Q_OBJECT

public:
    explicit FlightManager(QWidget *parent = 0);
    ~FlightManager();
    void getuser();
    static QString customer_acc;

public slots:
    void receive();

protected:
//    void resizeEvent(QResizeEvent*);
    void closeEvent(QCloseEvent*);

    void Init();//初始化
    int GetMaxNum(const QString& sql);//从数据库中获取数量
    void JudgeReturnValue(QLabel* label, const int& value);//判断从数据库返回客户人数量是否正确，不正确即表明数据库连接出错，则弹出错误
    bool GetCustomerType();//从数据库中获取客户类型的名称
    bool GetCustomerInfo();//从数据库中获取客户的编号
    void SetCustomer(QComboBox* combobox, const QVector<QString>& string);
    void CustomerValueChange(const int& order);
    bool GetAirPlaneChange();//从数据库中获取航线编号、城市等信息，用于更新页面上的客机信息更改
    void PlaneValueChange(const int& index);//设置更新页面中的客机更改信息
    bool GetAirLineInfo();//从数据库中获取航班信息，用于更新页面上的客机信息更改中的航班信息
    void LineChangeOnPlane(const int& index);//设置更新页面中客机中航线的更改信息
    bool GetTicket();//从数据库中获取订票信息
    void TicketValueChangeOnUpdate(const int& index);//设置更新页面中订票系统
    bool GetShip();//从数据库中获取舱位等级信息
    void LineChangeOnTicket(const int& index);//设置更新页面中订票系统中的航线更改信息
    bool GetAirWay();//从数据库中获取航空公司名
    bool GetCity();//从数据库中获取城市名，国家名以及省、州名
    void ValueChangeOnAirLine(const int& index);//设置改变更新页面中航线信息的项
    void TicketValueChangeOnDelete(const int& index);//设置删除页面中机票信息
    void SetCustomerInfoOnBook(const int& index);//在订票页面中显示选择的客户信息
    void SetCityOnBook(QComboBox* combobox, const QString& index);//在订票页面中显示城市
    void ShowAirLineOnSearch();//在查询机票页面中显示航班信息
    void ShowCustomerOnSearch();//在查询客户信息页面中显示客户信息
    int ReturnAccountType(const QString &customerName);//一个账号对应一个客户，用于返回此客户是管理者还是普通用户

private slots:
    void turn2search();//查询菜单动作
    void turn2insert();//添加菜单动作
    void turn2update();//更新菜单动作
    void turn2delete();//删除菜单动作
    void turn2quit();//退出菜单动作

    void on_inserttab_tabBarClicked(int index);//点击插入面板上的标签触发的动作
    void on_newokbutton_clicked();//点击新建用户的确定按钮
    //插入面板上面标签，类似于做翻页动作
    void on_inserttab_currentChanged(int index);
    void on_chgctmnamechk_stateChanged(int arg1);
    void on_chgctmphechk_stateChanged(int arg1);
    void on_chgctmsexchk_stateChanged(int arg1);
    void on_chgctmtypchk_stateChanged(int arg1);
    void on_chgctmokbtn_clicked();
    void on_chgctmselcom_activated(int index);
    void on_chgctmselcom_activated(const QString &arg1);
    void on_chgplaneselcom_activated(int index);
    void on_chgplanelinecom_activated(int index);
    void on_chgplaneokbtn_clicked();
    void on_chgtypselcom_activated(const QString &arg1);
    void on_chgtypokbtn_clicked();
    void on_chgtktnocom_activated(int index);
    void on_chgtktlinecom_activated(int index);
    void on_chgtktokbtn_clicked();

    //更改页面中航线更改的槽
    void on_chglinecmpcek_stateChanged(int arg1);
    void on_chglinedepcek_stateChanged(int arg1);
    void on_chglinearrcek_stateChanged(int arg1);
    void on_chglinedatecek_stateChanged(int arg1);
    void on_chglinetimecek_stateChanged(int arg1);
    void on_chglineecocek_stateChanged(int arg1);
    void on_chglinebuscek_stateChanged(int arg1);
    void on_chglinedelcek_stateChanged(int arg1);
    void on_chglinenocom_activated(int index);
    void on_chglineokbtn_clicked();

    //删除页面上退票项的槽
    void on_delticketno_activated(int index);
    void on_delticketokbtn_clicked();

    void on_bktktctmno_activated(int index);

    void on_bktktdepcot_activated(const QString &arg1);

    void on_bktktarrcot_activated(const QString &arg1);

    void on_bktktarrcy_currentIndexChanged(const QString &arg1);

    void on_bktktokbtn_clicked();

    void on_newnoshow_linkActivated(const QString &link);

    void UpdateNewNo();

    void on_bktktdepcot_activated(int index);

    void on_bktktdepcot_textActivated(const QString &arg1);

    void on_bktktarrcot_textActivated(const QString &arg1);

    void on_bktktarrcy_currentIndexChanged(int index);

    void on_bktktarrcy_currentTextChanged(const QString &arg1);

    void updateTicketPrice();
    void on_bktktdepcy_currentTextChanged(const QString &arg1);

    void on_bktktship_activated(int index);

    void updateTicketNum();

    void Getdelno();



    void on_pushButton_clicked();

private:
    struct Customer
    {
        int no;
        QString name;
        int type_no;
        QString type_name;
        int discount;
        QString id;
        QString sex;
        QString phone;
        QString account;
    };

    struct AirPlane
    {
        int plane_no;
        QString plane_type;
        QString line_no;
        QString departure;
        QString arrive;
        QString date;
        QString time;
    };

    struct AirLine
    {
        int line_no;
        QString airway_short_name;
        QString airplane_type;
        QString departure_country;
        QString departure_city;
        QString arrive_country;
        QString arrive_city;
        QString departure_date;
        QString departure_time;
        QString arrive_time;
        int econemy_price;
        int econemy_num;
        int econemy_rest;
        int bussiness_price;
        int bussiness_num;
        int bussiness_rest;
        int deluxe_price;
        int deluxe_num;
        int deluxe_rest;
    };

    struct Ticket
    {
        int order_id;
        QString customer_name;
        int airline_no;
        QString departure;
        QString arrive;
        QString date;
        QString time;
        int ship_no;
        QString ship_name;
    };

    struct City
    {
        int country_no;
        QString country_name;
        QString province;
        QString city;
    };

    Ui::FlightManager *ui;
    ConnectDataBase* m_Connect;
    QMap<QString, int> m_TypeDiscount;//存放客户类型优惠

    QVector<QString> m_CustomerType;//存放客户类型
    QVector<QString> m_Sex;//存放性别
    QVector<QString> m_CustomerNo;//存放更改页面上客户信息的编号
    QVector<QString> m_Ship;//存放舱位等级
    QVector<QString> m_Airway;//存放航空公司
    QVector<QString> m_Country_Name;//存放国家名
    QVector<QString> m_City_Name;//存放城市名

    QVector<Customer> m_CustomerInfo;//存放更改页面上的客户信息
    QVector<AirPlane> m_PlaneInfo;//存放更改页面上客机信息中的客机信息
    QVector<AirLine> m_LineInfo;//存放更改页面客机信息中的航线信息
    QVector<Ticket> m_TicketInfo;//存放更改页面订票信息
    QVector<City> m_City;//存放城市、州、省、国家信息

};

#endif // FLIGHTMANAGER_H
