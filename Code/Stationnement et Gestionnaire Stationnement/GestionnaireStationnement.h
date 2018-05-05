#include <iostream>
#include <string>
#include <vector>
#include "Stationnement.h"
#include "Utilisateur.h"

using namespace std;

class GestionnaireStationnement {
public:
	GestionnaireStationnement(Utilisateur* utilisateurCourant);



private:
	Utilisateur* utilisateurCourant_;
	vector <Stationnement*> listeStationnement_;

};