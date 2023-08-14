#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    int numeros[100];
    float suma = 0;
    for(int i = 0; i < 100; i++){
        numeros[i] = rand() % 101;
        printf("%d ", numeros[i]);
        suma += numeros[i];
    }
    printf("\n");
    printf("El total es %.2f\n", suma);
    printf("El promedio es %.4f\n", suma/100);
    return 0;
}