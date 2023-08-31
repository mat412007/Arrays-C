#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char* argv[]){

    srand(time(NULL));

    float p = atof(argv[1]); // Probablidad de que salga -1 o 0
    int n = atoi(argv[2]); // El tamaño del buscaminas

    if(p  < 0.0 || p > 10.0){
        printf("La probabilidad debe estar entre 0.0 y 10.0");
        return 1;
    }


    int matriz[n + 2][n + 2];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            float valorAleatorio = rand() % 11;
            if(valorAleatorio <= p){
                matriz[i][j] = 1;
            }
            else {
                matriz[i][j] = 0;
            }
        }
    }

    // El numero de minas vecinas
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            if(matriz[i][j] != 1){
                int count = 0;
                for(int x = -1; x <= 1; x++){
                    for(int y = -1; y <= 1; y++){
                        if(matriz[i + x][j + y] == 1){
                            count++;
                        }
                    }
                }
                matriz[i][j] = count;
            }
        }
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}