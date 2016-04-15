#include "MainWindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->gB_sensor->setEnabled(false);

    frame3D = new Frame3D();
    connect(this, SIGNAL(rotate(float,float,float)), frame3D, SLOT(rotate(float,float,float)));

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
    ui->listWidget->clear();
    ui->label_state->setText("Scanning ...");

    client->ConnectToServer();
}

void MainWindow::readValues(int sensor, float x, float y, float z) {
    switch(sensor) {
    case 1:
        emit rotate(x, y,z);
        break;
    case 2:
        break;
    case 3:
        break;
    }
}

void MainWindow::on_pB_Stop_clicked()
{
     client->StopClient();
}

void MainWindow::on_pB_Ask_clicked() {
    if(sensorChosen)
        client->GetSensor(sensorChosen, ui->lE_Interval->text().toInt());
}

//void MainWindow::SocketStateChanged(QBluetoothSocket::SocketState state) {
//    socketState =  state;
//    qDebug() << "Etat socket : " +socketState;
//    if(socketState == QBluetoothSocket::ListeningState)
//        emit sendMessage("ok");
//}

void MainWindow::connectionState(int val) {
    if(val) {
        ui->gB_sensor->setEnabled(true);
        ui->label_state->setText("Connected");
    }
    else {
        //debug("Connection error");
        ui->label_state->setText("Error");
    }
}

void MainWindow::on_rB_Rotation_toggled(bool checked) {
    if(checked)
        sensorChosen=1;
}

void MainWindow::on_rB_Gyroscope_toggled(bool checked) {
    if(checked)
        sensorChosen=2;
}

void MainWindow::on_rB_Accelerometer_toggled(bool checked) {
    if(checked)
        sensorChosen=3;
}
