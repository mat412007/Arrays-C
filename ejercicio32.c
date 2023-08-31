#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand(time(NULL));
    int matriz[15][15] = {{0}};

    /*
  0 1 2 3 4 5 6 7 8 9 1011121314
0 [][][][][][][][][][][][][][][]
1 [][][][][][][][][][][][][][][]
2 [][][][][][][][][][][][][][][]
3 [][][][][][][][][][][][][][][]
4 [][][][][][][][][][][][][][][]
5 [][][][][][][][][][][][][][][]
6 [][][][][][][][][][][][][][][]
7 [][][][][][][][1][][][][][][][]
8 [][][][][][][][][][][][][][][]
9 [][][][][][][][][][][][][][][]
10[][][][][][][][][][][][][][][]
11[][][][][][][][][][][][][][][]
12[][][][][][][][][][][][][][][]
13[][][][][][][][][][][][][][][]
14[][][][][][][][][][][][][][][]

    */

    int fila = 15/2;
    int columna = 15/2;
    matriz[fila][columna] = 1;

    int movimientos[4][2] = {
        {-1, 0}, // Arriba
        {1, 0}, // Abajo
        {0, -1}, // Izquierda
        {0, 1} // Derecha
    };

    while(1){
        int direccionAleatoria = rand() % 3;

                //      7 + movimientos[2][0] = 0
        int nuevaFila = fila + movimientos[direccionAleatoria][0];
               //         7 + (-)movimienots[2][1] = 6;
        int nuevaColumna = columna + movimientos[direccionAleatoria][1];

        if(nuevaFila >= 0 && nuevaFila < 15 && nuevaColumna >= 0 && nuevaColumna < 15 && matriz[nuevaFila][nuevaColumna] != 1){
            fila = nuevaFila;
            columna = nuevaColumna;
            matriz[fila][columna] = 1;
            

            if(fila == 0 || fila == 14 || columna == 0 || columna == 14){
                break;
            }
        }
    }

    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 15; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}