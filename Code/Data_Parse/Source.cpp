#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Stationnement {
	string nom;
	string adresse;
	string web;
	string horaire;
	string restriction;
};
void parse(ifstream& fichier, int& compteur, Stationnement& stationnement, string& donne);
//void afficher(const vector<Stationnement>& stationnement);
int main() {
	ifstream fichier("aires-de-stationnement.csv");
	vector<Stationnement> listeStationnement;
	Stationnement stationnement;
	string donne;
	string temp;
	int compteur=0;
	char indicateur;
	while (!(fichier).eof()) {
		compteur++;
		fichier.get(indicateur);
		temp = "";
		donne = "";
		if (indicateur == '"') {
			getline(fichier, donne, '"');
		}
		else {
			donne = indicateur;
			getline(fichier, temp, ',');
			donne += temp;
		}
		if (compteur == 6) {
			listeStationnement.push_back(stationnement);
		}
		parse(fichier, compteur, stationnement, donne);
	}
}
void parse(ifstream& fichier,int& compteur, Stationnement& stationnement,string& donne) {
	switch (compteur) {
	case 1:
		stationnement.nom = donne;
		break;
	case 2:
		stationnement.adresse = donne;
		break;
	case 3:
		stationnement.web = donne;
		break;
	case 4:
		stationnement.horaire = donne;
		break;
	case 5:
		stationnement.restriction = donne;
		break;
	case 10:
		compteur = 0;
		break;
	}
}
/*void afficher(const vector<Stationnement>& stationnement) {
	for (unsigned int i = 0; i < stationnement.size(); i++) {
		cout <<"nom: " <<stationnement[i].nom << endl;
		cout <<"adresse: " <<stationnement[i].adresse << endl;
		cout <<"horaire: " <<stationnement[i].horaire << endl;
		cout <<"restriction: " <<stationnement[i].restriction << endl;
		cout <<"web: " <<stationnement[i].web << endl<<endl;
	}
}*/