#-------------------------------------------------
#
# Project created by QtCreator 2016-03-12T21:03:18
#
#-------------------------------------------------

QT       += core gui bluetooth
QT += 3dcore 3drender 3dinput

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Client
TEMPLATE = app


SOURCES += main.cpp\
    bluetoothclient.cpp \
    window.cpp \
    frame3d.cpp \
    MainWindow.cpp \
    clientsc.cpp

HEADERS  += \
    bluetoothclient.h \
    window.h \
    frame3d.h \
    MainWindow.h \
    clientsc.h

FORMS    += mainwindow.ui

CONFIG += mobility
MOBILITY = 

