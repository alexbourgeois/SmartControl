#include "clientsc.h"

ClientSC::ClientSC()
{
    services.clear();
    serverReady=false;

    timer = new QTimer();
    timer->setInterval(100);
    timer->setSingleShot(false);
    connect(timer, SIGNAL(timeout()), this, SLOT(askSensor()));
    client=NULL;
}

void ClientSC::ConnectToServer() {

    for(int i=0 ; i<services.size() ; i++) {
        if(services.contains("SmartControl")) {
            qDebug() << "Connection to existing service";
            CreateClient(services.take("SmartControl"));
            break;
        }
    }
    if(!client) {
        services.clear();

        QBluetoothServiceDiscoveryAgent *discoveryAgent = new QBluetoothServiceDiscoveryAgent(this);
        connect(discoveryAgent, SIGNAL(serviceDiscovered(QBluetoothServiceInfo)),
                   this, SLOT(serviceDiscovered(QBluetoothServiceInfo)));
        connect(discoveryAgent, SIGNAL(finished()),
                   this, SLOT(discoveryFinished()));

        discoveryAgent->start(QBluetoothServiceDiscoveryAgent::FullDiscovery);
        qDebug() << "Demarrage de la recherche ...";
    }
}

void ClientSC::serviceDiscovered(const QBluetoothServiceInfo service) {
    qDebug() << "Found new service:" << service.serviceName()
                 << " " << service.serviceDescription();

    //Save every services in a list
    services.insert(service.serviceName(), service);

    if(service.serviceName()=="SmartControl")
        CreateClient(service);
}

void ClientSC::discoveryFinished() {
    if(!client)
        emit connectionEstablished(-1);

    qDebug() << "Discovery finished";
}

void ClientSC::CreateClient(QBluetoothServiceInfo service) {
    client = new BluetoothClient();

    connect(client, SIGNAL(messageReceived(QString,QString)),
            this, SLOT(analyzeMessage(QString,QString)));
    connect(client, SIGNAL(disconnected()), this, SLOT(clientDisconnected()));
    connect(client, SIGNAL(connected(QString)), this, SLOT(connected(QString)));
    connect(this, SIGNAL(sendMessage(QString)), client, SLOT(sendMessage(QString)));

    client->startClient(service);
    emit connectionEstablished(1);
}

/*
 * SensorChosen
 * 0 : aucun
 * 1 : Rotation
 * 2 : Gyroscope
 * 3 : Accelerometer
 */
void ClientSC::GetSensor(int sensor, int interval) {
    if(serverReady) {
        emit sendMessage("stop");
        switch(sensor) {
        case 1:
            emit sendMessage("rota " + QString::number(interval));
            break;
        case 2:
            emit sendMessage("gyro " + QString::number(interval));
            break;
        case 3:
            emit sendMessage("accel " + QString::number(interval));
            break;
        //default:
        }
        timer->setInterval(interval);
        timer->start();

        serverReady=false;

        // PAS BIEN A VIRER QUAND SERVEUR MODIFIE
//        emit sendMessage("value");
    }
    else
        qDebug("Error : server not ready");
}

void ClientSC::askSensor() {
    if(serverReady) {
        emit sendMessage("value");
        serverReady=false;
    }
}

void ClientSC::analyzeMessage(const QString &sender, const QString &msg) {
    qDebug() << "[Serveur] " + msg;
    if(msg=="ready")
        serverReady=true;

    if(msg.contains(":")){
        QStringList list = msg.split(" ");
        if(list.size()<=3)
            qDebug() << "Erreur : il manque une valeur dans celles recues";

        QString activeSensor = list.at(0), x = list.at(1), y = list.at(2), z = list.at(3);

        emit valuesAcquired(activeSensor.toInt(), x.toFloat(), y.toFloat(), z.toFloat());

        //PAS BIEN
        //emit valuesAcquired(1, x.toFloat(), y.toFloat(), z.toFloat());
        serverReady=true;
    }
}

void ClientSC::StopClient() {
    client->stopClient();
}

void ClientSC::connected(const QString &name) {
    qDebug() << "Connected to " << name;
}

void ClientSC::clientDisconnected(const QString &name) {
    qDebug() << "Disconnected from " << name;
}

void ClientSC::clientDisconnected() {
    qDebug() << "Disconnected from somebody";
}
