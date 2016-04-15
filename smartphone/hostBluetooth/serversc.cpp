#include "serversc.h"

ServerSC::ServerSC() {
    sensorChosen=0;
}

void ServerSC::StartServer() {
    const QBluetoothHostInfo info = QBluetoothLocalDevice::allDevices().at(0);

    QBluetoothLocalDevice adapter(info.address());
    adapter.setHostMode(QBluetoothLocalDevice::HostDiscoverable);

    server = new BluetoothServer();
    connect(server, SIGNAL(clientConnected()), this, SLOT(clientConnected()));
    connect(server, SIGNAL(clientDisconnected(QString)), this, SLOT(clientDisconnected(QString)));
    connect(server, SIGNAL(messageReceived(QString,QString)), this, SLOT(analyzeMessage(QString,QString)));
    connect(this, SIGNAL(sendMessage(QString)), server, SLOT(sendMessage(QString)));

    server->startServer(info.address());
}

void ServerSC::StopServer() {
    server->stopServer();
    delete server;
}

void ServerSC::clientConnected() {
    //debug("Client connecté");

    QList<QByteArray> list = QSensor::sensorTypes();
    for(int i=0 ; i<list.size() ; i++){
      //  debug(list.at(i));
        emit sendMessage(list.at(i));
    }
    emit connectionEstablished(1);
    emit sendMessage("ready");
}


/* SensorChosen
* 0 : aucun
* 1 : Rotation
* 2 : Gyroscope
* 3 : Accelerometer
*/
void ServerSC::analyzeMessage(const QString &sender, const QString &message){
    //ui->listWidget_devices->addItem(sender + " : " + message);

    QStringList messageList = message.split(" ");

    if(messageList.size()==1) {
        if(messageList.at(0)=="stop") {
           sensor->stop();
           sensor=NULL;
        }
        if(messageList.at(0)=="value") {
            if(sensor->reading()->valueCount()==3) {
                emit sendMessage("Rota: " + sensor->reading()->value(0).toString() +" "+ sensor->reading()->value(1).toString() +" "+ sensor->reading()->value(2).toString());
            }
        }
    }
    else if(messageList.size()==2) {
        sensorChosen = QString(messageList.at(0)).toInt();

        switch(sensorChosen) {
        case 0:
            sensor = NULL;
            break;
        case 1:
            sensor = new QRotationSensor(this);
            break;
        case 2:
            sensor = new QGyroscope(this);
            break;
        case 3:
            sensor = new QAccelerometer(this);
            break;
        }
        if(!sensor)
            qDebug() << "Impossible to create sensor";
        else {
            sensor->setSkipDuplicates(true);
            sensor->start();
            emit sendMessage("ready");
        }
    }
    else {
        emit sendMessage("Strange message");
    }
}

void ServerSC::clientDisconnected(QString) {
    StopServer();
}
