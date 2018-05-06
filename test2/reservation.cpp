#include "reservation.h"
#include "ui_reservation.h"
#include "mainwindow.h"

Reservation::Reservation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reservation)
{
    ui->setupUi(this);
}

Reservation::~Reservation()
{
    delete ui;
}

void Reservation::on_pushButton_3_clicked()
{
    this->hide();
}
