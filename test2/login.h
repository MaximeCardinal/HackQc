#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "mainwindow.h"
#include "utilisateur.h"
#include "gestionnaireutilisateur.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent,GestionnaireUtilisateur& gestionnaireUtilisateur);
    ~Login();

signals:
    void connectionUtilisateur();

    void creationUtilisateur();

private slots:
    void on_lineEdit_UtilisateurConnexion_textEdited(const QString &arg1);

    void on_pushButton_SeConnecter_clicked();

    void on_pushButton_CreerNouvCompte_clicked();

    void displayLogin();

private:
    Ui::Login *ui;
    GestionnaireUtilisateur& gestionnaireUtilisateur_;
};

#endif // LOGIN_H
