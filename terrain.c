//
// Created by stephane on 08/01/25.
//
#include "terrain.h"
#include "util.h"
#include <stdio.h>
#include <stdbool.h>

//  ***********************************
//  Definitions des fonctions publiques
//  ***********************************
// Definir la fonction 'terrain_generer_position_sortie' ici
void terrain_generer_position_sortie(int *sortie_ligne, int *sortie_colonne){
*sortie_ligne = util_generer_nombre_aleatoire (0,NB_LIGNES-1);
*sortie_colonne = util_generer_nombre_aleatoire(0, NB_COLONNES-1);
}
// Definir la fonction 'terrain_generer_position_depart' ici
// boucle garanti distance minimale de 10
void terrain_generer_position_depart(int destination_ligne, int destination_colonne, int *depart_ligne, int *depart_colonne){
 do{
  *depart_ligne = util_generer_nombre_aleatoire(0, NB_LIGNES-1);
  *depart_colonne = util_generer_nombre_aleatoire(0,NB_COLONNES-1);
 } while(abs(*depart_ligne - destination_ligne) + abs(*depart_colonne - destination_colonne) <= 10);
}
// Definir la fonction 'terrain_contient' ici
// verifie que position est dans limites du terrain
bool terrain_contient(int position_ligne, int position_colonne) {
 return position_ligne >= 0 && position_ligne < NB_LIGNES && position_colonne >= 0 && position_colonne < NB_COLONNES;
}
// Definir la fonction 'terrain_get_carburant' ici
int terrain_get_carburant(t_terrain terrain, int position_ligne, int position_colonne) {
 return terrain[position_ligne][position_colonne];
}
// Definir la fonction 'terrain_set_carburant' ici
void terrain_set_carburant(t_terrain terrain, int position_ligne, int position_colonne, int carburant) {
 terrain[position_ligne][position_colonne] = carburant;
}
// Definir la fonction 'terrain_init' ici
void terrain_init(t_terrain terrain) {
 for (int i = 0; i < NB_LIGNES; i++) {
  for (int j = 0; j < NB_COLONNES; j++) {
   terrain[i][j] = 0;
  }
 }
}
// Definir la fonction 'terrain_creer_stations_carburant' ici
void terrain_creer_stations_carburant(t_terrain terrain, int quantite_globale) {
 while (quantite_globale > 0) {
  int ligne = util_generer_nombre_aleatoire(0, NB_LIGNES - 1);
  int colonne = util_generer_nombre_aleatoire(0, NB_COLONNES - 1);
  int carburant = util_generer_nombre_aleatoire(1, STATION_MAX_CARBURANT);
  if (quantite_globale - carburant >= 0) {
   terrain[ligne][colonne] = carburant;
   quantite_globale -= carburant;
  }
 }
}
// Definir la fonction 'terrain_afficher' ici
void terrain_afficher(t_terrain terrain, int courante_ligne, int courante_colonne, int destination_ligne, int destination_colonne) {
 for (int i = 0; i < NB_LIGNES; i++) {
  for (int j = 0; j < NB_COLONNES; j++) {
   if (i == courante_ligne && j == courante_colonne) printf(" X ");
   else if (i == destination_ligne && j == destination_colonne) printf(" S ");
   else printf(" %d ", terrain[i][j]);
  }
  printf("\n");
 }
}
