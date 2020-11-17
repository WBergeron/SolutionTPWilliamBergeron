// But : Fonction ayant le but de emp�cher des bugs d'affichage ou des plantages de la console.
// Auteur : William Bergeron
// Date : 2020-11-14
// Modif : 2020-11-16

#pragma once

int lireEntier(); // Fonction ayant pour but d'emp�cher la console de planter lors de rentrer de caract�re non accepter.
int maxNombre(int largeur); // Maximum d'affichage pour la console (�viter les bugs d'affichage avec trop de caract�re du a une trop grosse largeur)
int minNombre(int hauteur); // Minimum pour la hauteur d'une forme
int nombreAccepterLosange(int largeur); // Nombre accepter pour le losange (doit �tre impair)