#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    srand(time(NULL));
    int a[100];
    double suma = 0.0;
    for(int i = 0; i < 100; i++){
        a[i] = rand() % 100;
        suma = suma + a[i];
    }
    double promedio = suma / 100;
    printf("%.2f\n", promedio);
    return 0;
}