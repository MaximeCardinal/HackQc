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
	int nbDePersonne() const;
	bool reservation() const;

	// Setters
	void setCourriel(string courriel);
	void setMotDePasse(string mdp);
	void setPlaqueImatriculation(string plaqueImatriculation);
	void setNbDePersonne(int nbDePersonne);
	void setReservation(bool reservation);

private:
	string courriel_;
	string motDePasse_;
	string plaqueImatriculation_;
	int nbDePersonne_;
	bool reservation_;

};