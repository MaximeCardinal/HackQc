#include "gestionnaireutilisateur.h"


using namespace std;
// new page

GestionnaireUtilisateur::GestionnaireUtilisateur() : utilisateurCourant_(nullptr), stationnementCourant_(nullptr)
{
	chargerUtilisateurs();
}

void GestionnaireUtilisateur::chargerUtilisateurs() {
    QFile fichier("bdd.txt");
    if(!fichier.open(QIODevice::ReadOnly)){
        return;
    }
    QTextStream in(&fichier);
    while(!in.atEnd()){
        QString courriel = in.readLine();
        QString motDePasse = in.readLine();
        QString plaque = in.readLine();

        Utilisateur* utilisateur = new Utilisateur(courriel.toStdString(), motDePasse.toStdString(), plaque.toStdString());
        banqueUtilisateur_.push_back(utilisateur);
    }
    fichier.close();
}

// Destructeur
GestionnaireUtilisateur::~GestionnaireUtilisateur() {
    QFile fichier("bdd.txt");
    if(fichier.open(QIODevice::WriteOnly)){
        QTextStream out(&fichier);
        for (int i = banqueUtilisateur_.size() - 1; i >= 0; i--) {
            if (banqueUtilisateur_[i]->getCourriel() != "" && banqueUtilisateur_[i]->getMotDePasse() != "" && banqueUtilisateur_[i]->getPlaqueImatriculation() != "") {
                out << QString::fromStdString(banqueUtilisateur_[i]->getCourriel()) << "\r\n";
                out << QString::fromStdString(banqueUtilisateur_[i]->getMotDePasse()) << "\r\n";
                out << QString::fromStdString(banqueUtilisateur_[i]->getPlaqueImatriculation()) << "\r\n";
            }
            delete banqueUtilisateur_[i];
            banqueUtilisateur_.pop_back();
        }
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
bool GestionnaireUtilisateur::verificationDouble(string courriel) {
    for (unsigned int i = 0; i < banqueUtilisateur_.size(); i++) {
        if (banqueUtilisateur_[i]->getCourriel() == courriel) {
            return false;
        }
    }
    return true;
}

void GestionnaireUtilisateur::ajouterUtilisateur(string courriel, string mdp, string plaque) {
    if(verificationDouble(courriel)){
	Utilisateur* utilisateur = new Utilisateur(courriel, mdp, plaque);
	banqueUtilisateur_.push_back(utilisateur);
    }
}


bool GestionnaireUtilisateur::connectionUtilisateur(string courriel, string mdp) {
	for (unsigned int i = 0; i < banqueUtilisateur_.size(); i++) {
		if (banqueUtilisateur_[i]->getCourriel() == courriel && banqueUtilisateur_[i]->getMotDePasse() == mdp) {
			utilisateurCourant_ = banqueUtilisateur_[i];
            return true;
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


