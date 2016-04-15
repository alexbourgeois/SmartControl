#ifndef MainWindow_H
#define MainWindow_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QBluetoothHostInfo>
#include <QBluetoothServiceDiscoveryAgent>
#include "bluetoothclient.h" //A suppr
#include "clientsc.h"
#include "frame3d.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void connectionState(int);
    void readValues(int, float, float, float);

    void on_pB_Connect_clicked();
    void on_pB_Stop_clicked();
    void on_pB_Ask_clicked();
    void on_rB_Rotation_toggled(bool checked);
    void on_rB_Gyroscope_toggled(bool checked);
    void on_rB_Accelerometer_toggled(bool checked);

signals:
    void rotate(float x, float y, float z);

private:
    Ui::MainWindow *ui;
    Frame3D *frame3D;
    ClientSC *client;

    int sensorChosen;
};

#endif // MainWindow_H
