#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gestionnaireutilisateur.h"
#include "login.h"
#include <vector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent, GestionnaireUtilisateur& gestionnaireUtilisateur,
                        vector<Stationnement> listeStationnement);
    ~MainWindow();
    void setUserCorner();

signals:
    void signalConnexion();
    void signalDeconnexion();

private slots:
    void on_pushButton_Reservation_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_Deconnexion_clicked();

    void changeUserCourant();

private:
    Ui::MainWindow *ui;
    GestionnaireUtilisateur& gestionnaireUtilisateur_;
    vector<Stationnement> listeStationnement_;
};

#endif // MAINWINDOW_H
