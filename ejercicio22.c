#include <stdio.h>
#include <string.h>


int main (int argc, char *argv[]) {
    char *palabra = argv[1];

    int longitud = strlen(palabra);

    if(longitud <= 10){
        printf("%s", palabra);
    }
    else {
        printf("%c%d%c\n", palabra[0], longitud - 2, palabra[longitud - 1]);
    }
}