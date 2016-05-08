#include "bluetoothclient.h"

BluetoothClient::BluetoothClient() {
    socket = NULL;
}

BluetoothClient::~BluetoothClient() {

}

void BluetoothClient::startClient(const QBluetoothServiceInfo &remoteService) {
    // Connect to service
    socket = new QBluetoothSocket(QBluetoothServiceInfo::RfcommProtocol);
    qDebug() << "Create socket";
    socket->connectToService(remoteService);
    qDebug() << "ConnectToService done";

    connect(socket, SIGNAL(readyRead()), this, SLOT(readSocket()));
    connect(socket, SIGNAL(connected()), this, SLOT(connected()));
    connect(socket, SIGNAL(disconnected()), this, SIGNAL(disconnected()));
}

void BluetoothClient::stopClient() {
    delete socket;
    socket = 0;
}

void BluetoothClient::readSocket() {
    if (!socket)
        return;

    while (socket->canReadLine()) {
        QByteArray line = socket->readLine().trimmed();
        emit messageReceived(socket->peerName(),
                             QString::fromUtf8(line.constData(), line.length()));
        qDebug() << "[Server] " << QString::fromUtf8(line.constData(), line.length());
    }
}

void BluetoothClient::sendMessage(const QString &message) {
    QByteArray text = message.toUtf8() + '\n';
     qDebug() << "[Client] " << text;
    socket->write(text);
}

void BluetoothClient::connected() {
    emit connected(socket->peerName());
}
