
QT       += core gui sql
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++17
TARGET = FlightManagerSystem
TEMPLATE = app
INCLUDEPATH +=  . \
                ./Connect/ \
                ./Login/ \
                ./MainWindow

SOURCES +=  main.cpp \
            Login/buytk.cpp \
            Login/enroll.cpp \
            Login/login.cpp \
            Connect/connectdatabase.cpp \
            MainWindow/flightmanager.cpp

HEADERS +=  Login/login.h \
            Connect/connectdatabase.h \
            Login/buytk.h \
            Login/enroll.h \
            MainWindow/flightmanager.h

FORMS    += $$PWD/Login/login.ui \
    Login/buytk.ui \
    Login/enroll.ui \
    MainWindow/flightmanager.ui

RESOURCES += \
    resourse.qrc

DISTFILES +=
