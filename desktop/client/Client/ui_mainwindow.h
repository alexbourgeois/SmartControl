/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pB_Connect;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pB_Stop;
    QLabel *label_state;
    QListWidget *listWidget;
    QGroupBox *gB_sensor;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_Interval;
    QLineEdit *lE_Interval;
    QPushButton *pB_Ask;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QRadioButton *rB_Rotation;
    QRadioButton *rB_Gyroscope;
    QRadioButton *rB_Accelerometer;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *l_x;
    QLabel *l_xValue;
    QSpacerItem *horizontalSpacer_4;
    QLabel *l_y;
    QLabel *l_yValue;
    QSpacerItem *horizontalSpacer_5;
    QLabel *l_z;
    QLabel *l_zValue;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(376, 386);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pB_Connect = new QPushButton(centralWidget);
        pB_Connect->setObjectName(QStringLiteral("pB_Connect"));

        horizontalLayout_2->addWidget(pB_Connect);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pB_Stop = new QPushButton(centralWidget);
        pB_Stop->setObjectName(QStringLiteral("pB_Stop"));

        horizontalLayout_2->addWidget(pB_Stop);


        verticalLayout_5->addLayout(horizontalLayout_2);

        label_state = new QLabel(centralWidget);
        label_state->setObjectName(QStringLiteral("label_state"));
        label_state->setMaximumSize(QSize(16777215, 30));

        verticalLayout_5->addWidget(label_state);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMaximumSize(QSize(16000, 100));
        listWidget->setResizeMode(QListView::Adjust);

        verticalLayout_5->addWidget(listWidget);

        gB_sensor = new QGroupBox(centralWidget);
        gB_sensor->setObjectName(QStringLiteral("gB_sensor"));
        gB_sensor->setMinimumSize(QSize(0, 220));
        horizontalLayoutWidget = new QWidget(gB_sensor);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 20, 351, 121));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_Interval = new QLabel(horizontalLayoutWidget);
        label_Interval->setObjectName(QStringLiteral("label_Interval"));

        verticalLayout_2->addWidget(label_Interval);

        lE_Interval = new QLineEdit(horizontalLayoutWidget);
        lE_Interval->setObjectName(QStringLiteral("lE_Interval"));

        verticalLayout_2->addWidget(lE_Interval);

        pB_Ask = new QPushButton(horizontalLayoutWidget);
        pB_Ask->setObjectName(QStringLiteral("pB_Ask"));

        verticalLayout_2->addWidget(pB_Ask);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        rB_Rotation = new QRadioButton(horizontalLayoutWidget);
        rB_Rotation->setObjectName(QStringLiteral("rB_Rotation"));
        rB_Rotation->setChecked(true);

        verticalLayout->addWidget(rB_Rotation);

        rB_Gyroscope = new QRadioButton(horizontalLayoutWidget);
        rB_Gyroscope->setObjectName(QStringLiteral("rB_Gyroscope"));

        verticalLayout->addWidget(rB_Gyroscope);

        rB_Accelerometer = new QRadioButton(horizontalLayoutWidget);
        rB_Accelerometer->setObjectName(QStringLiteral("rB_Accelerometer"));

        verticalLayout->addWidget(rB_Accelerometer);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayoutWidget_4 = new QWidget(gB_sensor);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(0, 150, 351, 51));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        l_x = new QLabel(horizontalLayoutWidget_4);
        l_x->setObjectName(QStringLiteral("l_x"));

        horizontalLayout_4->addWidget(l_x);

        l_xValue = new QLabel(horizontalLayoutWidget_4);
        l_xValue->setObjectName(QStringLiteral("l_xValue"));

        horizontalLayout_4->addWidget(l_xValue);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        l_y = new QLabel(horizontalLayoutWidget_4);
        l_y->setObjectName(QStringLiteral("l_y"));

        horizontalLayout_4->addWidget(l_y);

        l_yValue = new QLabel(horizontalLayoutWidget_4);
        l_yValue->setObjectName(QStringLiteral("l_yValue"));

        horizontalLayout_4->addWidget(l_yValue);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        l_z = new QLabel(horizontalLayoutWidget_4);
        l_z->setObjectName(QStringLiteral("l_z"));

        horizontalLayout_4->addWidget(l_z);

        l_zValue = new QLabel(horizontalLayoutWidget_4);
        l_zValue->setObjectName(QStringLiteral("l_zValue"));

        horizontalLayout_4->addWidget(l_zValue);


        verticalLayout_5->addWidget(gB_sensor);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pB_Connect->setText(QApplication::translate("MainWindow", "Connect", 0));
        pB_Stop->setText(QApplication::translate("MainWindow", "Stop", 0));
        label_state->setText(QString());
        gB_sensor->setTitle(QApplication::translate("MainWindow", "Sensors", 0));
        label_Interval->setText(QApplication::translate("MainWindow", "Interval (ms) :", 0));
        lE_Interval->setText(QApplication::translate("MainWindow", "12", 0));
        pB_Ask->setText(QApplication::translate("MainWindow", "Ask sensor", 0));
        rB_Rotation->setText(QApplication::translate("MainWindow", "Rotation", 0));
        rB_Gyroscope->setText(QApplication::translate("MainWindow", "Gyroscope", 0));
        rB_Accelerometer->setText(QApplication::translate("MainWindow", "Accelerometer", 0));
        l_x->setText(QApplication::translate("MainWindow", "x :", 0));
        l_xValue->setText(QString());
        l_y->setText(QApplication::translate("MainWindow", "y :", 0));
        l_yValue->setText(QString());
        l_z->setText(QApplication::translate("MainWindow", "z :", 0));
        l_zValue->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
