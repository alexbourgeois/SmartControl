#include "serversc.h"

ServerSC::ServerSC() {
    sensorChosen=0;

    sensor=NULL;
}

void ServerSC::StartServer() {
    const QBluetoothHostInfo info = QBluetoothLocalDevice::allDevices().at(0);

    //QBluetoothLocalDevice adapter(info.address());
    //adapter.setHostMode(QBluetoothLocalDevice::HostDiscoverable);

    server = new BluetoothServer();
    connect(server, SIGNAL(s_ClientConnected()), this, SLOT(clientConnected()));
    connect(server, SIGNAL(clientDisconnected(QString)), this, SLOT(clientDisconnected(QString)));
    connect(server, SIGNAL(messageReceived(QString, QString)), this, SLOT(analyzeMessage(QString, QString)));
    connect(server, SIGNAL(error(QString)), this, SLOT(errorManagement(QString)));
    connect(this, SIGNAL(sendMessage(QString)), server, SLOT(sendMessage(QString)));

    server->startServer(info.address());
}

void ServerSC::StopServer() {
    emit sendMessage("stop");
    server->stopServer();
    delete server;
}

void ServerSC::clientConnected() {
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
    //emit s_debug(message);
    QStringList messageList = message.split(" ");

    if(messageList.size()==1) {
        if(messageList.at(0)=="stop") {
            if(sensor)
                sensor->stop();
            sensor=NULL;
        }
        if(messageList.at(0)=="value") {
            if(sensor) {
                if(sensor->reading()->valueCount()==3) {
                    emit sendMessage(QString::number(sensorChosen) + ": " + sensor->reading()->value(0).toString() +" "+ sensor->reading()->value(1).toString() +" "+ sensor->reading()->value(2).toString());
                }
            }
            else {
                emit sendMessage("Sensor not specified");
                emit sendMessage("ready");
            }
        }
    }
    else if(messageList.size()==2) {
        sensorChosen = QString(messageList.at(0)).toInt();
        emit s_debug("Sensor : " + QString::number(sensorChosen));
        switch(sensorChosen) {
        case 0:
            sensor = NULL;
            break;
        case 1:
            s_debug("Coucou");
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
    emit s_debug("Deco");
    StopServer();
}

void ServerSC::errorManagement(QString msg) {
    emit s_debug(msg);
}
