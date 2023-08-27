#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    int numeros[100];
    int maximo = 0;
    int minimo = 100;

    for(int i = 0; i < 100; i++){
        numeros[i] = rand() % 101;
        printf("%d ", numeros[i]);

        if(numeros[i] > maximo){
            maximo = numeros[i];
        }
        if(numeros[i] < minimo){
            minimo = numeros[i];
        }
    }
    printf("\n\n");
    printf("El minimo es: %d\n", minimo);
    printf("El maximo es: %d\n", maximo);
    return 0;

}