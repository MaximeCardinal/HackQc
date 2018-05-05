#include <iostream>
#include <string>
#include <vector>
#include "Utilisateur.h"
#include "Stationnement.h"

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
	// Methode Utilisateur
	void ajouterUtilisateur();
	void supprimerUtilisateur();
	bool verificationUtilisateur(string courriel, string mdp);
	void modificationCourriel(string courriel);
	void modificationMotDePasse(string mdp);
	// Methode Stationement
	void setUtilisateurCourant(Utilisateur* utilisateur);
	void faireReservation(unsigned int debut, unsigned int fin);
	void cancelerReservation();
	void modifierReservation(unsigned int debut, unsigned int fin);

private:
	Utilisateur* utilisateurCourant_;
	vector<Utilisateur*> banqueUtilisateur_;
	vector <Stationnement*> listeStationnement_;
};