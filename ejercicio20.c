#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int parse_int(char *palabra){
    int signo = 1;
    int i = 0;
    int resultado = 0;;

    if(palabra[0] == '-'){
        signo = -1;
        i = 1; //Esto hace que ignoremos el signo - y comenzemos por el numero que le sigue
    }

    while(palabra[i] >= '0' && palabra[i] <= '9'){
        //0 * 10 = 0 + 9 = 9
        //9 * 10 + 3 = 93
        //93 * 10 + 5 = 935
        resultado = resultado * 10 + (palabra[i] - '0');
        i++;
    }
    return signo * resultado;
}

int main(int argc, char *argv[]){
    char *palabra = argv[1];
    //'10' -> 10 atoi
    int numero = parse_int(palabra);
    printf("%d\n", numero);
}