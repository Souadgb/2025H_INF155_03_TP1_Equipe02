//
// Created by stephane on 09/01/25.
//
#include "interaction.h"
#include <stdio.h>
//  ***********************************
//  Definitions des fonctions publiques
//  ***********************************

// Definir la fonction 'interaction_presenter_jeu' ici
void interaction_presenter_jeu() {
    printf("Bienvenue dans le jeu de déplacement de véhicule !\n");
    printf("Votre objectif est d'atteindre la sortie en gérant votre carburant.\n");
}

// Definir la fonction 'interaction_afficher_options' ici
void interaction_afficher_options(int carburant) {
    printf("\nOptions disponibles :\n");
    printf("1. Se déplacer\n");
    if (carburant >= 10) {
        printf("2. Acheter un bonus de déplacement (10 litres de carburant)\n");
    } else {
        printf("2. Acheter un bonus de déplacement (Option non disponible)\n");
    }
    printf("3. Quitter le jeu\n");
}
// Definir la fonction 'interaction_demander_action' ici
t_action interaction_demander_action(int carburant) {
    int choix;
    printf("Entrez votre choix : ");
    scanf("%d", &choix);
    
    switch (choix) {
        case 1:
            return ACTION_DEPLACER;
        case 2:
            return (carburant >= 10) ? ACTION_ACHETER_BONUS : ACTION_INVALIDE;
        case 3:
            return ACTION_QUITTER;
        default:
            return ACTION_INVALIDE;
    }
}
// Definir la fonction 'interaction_demander_direction_deplacement' ici
t_direction interaction_demander_direction_deplacement() {
    int choix;
    printf("Choisissez une direction (1: Droite, 2: Bas, 3: Haut, 4: Gauche) : ");
    scanf("%d", &choix);
    
    switch (choix) {
        case 1: return DIRECTION_DROITE;
        case 2: return DIRECTION_BAS;
        case 3: return DIRECTION_HAUT;
        case 4: return DIRECTION_GAUCHE;
        default: return DIRECTION_ERRONEE;
    }
}
// Definir la fonction 'interaction_afficher_echec' ici
void interaction_afficher_echec() {
    printf("Vous avez perdu ! Votre carburant est épuisé.\n");
}
// Definir la fonction 'interaction_afficher_victoire' ici
void interaction_afficher_victoire(int carburant) {
    printf("Félicitations ! Vous avez atteint la sortie avec %d litres de carburant restants.\n", carburant);
}
// Definir la fonction 'interaction_verifier_choix_action' ici
t_action interaction_verifier_choix_action(t_action action, int carburant) {
    if (action == ACTION_ACHETER_BONUS && carburant < 10) {
        return ACTION_INVALIDE;
    }
    return action;
}
