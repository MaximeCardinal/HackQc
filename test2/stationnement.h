#ifndef STATIONNEMENT_H
#define STATIONNEMENT_H


#include <iostream>
#include <string>
#include <vector>
#include "utilisateur.h"

#pragma once

using namespace std;

class Stationnement {
public:
    // Constructeur
    Stationnement(string nom, string adresse, string web,string horaire, string restriction_);
    // Getters
    string getName();
    string getAdresse();
    string getSite();
    string getHoraire();
    string getRestriction();
    vector<Utilisateur*> getNbPersonneALheure(unsigned int i);	//Obtenir l
    unsigned int getNbPlace();
    //Setters
    void setNbPlaceDisponible(unsigned int nbPlace);
    // Methode
    void ajouteReservation(unsigned int heure, Utilisateur* utilisateur);
    void enleverReservation(unsigned int heure, Utilisateur* utilisateur);

private:
    string nom_;
    string adresse_;
    string web_;
    string horaire_;
    string restriction_;
    vector<Utilisateur*> horaireReservation_[17];
    unsigned int ndPlaceDisponible_;

};

#endif
