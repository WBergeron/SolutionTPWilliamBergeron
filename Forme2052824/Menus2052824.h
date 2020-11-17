// But : Fonction affichant les menus et validant les choix de l'utilisateur.
// Auteur : William Bergeron
// Date : 2020-10-29

#pragma once





// Liste des déclarations des fonctions gérant l'affichage et la validation des menus

void afficherMenu1(); // Fonction qui affiche le menu 1
void afficherMenu2(); // Fonction qui affiche le menu 2
int validerMenu(int choixMenu, int maxt); /* Fonction qui lit le choix de l’utilisateur et vérifie que le choix est bien parmi les
				 choix offerts dans le menu, informations passées en paramètre.Cette fonction
				 retourne le choix validé.L’utilisateur peut taper n’importe quoi au clavier, le
				 programme ne part pas en boucle infinie. */
