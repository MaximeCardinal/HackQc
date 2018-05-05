#include <iostream>
#include <string>
#include <vector>
#include "Utilisateur.h"

using namespace std;

class Stationnement {
public:
	// Constructeur
	Stationnement(string nom, string adresse, string web);
	// Getters
	string getName();
	string getAdresse();
	string getSite();
	//Setters
	void setNbPlaceDisponible(unsigned int nbPlace);
	// Methode
	void ajouteReservation(unsigned int heure, Utilisateur* utilisateur);

private:
	string nom_;
	string adresse_;
	string web_;
	vector<Utilisateur*> horaireReservation_[17];
	unsigned int ndPlaceDisponible_;

};