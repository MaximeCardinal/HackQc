#ifndef UTILISATEUR_H 
#define UTILISATEUR_H

#include <iostream>
#include <string>

#pragma once

using namespace std;

class Utilisateur {
public:
	Utilisateur(string courriel, string motDePasse, string plaqueImatriculation);
	
	// Getters
	string getCourriel() const;
	string getMotDePasse() const;
	string getPlaqueImatriculation() const;

	// Setters
	void setCourriel(string courriel);
	void setMotDePasse(string mdp);
	void setPlaqueImatriculation(string plaqueImatriculation);

private
	string courriel_;
	string motDePasse_;
	string plaqueImatriculation_;
};

#endif