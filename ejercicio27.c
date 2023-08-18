#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    char *numero[10] = {"Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Diez", "Once", "Doce"};
    char *palo[4] = {"Basto", "Espada", "Copa", "Oro"};

    for(int i = 0; i < 3; i++){
        int aleatorio1 = rand() % 10;
        int aleatorio2 = rand() % 4;
        printf("%s de %s\n", numero[aleatorio1], palo[aleatorio2]);
    }
}