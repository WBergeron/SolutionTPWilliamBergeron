// But : Fonction formant et traitant les Formes
// Auteur : William Bergeron
// Date : 2020-10-29


#pragma once




// int traiterForme(int choixForme, int choixRemplisage); // Ces fonctions, selon la forme, demandent les dimensions de la forme, affichent
			   // la phrase de pr�sentation de la forme avec les bonnes dimensions et finalement
			   // appellent la fonction dessinant la forme.

int traiterRectangle(int choixRemplisage);	// Fonction traitant le choix de l'utilisateur d'un rectangle
int traiterCarre(int choixRemplisage);		// Fonction traitant le choix de l'utilisateur d'un carr�
int traiterTriangle(int choixRemplisage);	// Fonction traitant le choix de l'utilisateur d'un triangle et g�n�ration al�atoire d'un des 4 triangles
int traiterLosange(int choixRemplisage);	// Fonction traitant le choix de l'utilisateur d'un losange

void dessinerRectangle(int hauteur,int largeur,int choixRemplisage);	// Fonction qui dessine un rectangle ou un carr� dont la hauteur, la largeur et le
																		// mode de remplissage sont pass�s en param�tre.
void dessinerTriangle1(int largeur, int choixRemplisage);	// Fonction qui dessine un triangle dans la position 1 dont la hauteur et le mode
															// de remplissage sont pass�s en param�tre.
void dessinerTriangle2(int largeur, int choixRemplisage);	// Fonction qui dessine un triangle dans la position 2 dont la hauteur et le mode
															// de remplissage sont pass�s en param�tre.
void dessinerTriangle3(int largeur, int choixRemplisage);	// Fonction qui dessine un triangle dans la position 3 dont la hauteur et le mode
															// de remplissage sont pass�s en param�tre.
void dessinerTriangle4(int largeur, int choixRemplisage);	// Fonction qui dessine un triangle dans la position 4 dont la hauteur et le mode
															// de remplissage sont pass�s en param�tre.
void dessinerLosange(int largeur, int choixRemplisage);		// Fonction qui dessine un losange dont la hauteur et le mode de remplissage sont
															// pass�s en param�tre.

int genererNombreAleatoire(int min, int max);	// Fonction qui retourne un nombre al�atoire compris entre min et max pass�s en
												// param�tre.