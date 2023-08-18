#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    int matriz[4][4];
    float promedio1 = 0;
    float promedio2 = 0;
    for(int x = 0; x < 4; x++){
        for(int y = 0; y < 4; y++){
            matriz[x][y] = rand() % 10;
            printf("%d ", matriz[x][y]);
            promedio1 += matriz[x][y];
        }
        printf("\tEl promedio de la fila %d es %.3f\n", x, promedio1/4);
        promedio1 = 0;

    }
    printf("\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            promedio2 += matriz[j][i];
        }
        printf("El promedio de la columna %d es %.3f\n", i, promedio2/4);
        promedio2 = 0;
    }
}