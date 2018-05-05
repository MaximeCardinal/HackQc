#include <iostream>
#include <string>

using namespace std;

class Utilisateur {
public:
	Utilisateur(string courriel, string motDePasse, string plaqueImatriculation);
	
	// Getters
	string getCourriel();
	string getMotDePasse();
	string getPlaqueImatriculation();
	int nbDePersonne();
	bool reservation();

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