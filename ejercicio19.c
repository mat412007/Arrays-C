#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    int n = atoi(argv[1]);
    char *palabra = argv[2];

    int longitud = strlen(palabra);
    for(int i = 0; i <longitud; i++){
        if(palabra[i] >= 'a' && palabra[i] <= 'z'){
            //Tabla ASCI
            palabra[i] = 'a' + (palabra[i] - 'a' + n) % 26;
        }
    }
    printf("Palabar cifrada: %s\n", palabra);
}