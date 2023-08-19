#include <stdio.h>
#include <string.h>
#include <ctype.h>

void eliminar_espacios(char* frase) {
    
    // Primero sacamos la cantidad de caracteres
    int longitud = strlen(frase);

    // Ahora calculamos donde inicia realmente nuestra frase
    // es decir (donde hay letras) usando la funcion isspace
    // de la libreria ctype.h y sumandole 1 a inicio mientras
    // el caracter que estemos leyendo sea un espacio.
    int inicio = 0;

    // isspace comprueba si un caracter es un espacio
    while(isspace(frase[inicio])){
        inicio++;
    }

    int fin = longitud - 1;
    while(fin >= 0 && isspace(frase[fin])){
        fin--;
    }

    int j = 0;
    for(int i = inicio; i <= fin; i++){
    // frase[0] = frase[2]
    // frase[1] = frase[3]
        frase[j] = frase[i];
        j++;
    }
    frase[j] = '\0';
}

int main () {

    char frase[] = "  Hola, este es un string con espacios  ";
    printf("Antes: %s.\n", frase);
    eliminar_espacios(frase);
    printf("Despues: %s.\n", frase);
}