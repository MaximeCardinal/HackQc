#include "mainwindow.h"
#include "login.h"
#include <QApplication>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "gestionnaireutilisateur.h"

using namespace std;

/*struct Stationnement {
    string nom;
    string adresse;
    string web;
    string horaire;
    string restriction;
};*/
int main(int argc, char *argv[])
{
    /*ifstream fichier("data.txt");
    string donnee="";
    vector<Stationnement> listeStationnement;
    Stationnement stationnement;
    while(!ws(fichier).eof()){
        getline(fichier,donnee,'\n');
        stationnement.nom=donnee;
        getline(fichier,donnee,'\n');
        stationnement.adresse=donnee;
        getline(fichier,donnee,'\n');
        stationnement.web=donnee;
        getline(fichier,donnee,'\n');
        stationnement.horaire=donnee;
        getline(fichier,donnee,'\n');
        stationnement.restriction=donnee;
        listeStationnement.push_back(stationnement);
    }*/
    GestionnaireUtilisateur gestionnaire;
    QApplication a(argc, argv);
    MainWindow z;
    Login w(0,gestionnaire);
    QObject::connect(&z, SIGNAL(showLogin()), &w, SLOT(reOpenLogin()));
    z.show();

    w.show();
    return a.exec();
}

