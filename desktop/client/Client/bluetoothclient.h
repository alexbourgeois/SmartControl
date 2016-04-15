#ifndef BLUETOOTHCLIENT_H
#define BLUETOOTHCLIENT_H

#include<QBluetoothSocket>
#include<QBluetoothDeviceDiscoveryAgent>
#include<QDebug>

class BluetoothClient : public QObject
{
    Q_OBJECT

public:
    BluetoothClient();
    ~BluetoothClient();
    void startClient(const QBluetoothServiceInfo &remoteService);
    void stopClient();

public slots:
    void sendMessage(const QString &message);

private slots:
    void readSocket();
    void connected();

signals:
    void messageReceived(const QString &sender, const QString &message);
    void connected(const QString &name);
    void disconnected();

private:
    QBluetoothSocket *socket;
};

#endif // BLUETOOTHCLIENT_H
