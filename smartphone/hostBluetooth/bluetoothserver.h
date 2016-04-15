#ifndef BLUETOOTHSERVER_H
#define BLUETOOTHSERVER_H

#include <QDebug>
#include <QBluetoothAddress>
#include <QBluetoothServer>
#include <QBluetoothLocalDevice>
#include <QBluetoothDeviceDiscoveryAgent>
#include <qbluetoothserviceinfo.h>
#include <qbluetoothaddress.h>

QT_FORWARD_DECLARE_CLASS(QBluetoothServer)
QT_FORWARD_DECLARE_CLASS(QBluetoothSocket)

QT_USE_NAMESPACE

class bluetoothServer : public QObject
{
    Q_OBJECT

public:
   // explicit bluetoothServer(QObject *parent = 0);
    bluetoothServer();
    ~bluetoothServer();

    //void startServer(const QBluetoothAddress &localAdapter = QBluetoothAddress());
    void startServer(const QBluetoothAddress &localAdapter);
    void stopServer();

signals:
    void signalClientConnected();
    void error(QString);

    void messageReceived(const QString &sender, const QString &message);
    void clientConnected(const QString &name);
    void clientDisconnected(const QString &name);

public slots:
    void sendMessage(const QString &message);
    void trash(QBluetoothServer::Error);

private slots:
    void clientConnected();
    void clientDisconnected();
    void readSocket();

private:
    QBluetoothServer *rfcommServer;
    QString localDeviceName;
    QBluetoothLocalDevice localDevice;
    QBluetoothServiceInfo serviceInfo;
    QBluetoothSocket *socket;
};
#endif // BLUETOOTHSERVER_H
