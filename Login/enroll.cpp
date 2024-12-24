#include "enroll.h"
#include <cstdlib>
#include <iostream>
#include "ui_enroll.h"
#include "flightmanager.h"
using std::cout;
using std::endl;
Register::Register(QWidget *parent){
    QWidget(parent);
    ui(new Ui::Widget){
        ui->setupUi(this);
    }
}

Register::~Register() {
    delete ui;
}
