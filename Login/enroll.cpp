#include "enroll.h"
#include "ui_enroll.h"
#include <iostream>
#include "login.h"
using std::cout;
using std::endl;
enroll::enroll(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::enroll)
{
    ui->setupUi(this);
    m_Connect=ConnectDataBase::GetInstance();
    ui->newsexshow->addItem("男");
    ui->newsexshow->addItem("女");
    ui->newtypeselect->addItem("普通用户");
    ui->newtypeselect->addItem("会员(需要充值888)");
    ui->newtypeselect->addItem("至尊VIP(需要充值1688)");
    QSqlQuery *qsql = new QSqlQuery;
    QString ssql="SELECT * FROM vi_customernum";
    try
    {
        if (!m_Connect->SelectResult(qsql, ssql))
            throw false;
    }
    catch (bool&)
    {
        QMessageBox(QMessageBox::Warning, "查询失败", "数据库无法打卡, 请检查网络配置！", QMessageBox::Ok).exec();
        return;
    }
    if(qsql->next()){
        ui->newnoshow->setText(QString::number(qsql->value("max_no").toString().toInt()+1));
    }
}

enroll::~enroll()
{
    if (ui)
    {
        delete ui;
        ui = nullptr;
    }
    cout << "delete enroll" << endl;
}

void enroll::on_newcustomer_clicked()
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
    if(name.size()==0){QMessageBox(QMessageBox::Warning,"警告","用户姓名不能为空!",QMessageBox::Ok).exec();return;}
    if(id.size()==0){QMessageBox(QMessageBox::Warning,"警告","用户身份证号码不能为空!",QMessageBox::Ok).exec();return;}
    if(phone.size()==0){QMessageBox(QMessageBox::Warning,"警告","用户手机号码不能为空!",QMessageBox::Ok).exec();return;}
    insertstr.append(FlightManager::customer_acc);
    QString sql = "INSERT INTO customer VALUES (?, ?, ?, ?, ?, ?, ?)";
    QString rtn = m_Connect->InsertValue(sql, 7, insertstr);
    enrolldone();
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
    this->hide();
}

