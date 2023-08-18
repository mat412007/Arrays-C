#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    char *matriz[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matriz[i][j] = "#";
            printf("%s ", matriz[i][j]);
        }
        printf("\n");
    }
}