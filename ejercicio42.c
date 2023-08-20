#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    int n = atoi(argv[1]);
    if(n != 2 && n != 3){
        printf("Error, el armento debe ser 2 o 3.\n");
        return 1;
    }
    int matriz[n][n];
    int suma = 0;
    int resta = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matriz[i][j] = rand() % 10;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    if(n == 2){
        suma = matriz[0][0] * matriz[1][1];
        resta = matriz[0][1] * matriz[1][0];
        int resultado = suma - resta;
        printf("Suma = %d\nResta = %d\n", suma, resta);
        printf("El determinante es %d\n", resultado);
    }
    else if(n == 3){
        int suma1 = matriz[0][0] * matriz[1][1] * matriz[2][2];
        int suma2 = matriz[0][1] * matriz[1][2] * matriz[2][0];
        int suma3 = matriz[1][0] * matriz[2][1] * matriz[0][2];
        int resta1 = matriz[0][2] * matriz[1][1] * matriz[2][0];
        int resta2 = matriz[0][1] * matriz[1][0] * matriz[2][2];
        int resta3 = matriz[1][2] * matriz[2][1] * matriz[0][0];
        int resultado = suma1 + suma2 + suma3 - resta1 - resta2 - resta3;
        printf("Suma 1 = %d\nSuma 2 = %d\nSuma 3 = %d\n", suma1, suma2, suma3);
        printf("Resta 1 = %d\nResta 2 = %d\nResta 3 = %d\n", resta1, resta2, resta3);
        printf("El determinante es %d\n", resultado);
    }

}