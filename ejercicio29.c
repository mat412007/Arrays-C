#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char *palos[] = {"Espada", "Basto", "Oro", "Copa"};
char *valores[] = {"1", "2", "3", "4", "5", "6", "7", "10", "11", "12"};

void mezclar_mazo(int mazo[]){
    srand(time(NULL));
    for(int i = 40 - 1; i > 0; i--){
        int j = rand() % (i + 1);
        int temp = mazo[i];
        mazo[i] = mazo[j];
        mazo[j] = temp;
    }
}

void repartir_mano(int mazo[], int mano[]){
    for(int i = 0; i < 3; i++){
        mano[i] = mazo[i];
    }
}


int main (int argc, char *argv[]) {

    int n = atoi(argv[1]);
    int tamano_mazo = 40;

    int mazo[tamano_mazo];
    int mano[3];

    for(int i = 0; i < tamano_mazo; i++){
        mazo[i] = i;
    }

    for(int i = 0; i < n; i++){
        mezclar_mazo(mazo);
        repartir_mano(mazo, mano);

        printf("Mano %d: ", i + 1);
        for(int j = 0; j < 3; j++){
            int carta = mano[j];
            int valor = carta % 10;
            int palo = carta / 10;
            printf("[%s de %s] ", valores[valor], palos[palo]);
        }
        printf("\n");
    }

}