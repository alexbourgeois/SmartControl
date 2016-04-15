/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_start;
    QLabel *infoDeviceLabel;
    QLabel *label_status;
    QListWidget *listWidget_devices;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_ok_2;
    QListWidget *debug_list;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(326, 411);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_start = new QPushButton(centralWidget);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));

        verticalLayout->addWidget(pushButton_start);

        infoDeviceLabel = new QLabel(centralWidget);
        infoDeviceLabel->setObjectName(QStringLiteral("infoDeviceLabel"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        infoDeviceLabel->setFont(font);

        verticalLayout->addWidget(infoDeviceLabel);

        label_status = new QLabel(centralWidget);
        label_status->setObjectName(QStringLiteral("label_status"));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        label_status->setFont(font1);

        verticalLayout->addWidget(label_status);

        listWidget_devices = new QListWidget(centralWidget);
        listWidget_devices->setObjectName(QStringLiteral("listWidget_devices"));

        verticalLayout->addWidget(listWidget_devices);

        pushButton_ok = new QPushButton(centralWidget);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));

        verticalLayout->addWidget(pushButton_ok);

        pushButton_ok_2 = new QPushButton(centralWidget);
        pushButton_ok_2->setObjectName(QStringLiteral("pushButton_ok_2"));

        verticalLayout->addWidget(pushButton_ok_2);

        debug_list = new QListWidget(centralWidget);
        debug_list->setObjectName(QStringLiteral("debug_list"));

        verticalLayout->addWidget(debug_list);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton_start->setText(QApplication::translate("MainWindow", "Start", 0));
        infoDeviceLabel->setText(QApplication::translate("MainWindow", "Nom :  xxxxxxxxxxx", 0));
        label_status->setText(QApplication::translate("MainWindow", "Standby ...", 0));
        pushButton_ok->setText(QApplication::translate("MainWindow", "Ready", 0));
        pushButton_ok_2->setText(QApplication::translate("MainWindow", "STOP", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
