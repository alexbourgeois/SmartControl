#include "MainWindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pB_Stop->setEnabled(false);
    serverSC = new ServerSC();
    connect(serverSC, SIGNAL(connectionEstablished(int)), this, SLOT(connectionState(int)));
    connect(serverSC, SIGNAL(s_debug(QString)), this, SLOT(slot_debug(QString)));
}

MainWindow::~MainWindow() {
    delete ui;
    delete serverSC;
}

void MainWindow::on_pB_Start_clicked() {
    ui->pB_Start->setEnabled(false);
    ui->pB_Stop->setEnabled(true);
    serverSC->StartServer();
    debug("Demarrage du serveur ...");
}

void MainWindow::connectionState(int val) {
    if(val==1)
        debug("Client connected");
    else
        debug("Error creating server");

}

void MainWindow::on_pB_Stop_clicked() {
    serverSC->StopServer();
    ui->lW_devices->clear();
    ui->pB_Start->setEnabled(true);
}

void MainWindow::debug(QString msg) {
    ui->debug_list->addItem(msg);
}

void MainWindow::slot_debug(QString msg) {
    debug(msg);
}
