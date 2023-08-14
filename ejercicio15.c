#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool esPalindromo(char *palabra){    
    int longitud = strlen(palabra);
    int i = 0;
    int j = longitud - 1;

    while(i < j){
    if(palabra[i] != palabra[j]){
        return false;
    }
    i++;
    j--;
    }
    return true;
}

int main(int argc, char *argv[]){
    char *palabra = argv[1];

    if(esPalindromo(palabra) == true){
        printf("La palabra es un palindromo.\n");
    }
    else{
        printf("La palabra no es un palindromo.\n");
    }
}