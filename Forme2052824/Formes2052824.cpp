// But : Selon la forme, demander les dimention de la forme et afficher la phrase de présentation de la forme. Inclure les fonctions qui dessineront les formes.
// Auteur : William Bergeron
// Date : 2020-11-14
// Modif : 2020-11-16
#include "Formes2052824.h"
#include <iostream>
#include "Menus2052824.h"
#include "Lire2052824.h"
using namespace std;

int traiterRectangle(int choixRemplisage)
{
	// Déclaration des variables
	int largeur;
	int hauteur;

	// Demande a l'utilisateur la largeur du rectangle
	cout << "Veuillez entrer la largeur du rectangle : ";
	largeur = lireEntier(); // Vérifier si les caractère entrer ne font pas planter la console
	// Demander à l'utilisateur la hauteur du rectangle
	largeur = maxNombre(largeur); // Vérifier si le nombre est valide
	cout << "Veuillez entrer la hauteur du rectangle : ";
	hauteur = lireEntier(); // Revérifier si les caractère entrer ne font pas planter la console
	
	// Les différente possibiliter des choix de remplisage avec leur phrase respective
	if (choixRemplisage == 1)
	{
		cout << "Voici votre rectangle plein de " << largeur << "x" << hauteur << " : " << endl;
	}
	if (choixRemplisage == 2)
	{
		cout << "Voici votre rectangle vide de " << largeur << "x" << hauteur << " : " << endl;
	}
	dessinerRectangle(hauteur, largeur, choixRemplisage); // Fonction déssinant le rectangle
	cout << endl << endl;
	system("pause"); // Mise sur pause de la console
	system("cls"); // Effacer la console a la fin de la pause lorsque l'utilisateur est prêt pour continuer
	return 0;
}

int traiterCarre(int choixRemplisage)
{
	int largeur;
	int hauteur;
	//  Demande de la largeur du carré
	cout << "Veuillez entrer la largeur du Carré : ";
	largeur = lireEntier(); // Vérifier si les caractère entrer ne font pas planter la console
	largeur = maxNombre(largeur);	// Vérifier si le nombre est valide
	hauteur = largeur; // Vu que dans un carré la largeur et la hauteur son pareil

	// Les différente possibiliter des choix de remplisage avec leur phrase respective
	if (choixRemplisage == 1)
	{
		cout << "Voici votre carré plein de " << largeur << "x" << largeur << " : " << endl;
	}
	if (choixRemplisage == 2)
	{
		cout << "Voici votre carré vide de " << largeur << "x" << largeur << " : " << endl;
	}
	dessinerRectangle(hauteur, largeur, choixRemplisage); // Fonction déssinant le carré
	cout << endl << endl;
	system("pause");// Mise sur pause de la console
	system("cls"); // Effacer la console a la fin de la pause lorsque l'utilisateur est prêt pour continuer
	return 0;
}

int traiterTriangle(int choixRemplisage)
{
	// Déclaration des variables
	int largeur;
	int alea;
	// Demande de la largeur du triangle
	cout << "Veuillez entrer la largeur du Triangle : ";
	largeur = lireEntier(); // Vérifier si les caractère entrer ne font pas planter la console
	largeur = maxNombre(largeur); // Vérifier si le nombre est valide

	// Les différente possibiliter des choix de remplisage avec leur phrase respective
	if (choixRemplisage == 1)
	{
		cout << "Voici votre triangle plein de largeur " << largeur << " : " << endl;
	}
	if (choixRemplisage == 2)
	{
		cout << "Voici votre triangle vide de largeur " << largeur << " : " << endl;
	}
	// Atribution du chiffre générer aléatoirement a la variable alea.
	alea = genererNombreAleatoire(1,4);

	// Switch permettant de déssiner le triangle correspondant au chiffre obtenu de alea
	switch (alea)	
	{
	case 1:
		dessinerTriangle1(largeur, choixRemplisage);
		break;
	case 2:
		dessinerTriangle2(largeur, choixRemplisage);
		break;
	case 3:
		dessinerTriangle3(largeur, choixRemplisage);
		break;
	case 4:
		dessinerTriangle4(largeur, choixRemplisage);
		break;
	default:
		break;
	}

	cout << endl << endl;
	system("pause");// Mise sur pause de la console
	system("cls"); // Effacer la console a la fin de la pause lorsque l'utilisateur est prêt pour continuer
	return 0;
}

int traiterLosange(int choixRemplisage)
{
	// Déclaration de la variable
	int largeur;
	// Demande de la largeur du losange à l'utilisateur
	cout << "Veuillez entrer la largeur du Losange : ";
	largeur = lireEntier(); // Vérifier si les caractère entrer ne font pas planter la console
	largeur = maxNombre(largeur); // Vérifier si le nombre est valide
	largeur = nombreAccepterLosange(largeur); // Vérifier si le nombre est impair

	// Les différente possibiliter des choix de remplisage avec leur phrase respective
	if (choixRemplisage == 1)
	{
		cout << "Voici votre losange plein de " << largeur << " : " << endl;
	}
	if (choixRemplisage == 2)
	{
		cout << "Voici votre losange vide de " << largeur << " : " << endl;
	}
	dessinerLosange(largeur, choixRemplisage); // Fonction déssinant le losange
	cout << endl << endl;
	system("pause");// Mise sur pause de la console
	system("cls"); // Effacer la console a la fin de la pause lorsque l'utilisateur est prêt pour continuer
	return 0;
}

void dessinerRectangle(int hauteur,int largeur,int choixRemplisage)
{
	for (int c = 0; c < hauteur; c++) // Boucle pour la première colone et la dernière
	{
		cout << "*";
		for (int i = 0; i < largeur -2; i++) // Boucle pour les colone entre la première et la dernière
		{
			if (c == 0 || c == hauteur - 1) // Si le compteur de ligne est = à 0 ou = à la dernière
			{
				cout << "*";
			}
			else // Sinon
			{
				if (choixRemplisage == 1) // Selon le choix de remplisage remplire avec les caractères suivant :  ou #
				{
					cout << "#";
				}
				else
				{
					cout << " ";
				}
				
			}
			
		}
		cout << "*";
		cout << endl;
		
	}
	
	return;
}

void dessinerTriangle1(int largeur, int choixRemplisage)
{
	for (int c = 0; c < largeur; c++)
	{
		cout << "*";
		for (int i = 0; i < largeur - 1; i++)
		{
			if (c >= i + 1)
			{
				cout << "*";

			}


		}
		cout << endl;
	}
	return;
}

void dessinerTriangle2(int largeur, int choixRemplisage)
{
	for (int c = 0; c < largeur; c++)
	{
		cout << "*";
		for (int i = 0; i < largeur - 1; i++)
		{
			if (c <= i)
			{
				cout << "*";

			}


		}
		cout << endl;
	}
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
	return rand() % (max - min + 1) + min; // Retourne un nombre aléatoire situer entre en incluant les min et max
}
