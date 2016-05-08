#include "clientsc.h"

ClientSC::ClientSC()
{
    //initialization
    services.clear();
    isServerReady=false;
    isDiscoveryRunning=false;
    isConnected=false;

    timer = new QTimer();
    timer->setInterval(100);
    timer->setSingleShot(false);
    connect(timer, SIGNAL(timeout()), this, SLOT(askSensor()));

    client = NULL;
}

void ClientSC::ConnectToServer() {

    //Check if the service isn't already in the service list
    for(int i=0 ; i<services.size() ; i++) {
        if(services.contains("SmartControl")) {
            qDebug() << "Connection to existing service";
            CreateClient(services.take("SmartControl"));
            emit connectionEstablished(1);
            break;
        }
    }

    //If there is no client then we can scan
    if(!client) {
        services.clear();

        discoveryAgent = new QBluetoothServiceDiscoveryAgent(this);
        connect(discoveryAgent, SIGNAL(serviceDiscovered(QBluetoothServiceInfo)),
                   this, SLOT(serviceDiscovered(QBluetoothServiceInfo)));
        connect(discoveryAgent, SIGNAL(finished()),
                   this, SLOT(discoveryFinished()));

        discoveryAgent->start(QBluetoothServiceDiscoveryAgent::FullDiscovery);
        qDebug() << "Demarrage de la recherche ...";
        isDiscoveryRunning=true;
    }
}

void ClientSC::serviceDiscovered(const QBluetoothServiceInfo service) {
    qDebug() << "Found new service:" << service.serviceName()
                 << " " << service.serviceDescription();

    //Save each service in a list
    services.insert(service.serviceName(), service);

    //if the good service is found then we can connect
    if(service.serviceName()=="SmartControl")
        CreateClient(service);
}

void ClientSC::discoveryFinished() {
    if(!client)
        emit connectionEstablished(-1);
    isDiscoveryRunning=false;
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

    emit connectionEstablished(0);
}

/*
 * SensorChosen
 * 0 : aucun
 * 1 : Rotation
 * 2 : Gyroscope
 * 3 : Accelerometer
 */
void ClientSC::GetSensor(int sensor, int interval) {
        emit sendMessage("stop");
        switch(sensor) {
        case 1:
            emit sendMessage("1 " + QString::number(interval));
            break;
        case 2:
            emit sendMessage("2 " + QString::number(interval));
            break;
        case 3:
            emit sendMessage("3 " + QString::number(interval));
            break;
        }
        timer->setInterval(interval);
        timer->start();
}

void ClientSC::askSensor() {
    if(isServerReady) {
        emit sendMessage("value");
        isServerReady=false;
    }
}

void ClientSC::analyzeMessage(const QString &sender, const QString &msg) {
    if(msg=="ready")
        isServerReady=true;

    if(msg.contains(":")){
        QStringList list = msg.split(" ");
        if(list.size()<=3)
            qDebug() << "Erreur : il manque une valeur dans celles recues";

        QString activeSensor = list.at(0), x = list.at(1), y = list.at(2), z = list.at(3);
        activeSensor.remove(activeSensor.size()-1, 1); //remove :

        emit valuesAcquired(activeSensor.toInt(), x.toFloat(), y.toFloat(), z.toFloat());

        isServerReady=true;
    }
}

void ClientSC::StopClient() {
    if(isDiscoveryRunning) {
        discoveryAgent->stop();
    }
    if(isConnected) {
        emit sendMessage("stop");
        client->stopClient();
    }
    client=NULL;
}

void ClientSC::connected(const QString &name) {
    qDebug() << "Connected to " << name;
    isConnected=true;
    emit connectionEstablished(1);
}

void ClientSC::clientDisconnected(const QString &name) {
    qDebug() << "Disconnected from " << name;
    isConnected=false;
    StopClient();
}

void ClientSC::clientDisconnected() {
    qDebug() << "Disconnected from somebody";
    isConnected=false;
    StopClient();

}
