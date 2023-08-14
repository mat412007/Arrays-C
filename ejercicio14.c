#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>//incluye tolower

int main(int argc, char *argv[]){

    char *palabra = argv[1];
    int cantidadLetras[26] = {0};

    for(int i = 0; palabra[i] != '\0'; i++){
        //tolower transforma una letra de mayúscula a minuscula
        char caracter = tolower(palabra[i]);
        if('a' <= caracter && caracter <= 'z'){
            cantidadLetras[caracter - 'a']++;
        }
    }
    for(int i = 0; i < 26; i++){
        if(cantidadLetras[i] > 0){
            printf("%c: %d\n", 'a' + i, cantidadLetras[i]);
        }
    }
}