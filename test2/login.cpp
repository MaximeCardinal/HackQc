#include "login.h"
#include "ui_login.h"


Login::Login(QWidget *parent,GestionnaireUtilisateur& gestionnaireUtilisateur) :
    QDialog(parent),gestionnaireUtilisateur_(gestionnaireUtilisateur),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_SeConnecter_clicked()
{
    string courriel = (ui->lineEdit_UtilisateurConnexion->text()).toStdString();
    string motDePasse = (ui->lineEdit_MotDePasseConnexion->text()).toStdString();
    bool check = gestionnaireUtilisateur_.connectionUtilisateur(courriel,motDePasse);
    if(check){
        this->hide();
        emit(connectionUtilisateur());
    }
    else{
        //
    }
}

void Login::on_pushButton_CreerNouvCompte_clicked()
{
    string courriel = (ui->lineEdit_UtilisateurNouvCompte->text()).toStdString();
    string motDePasse = (ui->lineEdit_MotDePasseNouvCompte->text()).toStdString();
    string plaque = (ui->lineEdit_PlaqueNouvCompte->text()).toStdString();
    if(gestionnaireUtilisateur_.verificationDouble(courriel)){
        gestionnaireUtilisateur_.ajouterUtilisateur(courriel,motDePasse,plaque);
        this->hide();
       emit(creationUtilisateur());
    }
}

void Login:: displayLogin()
{
    this->show();
}
