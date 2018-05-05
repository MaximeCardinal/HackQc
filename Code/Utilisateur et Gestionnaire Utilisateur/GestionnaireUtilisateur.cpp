#include "GestionnaireUtilisateur.h"


using namespace std;
// new page

GestionnaireUtilisateur::GestionnaireUtilisateur() : utilisateurCourant_(nullptr), stationnementCourant_(nullptr)
{
	chargerUtilisateurs();
}

void GestionnaireUtilisateur::chargerUtilisateurs() {

	ifstream fichier(FILENAME_);
	string courriel, motDePasse, plaque;
	while (!(fichier).eof()) {
		getline(fichier, courriel, '\n');
		getline(fichier, motDePasse, '\n');
		getline(fichier, plaque, '\n');
		Utilisateur* utilisateur = new Utilisateur(courriel, motDePasse, plaque);
		banqueUtilisateur_.push_back(utilisateur);
	}
	fichier.close();
}

// Destructeur
GestionnaireUtilisateur::~GestionnaireUtilisateur() {
	ofstream fichier(FILENAME_);
	for (int i = banqueUtilisateur_.size() - 1; i >= 0; i--) {
		stockerUtilisateur(banqueUtilisateur_[i], fichier);
		delete banqueUtilisateur_[i];
		banqueUtilisateur_.pop_back();
	}
	fichier.close();
}

void GestionnaireUtilisateur::stockerUtilisateur(Utilisateur* utilisateur, ofstream& fichier) {
	if (utilisateur->getCourriel() != "" && utilisateur->getMotDePasse() != "" && utilisateur->getPlaqueImatriculation() != "") {
		fichier << utilisateur->getCourriel() << '\n'
			<< utilisateur->getMotDePasse() << '\n'
			<< utilisateur->getPlaqueImatriculation() << '\n';
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
	Utilisateur* utilisateur = new Utilisateur(courriel, mdp, plaque);
	banqueUtilisateur_.push_back(utilisateur);
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


