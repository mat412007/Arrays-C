//Ejercicio 27
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    int aleatorio2 = rand() % 12;
    int aleatorio3 = rand() % 12;
    int aleatorio4 = rand() % 12;
    int aleatorio5 = rand() % 4;
    int aleatorio6 = rand() % 4;
    int aleatorio7 = rand() % 4;
    char *numero[] = {"Uno", "Dos", "Tres", "Cuatro", "Cinco'", "Seis", "Siete", "Ocho", "Nueve", "Diez", "Once", "Doce"};
    char *tipodecarta[] = {"Oro", "Espada", "Basto", "Copa"};
    printf("%s de %s, %s de %s, %s de %s\n", numero[aleatorio2], tipodecarta[aleatorio5], numero[aleatorio3], tipodecarta[aleatorio6], numero[aleatorio4], tipodecarta[aleatorio7]);
    return 0;
}