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
void parse(ifstream& fichier, int& compteur, Stationnement& stationnement, string& donnee);
void ecrireFichier(const vector<Stationnement>& stationnement);
//void afficher(const vector<Stationnement>& stationnement);

int main() {
	ifstream fichier("aires-de-stationnement.csv");
	vector<Stationnement> listeStationnement;
	Stationnement stationnement;
	string donnee;
	string temp;
	int compteur=0;
	char indicateur;
	while (!(fichier).eof()) {
		compteur++;
		fichier.get(indicateur);
		temp = "";
		donnee = "";
		if (indicateur == '"') {
			getline(fichier, donnee, '"');
		}
		else {
			donnee = indicateur;
			getline(fichier, temp, ',');
			donnee += temp;
		}
		if (compteur == 6) {
			listeStationnement.push_back(stationnement);
		}
		parse(fichier, compteur, stationnement, donnee);
	}
	ecrireFichier(listeStationnement);
}
void parse(ifstream& fichier,int& compteur, Stationnement& stationnement,string& donnee) {
	switch (compteur) {
	case 1:
		stationnement.nom = donnee;
		break;
	case 2:
		stationnement.adresse = donnee;
		break;
	case 3:
		stationnement.web = donnee;
		break;
	case 4:
		stationnement.horaire = donnee;
		break;
	case 5:
		stationnement.restriction = donnee;
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
void ecrireFichier(const vector<Stationnement>& stationnement) {
	ofstream ficher("data.txt");
	for (unsigned int i = 0; i < stationnement.size(); i++) {
		ficher << stationnement[i].nom << "\n";
		ficher << stationnement[i].adresse << "\n";
		ficher << stationnement[i].web << "\n";
		ficher << stationnement[i].horaire << "\n";
		ficher << stationnement[i].restriction << "\n";
	}
}

