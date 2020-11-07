// But : Afficher le premier menu
// Auteur : William Bergeron
// Date : 2020-11-01

#include "Menus2052824.h"
#include <iostream>
using namespace std;

int afficherMenu1(int menu1)
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

    return 0;
}

int afficherMenu2(int menu2)
{
	cout << "Veuillez entrer le chiffre corespondant � votre choix de remplissage: " << endl;

	cout << "1.		Forme pleine" << endl;
	cout << "2.		Forme vide" << endl;
	cout << "3.		Retour au menu pr�c�dent" << endl;

	/* cout << "Votre choix --> ";
	cin >> menu2; */

	return 0;
}

int validerMenu(int choixMenu, int maxt)
{
	//D�claration des variables
	int choix;

	switch (choixMenu)
	{
	case 1:
		cout << afficherMenu1;

		cout << "Votre choix --> ";
		cin >> choix;

		 if (choix <= 0 || choix > maxt)
		{
			cout << "Erreur : Le caracht�re entrer n'est pas valide. Veuillez en entrer un nouveau : ";
			cin >> choix;
		}
		break;

	case 2:
		cout << afficherMenu2;

		cout << "Votre choix --> ";
		cin >> choix;

		if (choix <= 0 || choix > maxt)
		{
			cout << "Erreur : Le caracht�re entrer n'est pas valide. Veuillez en entrer un nouveau : ";
			cin >> choix;
		}
		break;

	default:
		cout << "Erreur de programme. Veuillez fermer le programme et r�essayer.";
		break;
	}

	return choix;
}
