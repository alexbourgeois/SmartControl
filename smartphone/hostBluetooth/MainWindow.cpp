#include "MainWindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_ok->setEnabled(false);

    server = new bluetoothServer();
    connect(server, SIGNAL(signalClientConnected()), this, SLOT(clientConnected()));
    connect(server, SIGNAL(error(QString)), this, SLOT(erreurServeur(QString)));
    connect(server, SIGNAL(clientDisconnected(QString)), this, SLOT(clientDisconnected(QString)));
    connect(server, SIGNAL(messageReceived(QString,QString)),
            this, SLOT(analyzeMessage(QString,QString)));
    connect(this, SIGNAL(sendMessage(QString)), server, SLOT(sendMessage(QString)));

    //Trigger pour lire les données des capteurs
    timer = new QTime();
    timer->start();
//    timer->setInterval(10);
//    timer->setSingleShot(false);
//    timer->
//    connect(timer, SIGNAL(timeout()), this, SLOT(checkReadingGyro()));
//    trash=0;
}

MainWindow::~MainWindow() {
    delete ui;
    delete server;
}

void MainWindow::on_pushButton_start_clicked() {
    ui->pushButton_start->setEnabled(false);

    const QBluetoothHostInfo info = QBluetoothLocalDevice::allDevices().at(0);

    ui->infoDeviceLabel->setText(info.name());
    debug("Adresse : " + info.address().toString());

    QBluetoothLocalDevice adapter(info.address());
    adapter.setHostMode(QBluetoothLocalDevice::HostDiscoverable);

    server->startServer(info.address());
    debug("Demarrage du serveur ...");
}

void MainWindow::clientConnected() {
    debug("Client connecté");

    QList<QByteArray> list = QSensor::sensorTypes();
    for(int i=0 ; i<list.size() ; i++){
        debug(list.at(i));
        emit sendMessage(list.at(i));
    }

    ui->pushButton_ok->setEnabled(true);
}

void MainWindow::erreurServeur(QString msg) {
  // debug("ERROR : " + msg);
}

void MainWindow::analyzeMessage(const QString &sender, const QString &message){
    //ui->listWidget_devices->addItem(sender + " : " + message);

    QStringList messageList = message.split(" ");
    if(messageList.size()==1) {
        if(messageList.at(0)=="stop") {
           // timer->stop();
        }
        if(messageList.at(0)=="ok") {
            readyToSend = true;
        }
        if(messageList.at(0)=="value") {
            //debug("Temps entre value : " + QString::number(timer->msec()-timerVal));
            timerVal = timer->msec();
            if(sensor->reading()->valueCount()==3) {
                emit sendMessage("Rota: " + sensor->reading()->value(0).toString() +" "+ sensor->reading()->value(1).toString() +" "+ sensor->reading()->value(2).toString());
            }
        }
    }
    else if(messageList.size()==2) {
        //Start the good sensor
        if(messageList.at(0)=="rota") {
            debug("Rotation");
            sensor = new QRotationSensor(this);
        }
        if(messageList.at(0)=="gyro") {
            debug("Gyroscope");
            sensor = new QGyroscope(this);
        }
        if(messageList.at(0)=="acce") {
            debug("Accelerometer");
            sensor = new QAccelerometer(this);
        }
        if(messageList.at(0)=="light") {
            debug("Light");
            sensor = new QAmbientLightSensor(this);
        }

        if(!sensor)
            debug("Error starting " + messageList.at(0));
        else {
            sensor->setSkipDuplicates(true);
            sensor->start();
        }

        //Set timer interval to the specified time (ms)
      //  timer->setInterval(((QString)messageList.at(1)).toInt());
      //  timer->start();
    }
    else {
        debug("Strange message size");
        emit sendMessage("Strange message size");
    }

//    if(message == "Gyro") {
//        debug("Demarrage gyroscope");
//        if(!gyro)
//            debug("Erreur gyroscope");
//        gyro->start();
//        timer->start();
//    }
}

void MainWindow::on_pushButton_ok_clicked() {
    emit sendMessage("ready");
    debug("ready");
}

void MainWindow::checkReadingGyro() {
    //debug("- Gyr: " + QString::number(gyro->reading()->x()) +" "+ QString::number(gyro->reading()->y()) +" "+ QString::number(gyro->reading()->z()));
    if(readyToSend) {
//        if(sensor->reading()->valueCount()==3) {
//            emit sendMessage("Rota: " + sensor->reading()->value(0).toString() +" "+ sensor->reading()->value(1).toString() +" "+ sensor->reading()->value(2).toString());
//        }
        readyToSend=false;
    }
}

void MainWindow::on_pushButton_ok_2_clicked() {
    server->stopServer();
    ui->listWidget_devices->clear();
    ui->pushButton_start->setEnabled(true);
}

void MainWindow::debug(QString msg) {
    ui->debug_list->addItem(msg);
}
