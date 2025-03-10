#ifndef UTIL_H
#define UTIL_H

#include <stdlib.h>
#include <time.h>

// Macros
// (condition ?(if) valeur_si_vrai :(else) valeur_si_faux
#define MIN(a,b) ((a) < (b) ? (a) : (b)) // retourne plus petit des deux nombres
#define ABS(a) ((a) < 0 ? -(a) : (a)) // retourne valeur absolue

int util_generer_nombre_aleatoire(int min, int max);
int util_symetrique(int min, int max, int n);


#endif //UTIL_H
