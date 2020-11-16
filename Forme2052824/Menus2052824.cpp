// But : Afficher les Menus et les validers
// Auteur : William Bergeron
// Date : 2020-11-01

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

	/* cout << "Votre choix --> ";
	cin >> menu1; */
	return;
}

void afficherMenu2()
{
	cout << "Veuillez entrer le chiffre corespondant � votre choix de remplissage: " << endl;

	cout << "1.		Forme pleine" << endl;
	cout << "2.		Forme vide" << endl;
	cout << "3.		Retour au menu pr�c�dent" << endl;

	/* cout << "Votre choix --> ";
	cin >> menu2; */
	return;
}

int validerMenu(int choixMenu, int maxt)
{
	//D�claration des variables
	int choix;

	switch (choixMenu)
	{
	case 1:
		afficherMenu1();

		cout << "Votre choix --> ";
		choix = lireEntier();

		while (choix <= 0 || choix > maxt)
		{
			cout << "Erreur : Le chiffre choisi n'est pas compris entre 1 et " << maxt << endl;
			cout << "Votre choix --> ";
			choix = lireEntier();
		}
		break;

	case 2:
		afficherMenu2();

		cout << "Votre choix --> ";
		choix = lireEntier();

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
