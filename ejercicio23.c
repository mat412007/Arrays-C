#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char *mes[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    int n = atoi(argv[1]);
    if(n < 1 || n > 12){
        printf("Error, numero no valido.\n");
        return 1;
    }
    else{
        printf("El mes numero %d es %s.\n", n, mes[n - 1]);
        return 0;
    }
}