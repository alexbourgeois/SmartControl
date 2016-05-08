#ifndef CLIENTSC_H
#define CLIENTSC_H

#include <QObject>
#include <QBluetoothServiceInfo>
#include <QBluetoothServiceDiscoveryAgent>
#include <QTimer>

#include "bluetoothclient.h"

class ClientSC : public QObject
{
        Q_OBJECT
public:
    /**
     * @brief ClientSC constructor
     */
    ClientSC();

    /**
     * @brief Method that starts a discovery and connect to the server when the good service is found
     */
    void ConnectToServer();

    /**
     * @brief Method used to tell server which sensor we want
     */
    void GetSensor(int, int);

    /**
     * @brief Method used to stop the client
     */
    void StopClient();

signals:
    /**
     * @brief [Signal] connection state
     * @param int : 0 = client ready ; 1 = Connected ; -1 : Error
     */
    void connectionEstablished(int);

    /**
     * @brief [Signal] new sensor values have been acquired
     * @param int : sensor reference
     * @param float : x value
     * @param float : y value
     * @param float : z value
     */
    void valuesAcquired(int, float, float, float);

    /**
     * @brief [Signal] send a bluetooth message
     * @param QString : message
     */
    void sendMessage(QString);

public slots:

private slots:
    /**
     * @brief [Slot] used to handle new discovered bluetooth service
     * @param service : the discovered service
     */
    void serviceDiscovered(const QBluetoothServiceInfo service);

    /**
     * @brief [Slot] used to handle the end of the bluetooth discovery
     */
    void discoveryFinished();

    /**
     * @brief [Slot] send "value" to the server to get sensor value
     */
    void askSensor();

    /**
     * @brief [Slot] analyzes every received message and calls the method associated with the message.
     * @param sender : the sender name
     * @param msg : the message received
     */
    void analyzeMessage(const QString &sender, const QString &msg);

    /**
     * @brief [Slot] used to handle new connected client
     * @param name : connected device name
     */
    void connected(const QString &name);

    /**
     * @brief [Slot] used to handle client disconnection
     * @param name : disconnected device name
     */
    void clientDisconnected(const QString &name);

    /**
     * @brief [Slot] used to handle client disconnection
     */
    void clientDisconnected();

private:
    /**
     * @brief Create the bluetooth client
     * @param service : the service it has to connect to
     */
    void CreateClient(QBluetoothServiceInfo service);

    /**
     * @brief Map used to store each service found, the key is the service name
     */
    QMap<QString, QBluetoothServiceInfo> services;

    /**
     * @brief A bluetooth client
     */
    BluetoothClient *client;

    /**
     * @brief A service discovery agent
     */
    QBluetoothServiceDiscoveryAgent *discoveryAgent;

    /**
     * @brief timer used to schedule the next request
     */
    QTimer *timer;

    bool isServerReady, isDiscoveryRunning, isConnected;
};



/*



public:
    ClientSC();
    void ConnectToServer();
    void GetSensor(int, int);
    void StopClient();

signals:
    void connectionEstablished(int);
    void valuesAcquired(int, float, float, float);
    void sendMessage(QString);

private slots:
    void serviceDiscovered(const QBluetoothServiceInfo service);
    void discoveryFinished();
    void askSensor();
    void analyzeMessage(const QString &sender, const QString &msg);
    void connected(const QString &name);
    void clientDisconnected(const QString &name);
    void clientDisconnected();

private:
    void CreateClient(QBluetoothServiceInfo service);
    QMap<QString, QBluetoothServiceInfo> services;
    BluetoothClient *client;
    QBluetoothServiceDiscoveryAgent *discoveryAgent;
    QTimer *timer;

    bool isServerReady, isDiscoveryRunning, isConnected;
    */

#endif // CLIENTSC_H
