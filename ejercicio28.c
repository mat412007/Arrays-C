#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    char *mazo[40] = {"Uno de basto", "Uno de copa", "Uno de espada", "Uno de oro", "Dos de basto", "Dos de copa", "Dos de espada", "Dos de oro", "Tres de basto", "Tres de copa", "Tres de espada", "Tres de oro", "Cuatro de basto", "Cuatro de copa", "Cuatro de espada", "Cuatro de oro", "Cinco de basto", "Cinco de copa", "Cinco de espada", "Cinco de oro", "Seis de basto", "Seis de copa", "Seis de espada", "Seis de oro", "Siete de basto", "Siete de copa", "Siete de espada", "Siete de oro", "Diez de basto", "Diez de copa", "Diez de espada", "Diez de oro", "Once de basto", "Once de copa", "Once de espada", "Once de oro", "Doce de basto", "Doce de copa", "Doce de espada", "Doce de oro"};
    for(int i = 0; i < 40; i++){
        printf("%s\n", mazo[i]);
    }
}