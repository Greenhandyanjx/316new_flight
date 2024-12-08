#ifndef CONNECTDATABASE_H
#define CONNECTDATABASE_H

#include <QtSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QtSql/QSqlDatabase>
#include <mutex> // 用于多线程安全

class ConnectDataBase
{
public:
    static ConnectDataBase* GetInstance();

    bool OpenDataBase();
    bool SelectResult(QSqlQuery* sqlquery, const QString& sql);
    QString InsertValue(const QString& table, const int& num, QVector<QString>& values);
    QString UpdateValue(QVector<QString>& sql);
    QString DeletValue(const QString& sql);
    int CallPro(const QString& sql);

private:
    ConnectDataBase();  // 构造函数私有化
    ~ConnectDataBase(); // 析构函数私有化，防止外部释放实例

    ConnectDataBase(const ConnectDataBase&) = delete;            // 禁止拷贝构造
    ConnectDataBase& operator=(const ConnectDataBase&) = delete; // 禁止赋值操作

    static ConnectDataBase* m_Instance;
    static std::mutex m_Mutex; // 用于线程安全
    QSqlDatabase m_DataBase;
};

#endif // CONNECTDATABASE_H
