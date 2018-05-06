#ifndef GESTIONNAIRE_UTILISATEUR_H 
#define GESTIONNAIRE_UTILISATEUR_H 

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "stationnement.h"
#include <QFile>

#pragma once

using namespace std;

class GestionnaireUtilisateur {
public:
	// Constructeur
	GestionnaireUtilisateur();
	// Destructeur
	~GestionnaireUtilisateur();
	//Setters
	void setUtilisateurCourant(Utilisateur* utilisateur);
	// Getters
	Utilisateur* getUtilisateurCourant();
	// Methode Utilisateur
	void ajouterUtilisateur(string courriel, string mdp, string plaque);
	void chargerUtilisateurs();
	bool connectionUtilisateur(string courriel, string mdp);
	void deconnection();
    bool verificationDouble(string courriel);
    /*void modificationCourriel(string courriel);
    void modificationMotDePasse(string mdp);*/
	// Methode Stationement
	Stationnement* trouverStationnement(string stationnement);
	void faireReservation(unsigned int debut, unsigned int fin);
	void cancelerReservation();
	void modifierReservation(unsigned int debut, unsigned int fin);

private:
	Utilisateur* utilisateurCourant_;
	Stationnement* stationnementCourant_;
	vector<Utilisateur*> banqueUtilisateur_;
	vector <Stationnement*> listeStationnement_;
};

#endif
