#include "GestionnaireUtilisateur.h"

using namespace std;
// new page
GestionnaireUtilisateur::GestionnaireUtilisateur() : utilisateurCourant_(nullptr), stationnementCourant_(nullptr) {}

// Destructeur
GestionnaireUtilisateur::~GestionnaireUtilisateur() {
	for (unsigned int i = 0; i < banqueUtilisateur_.size(); i++) {
		utilisateurCourant_ = banqueUtilisateur_[i];
		supprimerUtilisateur();
	}
}

// Setters
void GestionnaireUtilisateur::setUtilisateurCourant(Utilisateur* utilisateur) {
	utilisateurCourant_ = utilisateur;
}

// Getters
Utilisateur* GestionnaireUtilisateur::getUtilisateurCourant() {
	return utilisateurCourant_;
}



// Methode Utilisateur
void GestionnaireUtilisateur::ajouterUtilisateur(string courriel, string mdp, string plaque) {
	banqueUtilisateur_.push_back(new Utilisateur(courriel, mdp, plaque));
}

void GestionnaireUtilisateur::supprimerUtilisateur(){
	bool check = true;
	unsigned int i = 0;
	while (check) {
		if (banqueUtilisateur_[i] == utilisateurCourant_) {
			delete utilisateurCourant_;
			banqueUtilisateur_.erase(banqueUtilisateur_.begin() + i);
		}
	}
}

bool GestionnaireUtilisateur::connectionUtilisateur(string courriel, string mdp) {
	for (unsigned int i = 0; i < banqueUtilisateur_.size(); i++) {
		if (banqueUtilisateur_[i]->getCourriel() == courriel && banqueUtilisateur_[i]->getMotDePasse() == mdp) {
			utilisateurCourant_ = banqueUtilisateur_[i];
			return true;	//Signal connection
		}
	}
	return false;
}

void GestionnaireUtilisateur::deconnection() {
	utilisateurCourant_ = nullptr;
	// return page de connection
}

void GestionnaireUtilisateur::modificationCourriel(string courriel) {
	utilisateurCourant_->setCourriel(courriel);
}

void GestionnaireUtilisateur::modificationMotDePasse(string mdp) {
	utilisateurCourant_->setCourriel(mdp);
}

// Methode Stationnement
Stationnement* GestionnaireUtilisateur::trouverStationnement(string stationnement) {
	for (unsigned int i = 0; i < listeStationnement_.size(); i++) {
		if (listeStationnement_[i]->getName() == stationnement) {
			return listeStationnement_[i];
		}
	}
	return nullptr;
}

void GestionnaireUtilisateur::cancelerReservation() {
	for (unsigned int i = 0; i < 17; i++) {
		stationnementCourant_->enleverReservation(i, utilisateurCourant_);
	}
	stationnementCourant_ = nullptr;
}

void GestionnaireUtilisateur::faireReservation(unsigned int debut, unsigned int fin) {
	int nbPersonne;
	string stationnement;
	cout << "Combien serez-vous?"; // textbox
	cin >> nbPersonne;
	if (nbPersonne >= 2) {
		cout << "Veuiller choisir un parc: "; // scrollbox parc
		cin >> stationnement;
		stationnementCourant_ = trouverStationnement(stationnement);
		for (unsigned int i = (debut - 7); i < (fin - 7); i++) {
			if (stationnementCourant_->getNbPersonneALheure(i).size() < stationnementCourant_->getNbPlace()) {
				stationnementCourant_->ajouteReservation(i, utilisateurCourant_);
			}
			else {
				cancelerReservation();
				break;
			}
		}
	}
}

void GestionnaireUtilisateur::modifierReservation(unsigned int debut, unsigned int fin) {
	cancelerReservation();
	faireReservation(debut, fin);
}
