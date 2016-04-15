#ifndef MainWindow_H
#define MainWindow_H

#include <QMainWindow>
#include "bluetoothserver.h"
#include <QSensor>
#include <QRotationSensor>
#include <QGyroscope>
#include <QAccelerometer>
#include <QAmbientLightSensor>
#include <QTime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void debug(QString msg);

private slots:
    void analyzeMessage(const QString &sender, const QString &message);
    void erreurServeur(QString);
    void clientConnected();
    void checkReadingGyro();

    void on_pushButton_start_clicked();
    void on_pushButton_ok_clicked();


    void on_pushButton_ok_2_clicked();

signals:
    void sendMessage(const QString &message);

private:
    bool readyToSend = false;
    Ui::MainWindow *ui;
    bluetoothServer *server;
    QSensor *sensor;
    QTime *timer;

    double trash;
    int timerVal=0;
};

#endif // MainWindow_H
