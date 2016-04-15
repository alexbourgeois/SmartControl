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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_discover;
    QLabel *label;
    QLabel *label_state;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_6;
    QPushButton *pushButton_ask;
    QLineEdit *lineEdit_interval;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(360, 358);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_discover = new QPushButton(centralWidget);
        pushButton_discover->setObjectName(QStringLiteral("pushButton_discover"));
        pushButton_discover->setGeometry(QRect(10, 10, 151, 41));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 20, 67, 17));
        label_state = new QLabel(centralWidget);
        label_state->setObjectName(QStringLiteral("label_state"));
        label_state->setGeometry(QRect(230, 20, 121, 17));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 60, 341, 131));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 210, 141, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 260, 141, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 310, 141, 31));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(160, 220, 67, 17));
        pushButton_ask = new QPushButton(centralWidget);
        pushButton_ask->setObjectName(QStringLiteral("pushButton_ask"));
        pushButton_ask->setGeometry(QRect(240, 250, 99, 27));
        lineEdit_interval = new QLineEdit(centralWidget);
        lineEdit_interval->setObjectName(QStringLiteral("lineEdit_interval"));
        lineEdit_interval->setGeometry(QRect(230, 210, 113, 27));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton_discover->setText(QApplication::translate("MainWindow", "Discover", 0));
        label->setText(QApplication::translate("MainWindow", "State :", 0));
        label_state->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Ping serveur", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Restart", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Stop", 0));
        label_6->setText(QApplication::translate("MainWindow", "Interval :", 0));
        pushButton_ask->setText(QApplication::translate("MainWindow", "Ask sensor", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
