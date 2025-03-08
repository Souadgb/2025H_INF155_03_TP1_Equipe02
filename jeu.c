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

/**
 * @brief Deplace le joueur dans une dircetion donnee.
 * @name jeu_deplacer_joueur
 * @param joueur_ligne l'adresse de la ligne ou se trouve le joueur avant le deplacement et qui sera mise a jour
 * @param joueur_colonne l'adresse de la colonne ou se trouve le joueur avant le deplacement et qui sera mise a jour
 * @param direction la direction dans laquelle on veut deplacer le joueur
 * @return true si le deplacement a pu se faire dans les lilmites du terrain, false sinon
 */
// Definir la fonction 'jeu_deplacer_joueur' ici
bool jeu_deplacer_joueur(int *joueur_ligne, int *joueur_colonne, t_direction direction) {
    // Sauvegarde des anciennes coordonnées
    int nouvelle_ligne= *joueur_ligne;
    int nouvelle_colonne= *joueur_colonne;

    // Application du deplacement en fonction de la direction
    switch (direction) {
        case DIRECTION_HAUT:
            nouvelle_ligne--;
        break;
        case DIRECTION_BAS:
            nouvelle_ligne++;
        break;
        case DIRECTION_GAUCHE:
            nouvelle_colonne--;
        break;
        case DIRECTION_DROITE:
            nouvelle_colonne++;
        break;
        default:
            return false; // Direction invalide
    }
    // Vérifier si le déplacement reste dans les limites du terrain (10x10)
    if (nouvelle_ligne>=0 && nouvelle_ligne<10 && nouvelle_colonne>=0 && nouvelle_colonne<10) {
        // Mettre à jour les coordonnées du joueur (deplacer le joueur)
        *joueur_ligne = nouvelle_ligne;
        *joueur_colonne = nouvelle_colonne;
        return true;
    }
    return false; // Déplacement hors limites du terrain
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

