#include <iostream>
#include <string>
#include "GestionnaireUtilisateur.h"

using namespace std;

GestionnaireUtilisateur::GestionnaireUtilisateur() {}

// new page
void GestionnaireUtilisateur::ajouterUtilisateur() {
	string courriel;
	string mdp;
	string plaque;
	cout << "Courriel: "; // box widget
	cin >> courriel; 
	cout << "Mot de Passe: "; // box widget
	cin >> mdp;
	cout << "Plaque: "; // box widget
	cin >> plaque;
	banqueUtilisateur_.push_back(new Utilisateur(courriel, mdp, plaque));
}

void GestionnaireUtilisateur::supprimerUtilisateur(Utilisateur* utilisateur){
	bool check;
	cout << "Etes vous sure? "; // pop box
	cin >> check;
	if (check) {
		unsigned int i = 0;
		while (check) {
			if (banqueUtilisateur_[i] == utilisateur) {
				delete utilisateur;
				banqueUtilisateur_.erase(banqueUtilisateur_.begin() + i);
			}
		}
	}
}