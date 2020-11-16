
#include "Lire2052824.h"
#include <iostream>
#include <string>
#include "Menus2052824.h"
using namespace std;

int lireEntier()
{
	string clavier;

	getline(cin, clavier, '\n');	

	while (!(!clavier.empty() && ((clavier.front() >= '0' && clavier.front() <= '9')
		|| (clavier.length() > 1 && clavier.front() == '-' && clavier.at(1) >= '0' && clavier.at(1) <= '9'))))
	{
		cout << "Erreur : Le caractère entrer n'est pas valide. Le caractère doit être un chiffre entier."<< endl;
		cout << "Votre choix --> ";
		//cin >> nombre;
		getline(cin, clavier, '\n');	// getline va permettre de lire et supprimer tout ce qu'il y a dans la mémoire du clavier
	}

	// Quand on sort de la boucle, on est sûr que clavier commence par un chiffre, on peut le convertir

	return stoi(clavier);			


	return 0;
}

int maxNombre(int largeur)
{
	const int maxLargeur = 2047;
	const int minLargeur = 1;

	while (largeur > maxLargeur || largeur < minLargeur)
	{
		cout << "Erreur : La largeur entrer ne peut pas être utiliser." << endl;
		cout << "Veuillez entrer une largeur entre " << maxLargeur << " et " << minLargeur << "." << endl;
		cout << "Votre choix --> ";
		largeur = lireEntier();
	}
	return largeur;
}

int minNombre(int hauteur)
{
	const int minHauteur = 1;

	while (hauteur < minHauteur)
	{
		cout << "Erreur : La hauteur entrer ne peut pas être utiliser." << endl;
		cout << "Veuillez entrer une hauteur minimal de " << minHauteur << "." << endl;
		cout << "Votre choix --> ";
		hauteur = lireEntier();
	}
	return hauteur;
}
