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
    string courriel
    delete ui;
}

void Login::on_pushButton_SeConnecter_clicked()
{
   string courriel = (ui->lineEdit_UtilisateurSeConnecter->text()).toStdString();
   string motDePasse = (ui->lineEdit_MotDePasseSeConnecter->text()).toStdString();
   this->hide();
}

void Login::on_pushButton_CreerNouvCompte_clicked()
{
    string courriel = (ui->lineEdit_UtilisateurNouvCompte->text()).toStdString();
    string motDePasse = (ui->lineEdit_MotDePasseNouvCompte->text()).toStdString();
    string plaque = (ui->lineEdit_PlaqueNouvCompte->text()).toStdString();
    gestionnaireUtilisateur_.ajouterUtilisateur(courriel,motDePasse,plaque);
    this->hide();
}

