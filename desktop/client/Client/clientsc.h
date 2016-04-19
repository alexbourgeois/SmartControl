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
    ClientSC();
    void ConnectToServer();
    void GetSensor(int, int);
    void StopClient();

signals:
    /*
     * 0 : server created ; 1 : Connected -1 : Error
     */
    void connectionEstablished(int);
    void valuesAcquired(int, float, float, float);
    void sendMessage(QString);

public slots:

private slots:
    void serviceDiscovered(const QBluetoothServiceInfo);
    void discoveryFinished();
    void askSensor();
    void analyzeMessage(const QString &sender, const QString &msg);

    void connected(const QString &name);
    void clientDisconnected(const QString &name);
    void clientDisconnected();

private:
    void CreateClient(QBluetoothServiceInfo);

    QMap<QString, QBluetoothServiceInfo> services;
    BluetoothClient *client;
    QBluetoothServiceDiscoveryAgent *discoveryAgent;
    bool isServerReady, isDiscoveryRunning, isConnected;
    QTimer *timer;
};

#endif // CLIENTSC_H
