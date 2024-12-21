#include "connectdatabase.h"
#include <iostream>

 ConnectDataBase* ConnectDataBase::m_Instance = nullptr;
// std::mutex ConnectDataBase::m_Mutex;

ConnectDataBase* ConnectDataBase::GetInstance()
{
    if (m_Instance == nullptr)
    {
        // std::lock_guard<std::mutex> lock(m_Mutex); // 确保多线程安全
        // if (m_Instance == nullptr)
        // {
            m_Instance = new ConnectDataBase();
        // }
    }
    return m_Instance;
}

ConnectDataBase::ConnectDataBase()
{
    if (QSqlDatabase::isDriverAvailable("QODBC"))
    {
        m_DataBase = QSqlDatabase::addDatabase("QODBC");
        m_DataBase.setHostName("localhost");
        m_DataBase.setDatabaseName("airport");
        m_DataBase.setPort(3306);
    }
    else
    {
        qDebug() << "ODBC driver is not available!";
    }
}

ConnectDataBase::~ConnectDataBase()
{
    if (m_DataBase.isOpen())
    {
        m_DataBase.close();
    }
    QSqlDatabase::removeDatabase(QSqlDatabase::defaultConnection); // 移除连接
}

bool ConnectDataBase::OpenDataBase()
{
    if (!m_DataBase.isValid())
    {
        qDebug() << "Invalid database connection!";
        return false;
    }

    if (!m_DataBase.open())
    {
        qDebug() << "Failed to open database:" << m_DataBase.lastError().text();
        return false;
    }

    return true;
}

// 其他方法实现...


bool ConnectDataBase::SelectResult(QSqlQuery* sqlquery, const QString& sql)
{
    if (!m_DataBase.isOpen()) {
        qDebug() << "Database is not open!";
        return false;
    }

    if (!sqlquery->exec(sql))
    {
        qDebug() << "SQL execution failed:" << sqlquery->lastError().text();
        return false;
    }
    return true;
}

QString ConnectDataBase::InsertValue(const QString& sql, const int& num, QVector<QString>& values)
{
    QSqlQuery qsqlquery;
    qsqlquery.prepare(sql);
    while (values.size())
    {
        for (int i = 0; i < num; ++i)
        {
            if (values.front().toInt())
                qsqlquery.addBindValue(values.front().toInt());
            else
                qsqlquery.addBindValue(values.front());
            values.pop_front();
        }
        if (!qsqlquery.exec())
        {
            std::cout << qsqlquery.lastError().text().toStdString() << std::endl;
            return qsqlquery.lastError().text();
        }
    }
    return "Success";
}

QString ConnectDataBase::UpdateValue(QVector<QString> &sql)
{
    QSqlQuery qsqlquery;
    while (sql.size())
    {
        if (sql.front() == "")
        {
            sql.pop_front();
            continue;
        }
        qsqlquery.prepare(sql.front());
        try
        {
            if (!qsqlquery.exec())
                throw false;
        }
        catch (bool&)
        {
            std::cout << qsqlquery.lastError().text().toStdString() << std::endl;
            return qsqlquery.lastError().text();
        }
        sql.pop_front();
    }

    return "Success";
}

QString ConnectDataBase::DeletValue(const QString &sql)
{
    QSqlQuery qsqlquery;

    try
    {
        if (!qsqlquery.exec(sql) )
            throw false;
    }
    catch (bool&)
    {
        std::cout << qsqlquery.lastError().text().toStdString() << std::endl;
        return qsqlquery.lastError().text();
    }

    return "Success";
}

int ConnectDataBase::CallPro(const QString& sql)
{
    QSqlQuery qsqlquery(sql);

    if (qsqlquery.exec())
    {
        qsqlquery.next();
        return qsqlquery.value(0).toString().toInt();
    }
    else
    {
        std::cout << qsqlquery.lastError().text().toStdString() << std::endl;
        return -1;
    }
}
