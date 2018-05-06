#include "reservation.h"
#include "ui_reservation.h"
#include "mainwindow.h"
#include <QTableWidget>

Reservation::Reservation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reservation)
{
    ui->setupUi(this);
    int counter =0;
    for(int i=7;i<24;i++){
        ui->comboBox_Debut->addItem(QString::number(i),counter);
        ui->comboBox_Fin->addItem(QString::number(i+1),counter);
        counter++;
        //QString::fromStdString(listeStationnement_[i].getName()),i)
    }
    int counter2 = 0;
    for(int y=1;y<8;y++){
        ui->comboBox_Passagers->addItem(QString::number(y));
        counter++;
    }
}

Reservation::~Reservation()
{
    delete ui;
}

void Reservation::on_pushButton_3_clicked()
{
    this->hide();
}

void Reservation::on_pushButton_clicked()
{
    int heureDebut = std::stoi(ui->comboBox_Debut->currentText().toStdString());
    int heureFin = std::stoi(ui->comboBox_Fin->currentText().toStdString());
    int passagers = std::stoi(ui->comboBox_Passagers->currentText().toStdString());
    if(passagers<3){
        ui->label_avertissement->setText("***Il faut etre au moin trois passagers pour reserver un stationnement.***");
    }
    else if(heureDebut>=heureFin){
        ui->label_avertissement->setText("***L'heure de debut est superieure a l'heure de fin.***");
    }
    else{
        for(int j=0;j<heureFin-heureDebut;j++){
            ui->tableWidget->setItem(1, heureDebut-7+j, new QTableWidgetItem);
            ui->tableWidget->item(1, heureDebut-7+j)->setBackground(Qt::red);
            ui->label_avertissement->setText("");
        }
    }
}
