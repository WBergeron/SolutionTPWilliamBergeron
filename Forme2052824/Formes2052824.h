// But : Fonction formant et traitant les Formes
// Auteur : William Bergeron
// Date : 2020-10-29


#pragma once




// int traiterForme(int choixForme, int choixRemplisage); // Ces fonctions, selon la forme, demandent les dimensions de la forme, affichent
			   // la phrase de présentation de la forme avec les bonnes dimensions et finalement
			   // appellent la fonction dessinant la forme.

int traiterRectangle(int choixRemplisage);	// Fonction traitant le choix de l'utilisateur d'un rectangle
int traiterCarre(int choixRemplisage);		// Fonction traitant le choix de l'utilisateur d'un carré
int traiterTriangle(int choixRemplisage);	// Fonction traitant le choix de l'utilisateur d'un triangle et génération aléatoire d'un des 4 triangles
int traiterLosange(int choixRemplisage);	// Fonction traitant le choix de l'utilisateur d'un losange

void dessinerRectangle(int hauteur,int largeur,int choixRemplisage);	// Fonction qui dessine un rectangle ou un carré dont la hauteur, la largeur et le
																		// mode de remplissage sont passés en paramètre.
void dessinerTriangle1(int largeur, int choixRemplisage);	// Fonction qui dessine un triangle dans la position 1 dont la hauteur et le mode
															// de remplissage sont passés en paramètre.
void dessinerTriangle2(int largeur, int choixRemplisage);	// Fonction qui dessine un triangle dans la position 2 dont la hauteur et le mode
															// de remplissage sont passés en paramètre.
void dessinerTriangle3(int largeur, int choixRemplisage);	// Fonction qui dessine un triangle dans la position 3 dont la hauteur et le mode
															// de remplissage sont passés en paramètre.
void dessinerTriangle4(int largeur, int choixRemplisage);	// Fonction qui dessine un triangle dans la position 4 dont la hauteur et le mode
															// de remplissage sont passés en paramètre.
void dessinerLosange(int largeur, int choixRemplisage);		// Fonction qui dessine un losange dont la hauteur et le mode de remplissage sont
															// passés en paramètre.

int genererNombreAleatoire(int min, int max);	// Fonction qui retourne un nombre aléatoire compris entre min et max passés en
												// paramètre.