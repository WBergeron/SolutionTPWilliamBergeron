// Auteur : William Bergeron
// Date : 2020-11-15
// Modif : 2020-11-16
#include "Lire2052824.h"
#include <iostream>
#include <string>
#include "Menus2052824.h"
using namespace std;

int lireEntier()
{
	// D�finition des variables
	string clavier; 

	getline(cin, clavier, '\n');	// Vider le contenu du clavier

	// Boucle v�rifiant si le(s) caract�re entrer est bien un chiffre
	while (!(!clavier.empty() && ((clavier.front() >= '0' && clavier.front() <= '9')
		|| (clavier.length() > 1 && clavier.front() == '-' && clavier.at(1) >= '0' && clavier.at(1) <= '9'))))
	{
		cout << "Erreur : Le caract�re entrer n'est pas valide. Le caract�re doit �tre un chiffre entier."<< endl;
		cout << "Votre choix -->";
		getline(cin, clavier, '\n');
	}

	

	return stoi(clavier);			// Retour � un int de la variable obtenu pour �viter un plantage de console


	return 0;
}

int maxNombre(int largeur)
{
	// D�claration des constantes
	const int maxLargeur = 2047;
	const int minLargeur = 1;

	// Boucle v�rifiant si la largeur entrer ne d�passe pas 2047 qui est le nombre maximale de caract�re qui entre dans une console et 1 pour le minimum de la forme
	while (largeur > maxLargeur || largeur < minLargeur)
	{
		cout << "Erreur : La largeur entrer ne peut pas �tre utiliser." << endl;
		cout << "Veuillez entrer une largeur entre " << maxLargeur << " et " << minLargeur << "." << endl;
		cout << "Votre choix --> ";
		largeur = lireEntier(); // Toujours v�rifier si le(s) caract�re(s) entrer sont valide(s)
	}
	return largeur; // Envoie de la nouvelle valeur de largeur
}

int minNombre(int hauteur)
{
	// D�claration des constantes
	const int minHauteur = 1;

	// Boucle d�finisant le minimum de largeur pour une forme
	while (hauteur < minHauteur)
	{
		cout << "Erreur : La hauteur entrer ne peut pas �tre utiliser." << endl;
		cout << "Veuillez entrer une hauteur minimal de " << minHauteur << "." << endl;
		cout << "Votre choix --> ";
		hauteur = lireEntier(); // Toujours v�rifier si le(s) caract�re(s) entrer sont valide(s)
	}
	return hauteur; // Retour de la nouvelle valeur de hauteur
}

int nombreAccepterLosange(int largeur)
{
	// Boucle v�rifiant si le nombre entrer est bien un nombre impair
	while (!(largeur % 2 == 0))
		
	{
		cout << "Erreur : Le nombre entrer n'est pas impair. Veuillez en entrer un nombre valide." << endl;
		cout << "Votre choix --> ";
		largeur = lireEntier();
	}

	return largeur;	// Retour de la nouvelle valeur de largeur
}
