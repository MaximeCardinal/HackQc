#include "Utilisateur.h"

Utilisateur::Utilisateur(string courriel, string motDePasse, string plaqueImatriculation,string nbPassager) 
	: courriel_(courriel), motDePasse_(motDePasse), 
	plaqueImatriculation_(plaqueImatriculation),
	nbPassager_(nbPassager), reservation_(false)
{}

// Getters
string Utilisateur::getCourriel() const {
	return courriel_;
}

string Utilisateur::getMotDePasse() const {
	return motDePasse_;
}

string Utilisateur::getPlaqueImatriculation() const {
	return plaqueImatriculation_;
}


bool Utilisateur::reservation() const {
	return reservation_;
}

// Setters
void Utilisateur::setCourriel(string courriel) {
	courriel_ = courriel;
}

void Utilisateur::setMotDePasse(string mdp) {
	motDePasse_ = mdp;
}

void Utilisateur::setPlaqueImatriculation(string plaqueImatriculation) {
	plaqueImatriculation_ = plaqueImatriculation;
}


void Utilisateur::setReservation(bool reservation) {
	reservation_ = reservation;
}