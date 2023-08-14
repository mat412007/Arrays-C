#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){
    char *palabra = argv[1];
    char *array[] = {"Espada", "Computadora", "Halcon", "Aguila", "Chicle"};
    int cantidadPalabras = sizeof(array) / sizeof(array[0]);
    int palabraEncontrada = 0;

    for(int i = 0; i < cantidadPalabras; i++){
        //strcmp -> String Compare
        if(strcmp(palabra, array[i]) == 0){
            printf("Nuestra palabra esta en el indice: %d\n", i);
            palabraEncontrada = 1;
        }
    }
    if(palabraEncontrada == 0){
        printf("La palabra no se encontro en el array.\n");
        return 1;
    }
}