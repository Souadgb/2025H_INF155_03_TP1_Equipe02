#include "util.h"
#include <time.h>

int util_generer_nombre_aleatoire(int min, int max) {
return min+rand() % (max-min+1);
}

int util_symetrique (int min, int max, int n){
return max - (n - min);
}

void util_initialiser_rand() {
    srand(time(NULL));
}
