// But : 
// Auteur : William Bergeron
// Date : 2020-10-29

#pragma once





// Liste des d�clarations des fonctions g�rant l'affichage et la validation des menus

int afficherMenu1(int menu1); // Fonction qui affiche le menu 1
int afficherMenu2(int menu2); // Fonction qui affiche le menu 2
int validerMenu(int choixMenu, int maxt); /* Fonction qui lit le choix de l�utilisateur et v�rifie que le choix est bien parmi les
				 choix offerts dans le menu, informations pass�es en param�tre.Cette fonction
				 retourne le choix valid�.L�utilisateur peut taper n�importe quoi au clavier, le
				 programme ne part pas en boucle infinie. */
