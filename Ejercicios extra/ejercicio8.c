#include <stdio.h>

int main () {
    // res final:    6  5  4  3  2  1
    int numeros[] = {1, 2, 3, 4, 5, 6};
                //   0  1  2  3  4  5
    /*
    8 bit -> 1 byte
    1024 byte -> 1 mega
    1024 mega -> 1 gb
    cada int ocupa 4 bytes entonces 4 bytes * 6 elementos = 24 bytes / 4 bytes = 6
    */
    int cantidadElementos = sizeof(numeros) / sizeof(numeros[0]);

    for(int i = 0; i < cantidadElementos / 2; i++){
        int numeroTemporal = numeros[i]; // en el primer ciclo = 1
        // en el primer ciclo -> numeros[0] = numeros[6 - 0 - 1] -> numeros[0] = 6
        numeros[i] = numeros[cantidadElementos - i - 1];
        numeros[cantidadElementos - i - 1] = numeroTemporal;
    }

    for(int i = 0; i < cantidadElementos; i++){
        printf("%d ", numeros[i]);
    }
    printf("\n");
}