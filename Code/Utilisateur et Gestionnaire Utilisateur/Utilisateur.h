#ifndef UTILISATEUR_H 
#define UTILISATEUR_H

#include <iostream>
#include <string>

#pragma once

using namespace std;

class Utilisateur {
public:
	Utilisateur(string courriel, string motDePasse, string plaqueImatriculation,string nbPassager );
	
	// Getters
	string getCourriel() const;
	string getMotDePasse() const;
	string getPlaqueImatriculation() const;
	bool reservation() const;

	// Setters
	void setCourriel(string courriel);
	void setMotDePasse(string mdp);
	void setPlaqueImatriculation(string plaqueImatriculation);
	void setReservation(bool reservation);

private:
	string courriel_;
	string motDePasse_;
	string plaqueImatriculation_;
	string nbPassager_;
	bool reservation_;

};

#endif