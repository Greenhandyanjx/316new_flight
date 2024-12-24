#ifndef ENROLL_H
#define ENROLL_H
#include"connectdatabase.h"
#include <QWidget>

namespace Ui {
class enroll;
}

class enroll : public QWidget
{
    Q_OBJECT

public:
    explicit enroll(QWidget *parent = nullptr);
    ~enroll();

signals:
    void done();

public slots:
    void enrolldone() {
        emit done(); // 发送信号通知需要打开注册界面
    }

private slots:
    void on_newcustomer_clicked();

private:
    Ui::enroll *ui;
    ConnectDataBase* m_Connect;
};

#endif // ENROLL_H
