// But : Afficher les Menus et les validers
// Auteur : William Bergeron
// Date : 2020-11-01
// Modif : 2020-11-15
#include "Menus2052824.h"
#include <iostream>
#include <string>
#include "Lire2052824.h"
using namespace std;

void afficherMenu1()
{
	// Message de bienvenue et demande
    cout << "Bonjour et bienvenue sur le programme Formo-g�o! Ce programme � comme but d'afficher des formes g�om�triques plein ou vide." << endl;
    cout << "Veuillez entrer le chiffre corespondant � votre choix de forme: " << endl;

	cout << "1.		Rectangle" << endl;
	cout << "2.		Triangle" << endl;
	cout << "3.		Carr�" << endl;
	cout << "4.		Losange" << endl;
	cout << "5.		Quitter" << endl;

	return;
}

void afficherMenu2()
{
	cout << "Veuillez entrer le chiffre corespondant � votre choix de remplissage: " << endl;

	cout << "1.		Forme pleine" << endl;
	cout << "2.		Forme vide" << endl;
	cout << "3.		Retour au menu pr�c�dent" << endl;

	return;
}

int validerMenu(int choixMenu, int maxt)
{
	//D�claration des variables
	int choix;

	// Switch variant du choixMenu du main pour alterer entre les deux menus
	switch (choixMenu)
	{
	case 1:
		afficherMenu1(); // Aficher le premier menu

		// Demande du choix de l'utilisateur
		cout << "Votre choix --> ";
		choix = lireEntier(); // V�rification si il n'y a pas de caract�re qui ferait planter la console

		// Boucle v�rifiant la validiter du nombre
		while (choix <= 0 || choix > maxt)
		{
			cout << "Erreur : Le chiffre choisi n'est pas compris entre 1 et " << maxt << endl;
			cout << "Votre choix --> ";
			choix = lireEntier();
		}
		break;

	case 2:
		afficherMenu2(); // Afficher le deuxi�me menu

		// Demande du choix de l'utilisateur
		cout << "Votre choix --> ";
		choix = lireEntier(); // V�rification si il n'y a pas de caract�re qui ferait planter la console

		// Boucle v�rifiant la validiter du nombre
		while (choix <= 0 || choix > maxt)
		{
			cout << "Erreur : Le chiffre choisi n'est pas compris entre 1 et " << maxt << endl;
			cout << "Votre choix --> ";
			choix = lireEntier();
		}
		break;

	default:
		cout << "Erreur de programme. Veuillez fermer le programme et r�essayer.";
		choix = 0;
		break;
	}

	return choix;
}
