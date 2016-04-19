#include "bluetoothclient.h"

BluetoothClient::BluetoothClient() {
    socket = NULL;
}

BluetoothClient::~BluetoothClient() {

}

void BluetoothClient::startClient(const QBluetoothServiceInfo &remoteService) {

//    if (socket) {
//         qDebug() << "socket existant";
//        return;
//    }

    // Connect to service
    socket = new QBluetoothSocket(QBluetoothServiceInfo::RfcommProtocol);
    qDebug() << "Create socket";
    socket->connectToService(remoteService);
    qDebug() << "ConnectToService done";

    connect(socket, SIGNAL(readyRead()), this, SLOT(readSocket()));
    connect(socket, SIGNAL(connected()), this, SLOT(connected()));
    connect(socket, SIGNAL(disconnected()), this, SIGNAL(disconnected()));
   // connect(socket, SIGNAL(stateChanged(QBluetoothSocket::SocketState)), this, SLOT(stateChanged(QBluetoothSocket::SocketState)));
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
//    switch(socket->state()) {
//        case QBluetoothSocket::UnconnectedState	:
//            qDebug() << "Etat socket : Non Connecté";
//        break;
//    case QBluetoothSocket::ServiceLookupState:
//        qDebug() << "Socket is querying connection parameters.";
//        break;
//    case QBluetoothSocket::ConnectingState:
//        qDebug() << "Etat socket : Connecting state";
//        break;
//    case QBluetoothSocket::ListeningState:
//        qDebug() << "Etat socket : En écoute";
//        break;
//    case QBluetoothSocket::ConnectedState:
//        qDebug() << "Etat socket : Connected";
//        break;

//    case QBluetoothSocket::ClosingState:
//        qDebug() << "Etat socket : Closing";
//        break;

//    case QBluetoothSocket::BoundState:
//        qDebug() << "Etat socket : Bound";
//        break;
//     default:

//        QBluetoothSocket::ServiceLookupState
//        QBluetoothSocket::ConnectingState
//        QBluetoothSocket::ConnectedState
//        QBluetoothSocket::BoundState
//        QBluetoothSocket::ClosingState
//        QBluetoothSocket::ListeningState
//        qDebug() << "Etat socket : inconnu ";
//    }
}

void BluetoothClient::sendMessage(const QString &message) {
    QByteArray text = message.toUtf8() + '\n';
     qDebug() << "[Client] " << text;
    socket->write(text);
}

void BluetoothClient::connected() {
    emit connected(socket->peerName());
}

//void BluetoothClient::stateChanged(QBluetoothSocket::SocketState state) {
////    qDebug() << "Etat socket : " +state;
//  //  emit signal_StateChanged(state);
//}
