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
    QPushButton *pB_Start;
    QLabel *l_InfoDevice;
    QLabel *l_Status;
    QListWidget *lW_devices;
    QPushButton *pB_Stop;
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
        pB_Start = new QPushButton(centralWidget);
        pB_Start->setObjectName(QStringLiteral("pB_Start"));

        verticalLayout->addWidget(pB_Start);

        l_InfoDevice = new QLabel(centralWidget);
        l_InfoDevice->setObjectName(QStringLiteral("l_InfoDevice"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        l_InfoDevice->setFont(font);

        verticalLayout->addWidget(l_InfoDevice);

        l_Status = new QLabel(centralWidget);
        l_Status->setObjectName(QStringLiteral("l_Status"));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        l_Status->setFont(font1);

        verticalLayout->addWidget(l_Status);

        lW_devices = new QListWidget(centralWidget);
        lW_devices->setObjectName(QStringLiteral("lW_devices"));

        verticalLayout->addWidget(lW_devices);

        pB_Stop = new QPushButton(centralWidget);
        pB_Stop->setObjectName(QStringLiteral("pB_Stop"));

        verticalLayout->addWidget(pB_Stop);

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
        pB_Start->setText(QApplication::translate("MainWindow", "Start", 0));
        l_InfoDevice->setText(QApplication::translate("MainWindow", "Nom :  xxxxxxxxxxx", 0));
        l_Status->setText(QApplication::translate("MainWindow", "Standby ...", 0));
        pB_Stop->setText(QApplication::translate("MainWindow", "STOP", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
