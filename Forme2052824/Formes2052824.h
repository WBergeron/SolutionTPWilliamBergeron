// But : 
// Auteur : William Bergeron
// Date : 2020-10-29


#pragma once




int traiterForme(int choixPara); // Ces fonctions, selon la forme, demandent les dimensions de la forme, affichent
			   // la phrase de présentation de la forme avec les bonnes dimensions et finalement
			   // appellent la fonction dessinant la forme.Il y aura donc 4 versions de cette
			   // fonction traiterRectangle(), traiterCarre(), traiterTriangle(),traiterLosange().
bool dessinerRectangle(bool rectangle); // Fonction qui dessine un rectangle ou un carré dont la hauteur, la largeur et le
					// mode de remplissage sont passés en paramètre.
bool dessinerTriangle1(bool triangle1); // Fonction qui dessine un triangle dans la position 1 dont la hauteur et le mode
					// de remplissage sont passés en paramètre.
bool dessinerTriangle2(bool triangle2); // Fonction qui dessine un triangle dans la position 2 dont la hauteur et le mode
					// de remplissage sont passés en paramètre.
bool dessinerTriangle3(bool triangle3); // Fonction qui dessine un triangle dans la position 3 dont la hauteur et le mode
					// de remplissage sont passés en paramètre.
bool dessinerTriangle4(bool triangle4); // Fonction qui dessine un triangle dans la position 4 dont la hauteur et le mode
					// de remplissage sont passés en paramètre.
bool dessinerLosange(bool losange);   // Fonction qui dessine un losange dont la hauteur et le mode de remplissage sont
					// passés en paramètre.
int genererNombreAleatoire(int random); // Fonction qui retourne un nombre aléatoire compris entre min et max passés en
						 // paramètre.