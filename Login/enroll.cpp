#include "enroll.h"
#include "flightmanager.h"
#include "login.h"
#include <cstdlib>
#include <iostream>
using std::cout;
using std::endl;
enroll::enroll(QWidget *parent)
{
    QDialog(parent), ui(new Ui::enroll)
    {
        uisetupUi(this);
    }
}

enroll::~enroll()
{
    if (ui) {
        delete ui;
        ui = nullptr;
    }
    cout << "delete enroll" << endl;
}
