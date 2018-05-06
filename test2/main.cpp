#include "mainwindow.h"
#include "login.h"
#include <QApplication>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "gestionnaireutilisateur.h"
#include <QFile>
#include <QTextStream>

using namespace std;

int main(int argc, char *argv[])
{
    QFile inputFile("D:/QTInterfaceBuilder/Projects/test2/data.txt");
    vector<Stationnement> listeStationnement;
    if (inputFile.open(QIODevice::ReadOnly))
    {
       QTextStream in(&inputFile);
       while (!in.atEnd())
       {
          string nom = (in.readLine()).toStdString();
          string adresse = (in.readLine()).toStdString();
          string web = (in.readLine()).toStdString();
          string horaire = (in.readLine()).toStdString();
          string restriction = (in.readLine()).toStdString();
          listeStationnement.push_back(Stationnement(nom,adresse,web,horaire,restriction));
       }
       inputFile.close();
    }
    GestionnaireUtilisateur gestionnaire;
    QApplication a(argc, argv);
    MainWindow z(0,gestionnaire,listeStationnement);
    Login w(0,gestionnaire);
    QObject::connect(&z,SIGNAL(signalConnexion()),&w,SLOT(displayLogin()));
    QObject::connect(&z,SIGNAL(signalDeconnexion()),&w,SLOT(displayLogin()));
    QObject::connect(&w,SIGNAL(connectionUtilisateur()),&z,SLOT(changeUserCourant()));
    QObject::connect(&w,SIGNAL(creationUtilisateur()),&z,SLOT(changeUserCourant()));
    z.show();
    //w.show();
    return a.exec();
}

