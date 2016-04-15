#-------------------------------------------------
#
# Project created by QtCreator 2016-01-24T00:07:44
#
#-------------------------------------------------

QT       += core gui bluetooth sensors
#QT       += bluetooth
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = hostBluetooth
TEMPLATE = app


SOURCES += main.cpp\
    bluetoothserver.cpp \
    MainWindow.cpp \
    serveursc.cpp

HEADERS  += \
    bluetoothserver.h \
    MainWindow.h \
    serveursc.h

FORMS    += mainwindow.ui
