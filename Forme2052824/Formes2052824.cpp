// But : Selon la forme, demander les dimention de la forme et afficher la phrase de pr�sentation de la forme. Inclure les fonctions qui dessineront les formes.
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
	// D�claration des variables
	int largeur;
	int hauteur;

	// Demande a l'utilisateur la largeur du rectangle
	cout << "Veuillez entrer la largeur du rectangle : ";
	largeur = lireEntier(); // V�rifier si les caract�re entrer ne font pas planter la console
	// Demander � l'utilisateur la hauteur du rectangle
	largeur = maxNombre(largeur); // V�rifier si le nombre est valide
	cout << "Veuillez entrer la hauteur du rectangle : ";
	hauteur = lireEntier(); // Rev�rifier si les caract�re entrer ne font pas planter la console
	
	// Les diff�rente possibiliter des choix de remplisage avec leur phrase respective
	if (choixRemplisage == 1)
	{
		cout << "Voici votre rectangle plein de " << largeur << "x" << hauteur << " : " << endl;
	}
	if (choixRemplisage == 2)
	{
		cout << "Voici votre rectangle vide de " << largeur << "x" << hauteur << " : " << endl;
	}
	dessinerRectangle(hauteur, largeur, choixRemplisage); // Fonction d�ssinant le rectangle
	cout << endl << endl;
	system("pause"); // Mise sur pause de la console
	system("cls"); // Effacer la console a la fin de la pause lorsque l'utilisateur est pr�t pour continuer
	return 0;
}

int traiterCarre(int choixRemplisage)
{
	int largeur;
	int hauteur;
	//  Demande de la largeur du carr�
	cout << "Veuillez entrer la largeur du Carr� : ";
	largeur = lireEntier(); // V�rifier si les caract�re entrer ne font pas planter la console
	largeur = maxNombre(largeur);	// V�rifier si le nombre est valide
	hauteur = largeur; // Vu que dans un carr� la largeur et la hauteur son pareil

	// Les diff�rente possibiliter des choix de remplisage avec leur phrase respective
	if (choixRemplisage == 1)
	{
		cout << "Voici votre carr� plein de " << largeur << "x" << largeur << " : " << endl;
	}
	if (choixRemplisage == 2)
	{
		cout << "Voici votre carr� vide de " << largeur << "x" << largeur << " : " << endl;
	}
	dessinerRectangle(hauteur, largeur, choixRemplisage); // Fonction d�ssinant le carr�
	cout << endl << endl;
	system("pause");// Mise sur pause de la console
	system("cls"); // Effacer la console a la fin de la pause lorsque l'utilisateur est pr�t pour continuer
	return 0;
}

int traiterTriangle(int choixRemplisage)
{
	// D�claration des variables
	int largeur;
	int alea;
	// Demande de la largeur du triangle
	cout << "Veuillez entrer la largeur du Triangle : ";
	largeur = lireEntier(); // V�rifier si les caract�re entrer ne font pas planter la console
	largeur = maxNombre(largeur); // V�rifier si le nombre est valide

	// Les diff�rente possibiliter des choix de remplisage avec leur phrase respective
	if (choixRemplisage == 1)
	{
		cout << "Voici votre triangle plein de largeur " << largeur << " : " << endl;
	}
	if (choixRemplisage == 2)
	{
		cout << "Voici votre triangle vide de largeur " << largeur << " : " << endl;
	}
	// Atribution du chiffre g�n�rer al�atoirement a la variable alea.
	alea = genererNombreAleatoire(1,4);

	// Switch permettant de d�ssiner le triangle correspondant au chiffre obtenu de alea
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
	system("cls"); // Effacer la console a la fin de la pause lorsque l'utilisateur est pr�t pour continuer
	return 0;
}

int traiterLosange(int choixRemplisage)
{
	// D�claration de la variable
	int largeur;
	// Demande de la largeur du losange � l'utilisateur
	cout << "Veuillez entrer la largeur du Losange : ";
	largeur = lireEntier(); // V�rifier si les caract�re entrer ne font pas planter la console
	largeur = maxNombre(largeur); // V�rifier si le nombre est valide
	largeur = nombreAccepterLosange(largeur); // V�rifier si le nombre est impair

	// Les diff�rente possibiliter des choix de remplisage avec leur phrase respective
	if (choixRemplisage == 1)
	{
		cout << "Voici votre losange plein de " << largeur << " : " << endl;
	}
	if (choixRemplisage == 2)
	{
		cout << "Voici votre losange vide de " << largeur << " : " << endl;
	}
	dessinerLosange(largeur, choixRemplisage); // Fonction d�ssinant le losange
	cout << endl << endl;
	system("pause");// Mise sur pause de la console
	system("cls"); // Effacer la console a la fin de la pause lorsque l'utilisateur est pr�t pour continuer
	return 0;
}

void dessinerRectangle(int hauteur,int largeur,int choixRemplisage)
{
	for (int c = 0; c < hauteur; c++) // Boucle pour la premi�re colone et la derni�re
	{
		cout << "*";
		for (int i = 0; i < largeur -2; i++) // Boucle pour les colone entre la premi�re et la derni�re
		{
			if (c == 0 || c == hauteur - 1) // Si le compteur de ligne est = � 0 ou = � la derni�re
			{
				cout << "*";
			}
			else // Sinon
			{
				if (choixRemplisage == 1) // Selon le choix de remplisage remplire avec les caract�res suivant :  ou #
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
	return rand() % (max - min + 1) + min; // Retourne un nombre al�atoire situer entre en incluant les min et max
}
