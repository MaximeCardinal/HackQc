#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "reservation.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("D:/QTInterfaceBuilder/Projects/test2/Bandeau_Repentigny.jpg");
    ui->label_repentigny->setPixmap(pix);
    QPixmap pixPub("D:/QTInterfaceBuilder/Projects/test2/HackPub.png");
    ui->label_pub->setPixmap(pixPub);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Deconnexion_clicked() {
    emit showLogin();
}

void MainWindow::on_pushButton_Reservation_clicked()
{
    Reservation reservation;
    reservation.setModal(true);
    reservation.exec();
}
