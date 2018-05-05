#ifndef GESTIONNAIRE_UTILISATEUR_H 
#define GESTIONNAIRE_UTILISATEUR_H 

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Stationnement.h"
#include "Utilisateur.h"

#pragma once

using namespace std;

const string FILENAME_ = "BDD_UTILISATEUR.txt";

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
	void stockerUtilisateur(Utilisateur* utilisateur, ofstream& fichier);

	bool verificationCourrielUnique(string courriel);
	bool connectionUtilisateur(string courriel, string mdp);
	void deconnection();
	void modificationCourriel(string courriel);
	void modificationMotDePasse(string mdp);
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