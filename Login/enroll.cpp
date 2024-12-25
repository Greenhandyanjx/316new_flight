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
    enrolldone();





    this->close();
}

