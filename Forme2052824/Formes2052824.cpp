// But : Selon la forme, demander les dimention de la forme et afficher la phrase de présentation de la forme. Inclure les fonctions qui dessineront les formes.
// Auteur : William Bergeron
// Date : 2020-11-14
#include "Formes2052824.h"
#include <iostream>
#include "Menus2052824.h"
#include "Lire2052824.h"
using namespace std;

int traiterRectangle(int choixRemplisage)
{
	int largeur;
	int hauteur;
	cout << "Veuillez entrer la largeur du Rectangle : ";
	largeur = lireEntier();
	largeur = maxNombre(largeur);
	cout << "Veuillez entrer la hauteur du Rectangle : ";
	hauteur = lireEntier();
	

	if (choixRemplisage == 1)
	{
		cout << "Voici votre rectangle plein de " << largeur << "x" << hauteur << " : " << endl;
	}
	if (choixRemplisage == 2)
	{
		cout << "Voici votre rectangle vide de " << largeur << "x" << hauteur << " : " << endl;
	}
	dessinerRectangle(hauteur, largeur, choixRemplisage);
	cout << endl << endl;
	system("pause");
	system("cls");
	return 0;
}

int traiterCarre(int choixRemplisage)
{
	int largeur;
	int hauteur;
	cout << "Veuillez entrer la largeur du Carré : ";
	largeur = lireEntier();
	largeur = maxNombre(largeur);
	hauteur = largeur;

	if (choixRemplisage == 1)
	{
		cout << "Voici votre carré plein de " << largeur << "x" << largeur << " : " << endl;
	}
	if (choixRemplisage == 2)
	{
		cout << "Voici votre carré vide de " << largeur << "x" << largeur << " : " << endl;
	}
	dessinerRectangle(hauteur, largeur, choixRemplisage);
	cout << endl << endl;
	system("pause");
	system("cls");
	return 0;
}

int traiterTriangle(int choixRemplisage)
{
	int largeur;
	int alea;
	cout << "Veuillez entrer la largeur du Triangle : ";
	largeur = lireEntier();
	largeur = maxNombre(largeur);

	if (choixRemplisage == 1)
	{
		cout << "Voici votre triangle plein de largeur " << largeur << " : " << endl;
	}
	if (choixRemplisage == 2)
	{
		cout << "Voici votre triangle vide de largeur " << largeur << " : " << endl;
	}
	alea = genererNombreAleatoire(1,4);

	switch (alea)
	{
		case
	default:
		break;
	}

	dessinerTriangle1(largeur, choixRemplisage);
	cout << endl << endl;
	system("pause");
	system("cls");
	return 0;
}

int traiterLosange(int choixRemplisage)
{
	return 0;
}

void dessinerRectangle(int hauteur,int largeur,int choixRemplisage)
{
	for (int i = 0; i < hauteur; i++)
	{
		for (int i = 0; i < largeur; i++)
		{	
			cout << "*";
		}
		cout << endl;
	}
	
	return;
}

void dessinerTriangle1(int largeur,int choixRemplisage)
{
	return;
}

void dessinerTriangle2(int largeur, int choixRemplisage)
{
	return;
}

void dessinerTriangle3(int largeur, int choixRemplisage)
{
	return;
}

void dessinerTriangle4(int largeur, int choixRemplisage)
{
	return;
}

void dessinerLosange(int largeur, int choixRemplisage)
{
	return;
}

int genererNombreAleatoire(int min, int max)
{
	return rand() % (max - min + 1) + min;
}
