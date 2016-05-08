#ifndef ServerSC_H
#define ServerSC_H

#include <QSensor>
#include <QRotationSensor>
#include <QGyroscope>
#include <QAccelerometer>
#include <QList>

#include "bluetoothserver.h"

class ServerSC : public QObject
{
    Q_OBJECT

public:
    ServerSC();
    /**
     * @brief Demarrer le serveur
     */
    void StartServer();

    /**
     * @brief Stopper le serveur
     */
    void StopServer();

signals:
    /**
     * @brief Signal emitted to
     */
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
    QList<int> *sensors;
};

#endif // ServerSC_H
