#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    int m = atoi(argv[1]);
    int n = atoi(argv[2]);
    int matriz[m][n];
    printf("Matriz original:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            matriz[i][j] = rand() % 10;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matriz transpuesta:\n");
    int matriz2[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            matriz2[i][j] = matriz[j][i];
            printf("%d ", matriz2[i][j]); 
        }
        printf("\n");
    }
}