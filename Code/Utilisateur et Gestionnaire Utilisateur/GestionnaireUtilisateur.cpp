#include "GestionnaireUtilisateur.h"

using namespace std;
// new page
GestionnaireUtilisateur::GestionnaireUtilisateur() : utilisateurCourant_(nullptr) {}

// Destructeur
GestionnaireUtilisateur::~GestionnaireUtilisateur() {
	for (unsigned int i = 0; i < banqueUtilisateur_.size(); i++) {
		utilisateurCourant_ = banqueUtilisateur_[i];
		supprimerUtilisateur();
	}
}

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

void GestionnaireUtilisateur::supprimerUtilisateur(){
	bool check;
	cout << "Etes vous sure? "; // pop box
	cin >> check;
	if (check) {
		unsigned int i = 0;
		while (check) {
			if (banqueUtilisateur_[i] == utilisateurCourant_) {
				delete utilisateurCourant_;
				banqueUtilisateur_.erase(banqueUtilisateur_.begin() + i);
			}
		}
	}
}

bool GestionnaireUtilisateur::verificationUtilisateur(string courriel, string mdp) {
	for (unsigned int i = 0; i < banqueUtilisateur_.size(); i++) {
		if (banqueUtilisateur_[i]->getCourriel() == courriel && banqueUtilisateur_[i]->getMotDePasse() == mdp) {
			utilisateurCourant_ = banqueUtilisateur_[i];
			return true;
		}
	}
	return false;
}

void GestionnaireUtilisateur::modificationCourriel(string courriel) {
	utilisateurCourant_->setCourriel(courriel);
}

void GestionnaireUtilisateur::modificationMotDePasse(string mdp) {
	utilisateurCourant_->setCourriel(mdp);
}
