#include <iostream>
#include <string>
#include "Utilisateur.h"

Utilisateur::Utilisateur(string courriel, string motDePasse, string plaqueImatriculation) : courriel_(courriel), motDePasse_(motDePasse), plaqueImatriculation_(plaqueImatriculation), nbDePersonne_(0), reservation_(false) {}

// Getters
string Utilisateur::getCourriel() {
	return courriel_;
}

string Utilisateur::getMotDePasse() {
	return motDePasse_;
}

string Utilisateur::getPlaqueImatriculation() {
	return plaqueImatriculation_;
}

int Utilisateur::nbDePersonne() {
	return nbDePersonne_;
}

bool Utilisateur::reservation() {
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

void Utilisateur::setNbDePersonne(int nbDePersonne) {
	nbDePersonne_ = nbDePersonne;
}

void Utilisateur::setReservation(bool reservation) {
	reservation_ = reservation;
}