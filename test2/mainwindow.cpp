#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "reservation.h"
#include <QComboBox>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent, GestionnaireUtilisateur& gestionnaireUtilisateur,
                       vector<Stationnement> listeStationnement) :
    QMainWindow(parent),gestionnaireUtilisateur_(gestionnaireUtilisateur),listeStationnement_(listeStationnement),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("../test2/Bandeau_Repentigny.jpg");
    ui->label_repentigny->setPixmap(pix);
    QPixmap pixPub("../test2/HackPub.png");
    ui->label_pub->setPixmap(pixPub);
    for(int i=0; i<listeStationnement_.size();i++){
        std::cout<<listeStationnement_[i].getName();
        ui->comboBox->addItem(QString::fromStdString(listeStationnement_[i].getName()),i);
    }
    ui->lineEdit_Utilisateur->setText(QString::fromStdString("Non connecté"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Reservation_clicked()
{
    if(gestionnaireUtilisateur_.getUtilisateurCourant()!=NULL){
        Reservation reservation;
        reservation.setModal(true);
        reservation.exec();
    }
}
void MainWindow::setUserCorner(){
    ui->lineEdit_Utilisateur->setText(QString::fromStdString(gestionnaireUtilisateur_.getUtilisateurCourant()->getCourriel()));
}

void MainWindow::on_pushButton_clicked()
{
    //string name = (ui->comboBox->itemData(ui->comboBox->getSelectedIndex())).toString().toStdString();
    string name = (ui->comboBox->currentText()).toStdString();/*.toString()*/
    int index=0;
    for(int i=0; i<listeStationnement_.size();i++){
        if(name==listeStationnement_[i].getName()){
            index = i;
        }
    }
    ui->lineEdit_Adresse->setText(QString::fromStdString(listeStationnement_[index].getAdresse()));
    ui->lineEdit_Horaire->setText(QString::fromStdString(listeStationnement_[index].getHoraire()));
    ui->textEdit_SiteWeb->setText(QString::fromStdString(listeStationnement_[index].getSite()));
    ui->textEdit_Restrictions->setText(QString::fromStdString(listeStationnement_[index].getRestriction()));
    if(gestionnaireUtilisateur_.getUtilisateurCourant()!=NULL){
        ui->lineEdit_Utilisateur->setText(QString::fromStdString(gestionnaireUtilisateur_.getUtilisateurCourant()->getCourriel()));
    }
    //IMAGES
    string file="../test2/";
    file+=name;
    file+=".png";
    QPixmap parc(QString::fromStdString(file));
    ui->label_Appercu->setPixmap(parc);
}

void MainWindow::on_pushButton_2_clicked()
{
    if(gestionnaireUtilisateur_.getUtilisateurCourant()!=NULL){

    }
    else{
        emit(signalConnexion());
    }
}

void MainWindow::on_pushButton_Deconnexion_clicked()
{
    gestionnaireUtilisateur_.setUtilisateurCourant(NULL);
    ui->lineEdit_Utilisateur->setText(QString::fromStdString("Non connecté"));
    emit(signalDeconnexion());
}

void MainWindow::changeUserCourant(){
    if(gestionnaireUtilisateur_.getUtilisateurCourant()!= NULL)
    ui->lineEdit_Utilisateur->setText(QString::fromStdString(gestionnaireUtilisateur_.getUtilisateurCourant()->getCourriel()));
}
