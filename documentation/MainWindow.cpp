#include "MainWindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->gB_sensor->setEnabled(false);
    ui->pB_Stop->setEnabled(false);

    client = new ClientSC();
    connect(client, SIGNAL(connectionEstablished(int)), this, SLOT(connectionState(int)));
    connect(client, SIGNAL(valuesAcquired(int, float, float, float)), this, SLOT(readValues(int, float, float, float)));

    sensorChosen=0;
}

MainWindow::~MainWindow() {
    delete frame3D;
    delete client;
    delete ui;
}

void MainWindow::on_pB_Connect_clicked() {
    ui->pB_Connect->setEnabled(false);
    ui->pB_Stop->setEnabled(true);
    ui->listWidget->clear();
    ui->label_state->setText("Scanning ...");

    client->ConnectToServer();
}

void MainWindow::readValues(int sensor, float x, float y, float z) {
    switch(sensor) {
    case 1:
        emit rotate(x, y,z);
        break;
    default:
        ui->l_xValue->setText(QString::number(x));
        ui->l_yValue->setText(QString::number(y));
        ui->l_zValue->setText(QString::number(z));
    }
}

void MainWindow::on_pB_Stop_clicked() {
     client->StopClient();
     ui->pB_Connect->setEnabled(true);
     ui->gB_sensor->setEnabled(false);
     qDebug() << "Stop";
}

void MainWindow::on_pB_Ask_clicked() {
    if(sensorChosen)
        client->GetSensor(sensorChosen, ui->lE_Interval->text().toInt());
}

void MainWindow::connectionState(int val) {
    switch(val) {
    case 0:
        qDebug() << "Server created";
        break;
    case 1:
        ui->gB_sensor->setEnabled(true);
        ui->label_state->setText("Connected");
        break;
    case -1:
        //debug("Connection error");
        ui->label_state->setText("Error");
        break;
    }
}

void MainWindow::on_rB_Rotation_toggled(bool checked) {
    if(checked) {
        sensorChosen=1;
        frame3D = new Frame3D();
        connect(this, SIGNAL(rotate(float,float,float)), frame3D, SLOT(rotate(float,float,float)));
    }
}

void MainWindow::on_rB_Gyroscope_toggled(bool checked) {
    if(checked)
        sensorChosen=2;
}

void MainWindow::on_rB_Accelerometer_toggled(bool checked) {
    if(checked)
        sensorChosen=3;
}
