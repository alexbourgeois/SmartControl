#ifndef MainWindow_H
#define MainWindow_H

#include <QMainWindow>
#include <QSensor>
#include <QRotationSensor>
#include <QGyroscope>
#include <QAccelerometer>
#include <QAmbientLightSensor>
#include <QTime>

#include "serversc.h"

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
    void connectionState(int);
    void on_pB_Start_clicked();
    void on_pB_Stop_clicked();

signals:
    void sendMessage(const QString &message);

private:
    Ui::MainWindow *ui;
    ServerSC *serverSC;
};

#endif // MainWindow_H
