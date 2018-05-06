#include "stationnement.h"

Stationnement::Stationnement(string nom, string adresse, string web) : nom_(nom), adresse_(adresse), web_(web) {}

string Stationnement::getName() {
    return nom_;
}

string Stationnement::getAdresse() {
    return adresse_;
}

string Stationnement::getSite() {
    return web_;
}

vector<Utilisateur*> Stationnement::getNbPersonneALheure(unsigned int i) {
    return horaireReservation_[i];
}

unsigned int Stationnement::getNbPlace() {
    return ndPlaceDisponible_;
}

void Stationnement::setNbPlaceDisponible(unsigned int nbPlace) {
    ndPlaceDisponible_ = nbPlace;
}

void Stationnement::ajouteReservation(unsigned int heure, Utilisateur* utilisateur) {
    if (horaireReservation_[heure].size() < ndPlaceDisponible_) {
        horaireReservation_[heure].push_back(utilisateur);
    }
    else {
        cout << "Il n'y a plus de stationnement disponible a cette heure la." << endl; // Hidden l'option de la box (if nbPlaceComble_ == nbPlaceDisponible, envoi signal)
    }
}

void Stationnement::enleverReservation(unsigned int heure, Utilisateur* utilisateur) {
    for (unsigned int i = 0; i < horaireReservation_[heure].size(); i++) {
        if (horaireReservation_[heure][i] == utilisateur) {
            horaireReservation_[heure].erase(horaireReservation_[heure].begin() + i);
        }
    }
}
