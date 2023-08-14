#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    int aleatorios[100];
    int repeticiones[10];

    for(int i = 0; i < 100; i++){
        aleatorios[i] = rand() % 10;
        repeticiones[aleatorios[i]]++;
    }
    printf("Numero\tRepeticiones\n");
    for(int i = 0; i < 10; i++){
        printf("%d\t%d\n", i, repeticiones[i]);
    }

}