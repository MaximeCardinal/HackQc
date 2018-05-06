#include "utilisateur.h"

Utilisateur::Utilisateur(string courriel, string motDePasse, string plaqueImatriculation) : courriel_(courriel), motDePasse_(motDePasse), plaqueImatriculation_(plaqueImatriculation) {}

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
