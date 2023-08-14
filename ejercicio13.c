#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    char *palabra = argv[1];
    /*El asterisco señala un puntero
    Un puntero es una anotacion de una dirección 
    de memoria donde realmente se guarda el valor de mi variable*/
    int longitud = strlen(palabra);
    printf("La palabra %s tiene %d caracteres\n", palabra, longitud);
    return 0;
}