#ifndef BLUETOOTHCLIENT_H
#define BLUETOOTHCLIENT_H

#include<QBluetoothSocket>
#include<QBluetoothDeviceDiscoveryAgent>
#include<QDebug>

class BluetoothClient : public QObject
{
    Q_OBJECT

public:
    /**
     * @brief BluetoothClient constructor
     */
    BluetoothClient();

    ~BluetoothClient();

    /**
     * @brief Establish connection with the service in bluetooth thanks to a socket
     * @param remoteService
     */
    void startClient(const QBluetoothServiceInfo &remoteService);

    /**
     * @brief close the connection
     */
    void stopClient();

public slots:
    /**
     * @brief [Slot] used to send a message
     * @param message
     */
    void sendMessage(const QString &message);

private slots:
    /**
     * @brief [Slot] used to read the socket
     */
    void readSocket();

    /**
     * @brief [Slot] used to alert that connection has been established
     */
    void connected();

signals:
    /**
     * @brief [Signal] a message has been received by sender
     * @param sender
     * @param message
     */
    void messageReceived(const QString &sender, const QString &message);

    /**
     * @brief The client is connected
     * @param name : server name
     */
    void connected(const QString &name);

    /**
     * @brief The client is disconnected from server
     */
    void disconnected();

private:
    QBluetoothSocket *socket;
};

#endif // BLUETOOTHCLIENT_H
