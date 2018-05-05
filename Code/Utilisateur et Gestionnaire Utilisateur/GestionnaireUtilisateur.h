#include <iostream>
#include <string>
#include <vector>
#include "Utilisateur.h"

using namespace std;

class GestionnaireUtilisateur {
public:
	// Constructeur
	GestionnaireUtilisateur();
	// Destructeur
	~GestionnaireUtilisateur();
	// Methode
	void ajouterUtilisateur();
	void supprimerUtilisateur();
	bool verificationUtilisateur(string courriel, string mdp);
	void modificationCourriel(string courriel);
	void modificationMotDePasse(string mdp);

private:
	Utilisateur* utilisateurCourant_;
	vector<Utilisateur*> banqueUtilisateur_;
};