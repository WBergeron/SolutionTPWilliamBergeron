// But : 
// Auteur : William Bergeron
// Date : 2020-10-29


#pragma once




int traiterForme(int choixPara); // Ces fonctions, selon la forme, demandent les dimensions de la forme, affichent
			   // la phrase de pr�sentation de la forme avec les bonnes dimensions et finalement
			   // appellent la fonction dessinant la forme.Il y aura donc 4 versions de cette
			   // fonction traiterRectangle(), traiterCarre(), traiterTriangle(),traiterLosange().
bool dessinerRectangle(bool rectangle); // Fonction qui dessine un rectangle ou un carr� dont la hauteur, la largeur et le
					// mode de remplissage sont pass�s en param�tre.
bool dessinerTriangle1(bool triangle1); // Fonction qui dessine un triangle dans la position 1 dont la hauteur et le mode
					// de remplissage sont pass�s en param�tre.
bool dessinerTriangle2(bool triangle2); // Fonction qui dessine un triangle dans la position 2 dont la hauteur et le mode
					// de remplissage sont pass�s en param�tre.
bool dessinerTriangle3(bool triangle3); // Fonction qui dessine un triangle dans la position 3 dont la hauteur et le mode
					// de remplissage sont pass�s en param�tre.
bool dessinerTriangle4(bool triangle4); // Fonction qui dessine un triangle dans la position 4 dont la hauteur et le mode
					// de remplissage sont pass�s en param�tre.
bool dessinerLosange(bool losange);   // Fonction qui dessine un losange dont la hauteur et le mode de remplissage sont
					// pass�s en param�tre.
int genererNombreAleatoire(int random); // Fonction qui retourne un nombre al�atoire compris entre min et max pass�s en
						 // param�tre.