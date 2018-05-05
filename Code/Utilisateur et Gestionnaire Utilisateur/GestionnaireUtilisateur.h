#include <iostream>
#include <string>
#include <vector>
#include "Utilisateur.h"

using namespace std;

class GestionnaireUtilisateur {
public:
	GestionnaireUtilisateur() {};
	void ajouterUtilisateur();
	void supprimerUtilisateur(Utilisateur* utilisateur);
	void verificationUtilisateur();
	void modificationCourriel();
	void modificationMotDePasse();
	void faireUneReservation();


private:
	vector<Utilisateur*> banqueUtilisateur_;
};