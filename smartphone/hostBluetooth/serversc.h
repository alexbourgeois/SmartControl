#ifndef ServerSC_H
#define ServerSC_H

#include <QSensor>
#include <QRotationSensor>
#include <QGyroscope>
#include <QAccelerometer>

#include "bluetoothserver.h"

class ServerSC : public QObject
{
    Q_OBJECT

public:
    ServerSC();
    void StartServer();
    void StopServer();
    void analyzeMessage(const QString &sender, const QString &message);

signals:
    void connectionEstablished(int);
    void sendMessage(QString);

private slots:
    void clientConnected();
    void clientDisconnected(QString);

private:
    BluetoothServer *server;
    QSensor *sensor;

    int sensorChosen;
};

#endif // ServerSC_H
