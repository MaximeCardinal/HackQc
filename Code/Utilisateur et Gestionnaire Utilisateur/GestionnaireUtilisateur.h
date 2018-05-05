#include <iostream>
#include <string>
#include <vector>
#include "Utilisateur.h"

using namespace std;

class GestionnaireUtilisateur {
public:
	GestionnaireUtilisateur() {};
	void ajouterUtilisateur();
	void supprimerUtilisateur();
	bool verificationUtilisateur(string courriel, string mdp);
	void modificationCourriel(string courriel);
	void modificationMotDePasse(string mdp);
	void faireUneReservation();


private:
	Utilisateur* utilisateurCourant_;
	vector<Utilisateur*> banqueUtilisateur_;
};