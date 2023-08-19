#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    char *nombre = argv[1];
    int matriz[10][5];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 4; j++){
            matriz[i][j] = rand() % 10 + 1;
        }
    }
    printf("Boletin del alumno %s\tPromedio\n", nombre);

    for(int i = 0; i < 10; i++){
        float suma = 0;
        for(int j = 0; j < 4; j++){
            suma += matriz[i][j];
            printf("%d\t", matriz[i][j]);
        }
        printf("%.2f\n", suma/4);
    }
    
}