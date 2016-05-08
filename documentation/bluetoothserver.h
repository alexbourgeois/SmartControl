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

class BluetoothServer : public QObject
{
    Q_OBJECT

public:
    /**
     * @brief BluetoothServer constructor
     */
    BluetoothServer();
    ~BluetoothServer();

    /**
     * @brief Creates un SmartControl server and makes it available
     * @param localAdapter : the local bluetooth adapter
     */
    void startServer(const QBluetoothAddress &localAdapter);

    /**
     * @brief Stops the SmartControl server
     */
    void stopServer();

signals:
    /**
     * @brief Signal emitted when a client is connected
     */
    void s_ClientConnected();

    /**
     * @brief Signal used to explain the error that ocurred
     */
    void error(QString);

    /**
     * @brief Signal emitted when a message is received
     * @param sender
     * @param message
     */
    void messageReceived(const QString &sender, const QString &message);

    /**
     * @brief Signal emitted when a clien is connected to the server
     * @param name : client name
     */
    void clientConnected(const QString &name);

    /**
     * @brief Signal emitted when a client disconnects from the server
     * @param name : client name
     */
    void clientDisconnected(const QString &name);

public slots:
    /**
     * @brief [Slot] Used to send message through bluetooth
     * @param message
     */
    void sendMessage(const QString &message);

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
