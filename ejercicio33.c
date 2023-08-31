#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool esNumeroValido(int sudoku[9][9], int fila, int columna, int numero) {
    // Verifica fila y columna para ver si el numero ya se encuentra
    for(int i = 0; i < 9; i++){
        if(sudoku[fila][i] == numero || sudoku[i][columna] == numero) {
            return false;
        }
    }

    // Verificar que no se encuentre en el cuadrado (3x3)
    int inicioFila = fila - fila % 3;
    int inicioColumna = columna - columna % 3;
    for(int i = inicioFila; i < inicioFila + 3; i++){
        for(int j = inicioColumna; j < inicioColumna + 3; j++){
            if(sudoku[i][j] == numero){
                return false;
            }
        }
    }

    return true;
}


int main () {
    int sudoku[9][9] = {{0}};
    srand(time(NULL));

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            int num, intentos = 0;
            do {
                num = rand() % 9 + 1;
            } while (!esNumeroValido(sudoku, i, j, num));
            sudoku[i][j] = num;

        }
    }

    int contadorEspacio = 0;
    for(int i = 0; i < 9; i++){
        contadorEspacio;
        for(int j = 0; j < 9; j++){
            if(j % 3 == 0){
                printf("    ");
            }
            printf("%d  ", sudoku[i][j]);
            if(contadorEspacio == 3 && j == 8){
                printf("\n");
                contadorEspacio = 0;
            }
        }
        printf("\n");
    }
}