#ifndef ENROLL_H
#define ENROLL_H
#include"connectdatabase.h"
#include <QWidget>
#include<QDialog>
#include"flightmanager.h"
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
 void closed(); // 窗口关闭信号
public slots:
    void enrolldone() {
        emit done(); // 发送信号通知需要打开注册界面
    }
protected:
    void closeEvent(QCloseEvent* event) override {
        emit closed(); // 触发关闭信号
        QWidget::closeEvent(event);
    }
private slots:
    void on_newcustomer_clicked();

private:
    Ui::enroll *ui;
    ConnectDataBase* m_Connect;
};

#endif // ENROLL_H
