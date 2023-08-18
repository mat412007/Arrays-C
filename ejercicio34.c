#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int matriz[3][3];
    int contador = 1;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz[i][j] = contador;
            printf("%d ", matriz[i][j]);
            contador += 1;
        }
        printf("\n");
    }
}