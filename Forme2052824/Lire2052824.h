// But : Fonction ayant le but de empêcher des bugs d'affichage ou des plantages de la console.
// Auteur : William Bergeron
// Date : 2020-11-14
// Modif : 2020-11-16

#pragma once

int lireEntier(); // Fonction ayant pour but d'empêcher la console de planter lors de rentrer de caractère non accepter.
int maxNombre(int largeur); // Maximum d'affichage pour la console (éviter les bugs d'affichage avec trop de caractère du a une trop grosse largeur)
int minNombre(int hauteur); // Minimum pour la hauteur d'une forme
int nombreAccepterLosange(int largeur); // Nombre accepter pour le losange (doit être impair)