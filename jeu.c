//
// Created by stephane on 08/01/25.
//
#include "jeu.h"
#include <stdio.h>


//  ***********************************
//  Definitions des fonctions publiques
//  ***********************************


void jeu_maj_carburant_joueur(int joueur_ligne, int joueur_colonne,int *joueur_carburant,int terrain[][10]) {
    // Ajouter le carburant présent sur la case au joueur
    *joueur_carburant += terrain[joueur_ligne][joueur_colonne];

    // Annuler la quantite de carburant sur la case du joueur
    terrain[joueur_ligne][joueur_colonne] = 0;
}

// Definir la fonction 'jeu_deplacer_joueur' ici
bool jeu_deplacer_joueur(int *joueur_ligne, int *joueur_colonne, t_direction direction) {

}


// Definir la fonction 'jeu_init' ici
void jeu_init(int terrain[10][10], int *joueur_ligne, int *joueur_colonne, int *joueur_carburant, int *destination_ligne, int *destination_colonne) {

}

// Definir la fonction 'jeu_afficher_direction' ici
void jeu_afficher_direction(t_direction direction) {
    switch (direction) {
        case DIRECTION_DROITE:
            printf("La direction est : Droite\n");
        break;
        case DIRECTION_BAS:
            printf("La direction est : Bas\n");
        break;
        case DIRECTION_HAUT:
            printf("La direction est : Haut\n");
        break;
        case DIRECTION_GAUCHE:
            printf("La direction est : Gauche\n");
        break;
        case DIRECTION_ERRONEE:
            default:
                printf("Direction invalide.\n");
        break;
    }
}


// Definir la fonction 'jeu_verifier_choix_deplacement' ici
t_direction jeu_verifier_choix_deplacement(const char *choix) {

}

// Definir la fonction 'jeu_calculer_voisin' ici
void jeu_calculer_voisin(int case_ligne, int case_colonne, t_direction direction, int *voisin_ligne, int *voisin_colonne) {

}


// Definir la fonction 'jeu_verifier_fin' ici
t_jeu_etat jeu_verifier_fin(int joueur_ligne, int joueur_colonne, int joueur_carburant, int destination_ligne, int destination_colonne) {

}

