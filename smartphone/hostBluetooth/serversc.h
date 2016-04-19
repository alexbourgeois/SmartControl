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

signals:
    void connectionEstablished(int);
    void sendMessage(QString);

    void s_debug(QString);

private slots:
    void clientConnected();
    void clientDisconnected(QString);
    void analyzeMessage(const QString &sender, const QString &message);
    void errorManagement(QString);

private:
    BluetoothServer *server;
    QSensor *sensor;

    int sensorChosen;
};

#endif // ServerSC_H
