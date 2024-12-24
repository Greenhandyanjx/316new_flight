#ifndef ENROLL_H
#define ENROLL_H

#include <QObject>
#include <QWidget>

namespace Ui {
class enroll;
}
class enroll : public QWidget
{
    Q_OBJECT
public:
    explicit enroll(QWidget *parent = 0);
    ~enroll();

private:
    Ui::enroll *ui;
};

#endif // ENROLL_H
