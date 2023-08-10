#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    int s = atoi(argv[1]);
    int n = atoi(argv[2]);
    srand(s); //Define un grupo de aleatorios que usaremos en el programa.
    int aleatorios[10];

    for(int i = 0; i < 10; i++){
        aleatorios[i] = rand() % n + 1;
    }
    int maximo = aleatorios[0];//Solo funcionan una vez que el array ya está lleno
    int minimo = aleatorios[0];

    for(int i = 0; i < 10; i++){
        if(aleatorios[i] > maximo){
            maximo = aleatorios[i];
        }

        if(aleatorios[i] < minimo){
            minimo = aleatorios[i];
        }
    }

    for(int i = 0; i < 10; i++){
        if(aleatorios[i] == maximo){
            printf("%d->MAX ", aleatorios[i]);
        }
        else if(aleatorios[i] == minimo){
            printf("%d->MIN ", aleatorios[i]);
        }
        else{
            printf("%d ", aleatorios[i]);
        }
    }
    printf("\n");
    return 0;
}