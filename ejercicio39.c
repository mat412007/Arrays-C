#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    int n = atoi(argv[1]);
    int matriz[n][n];
    int suma = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matriz[i][j] = rand() % 10;
            printf("%d ", matriz[i][j]);
            if(i == j){
                suma += matriz[i][j];
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("La suma es de %d\n", suma);
}