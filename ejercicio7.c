#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int a[], int i, int j){
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
}
void printarr(int a[], int n){
    printf("[ ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("]\n");
}

int main(int argc, char *argv[]){
    int v = 20;
    int v2 = 1;
    int a[v];
    for(int n = 0; n < v; n++){
        a[n] = v2 * 2;
        v2++;
    }
    printarr(a, 20);
    for(int m = 0; m < v/2; m++){//Esto es la abreviación del comentario de abajo
        swap(a, m, v - 1 - m);
    }
    printarr(a, 20);
    return 0;
}
  /*swap(a, 0, 20);
    swap(a, 1, 19);
    swap(a, 2, 18);
    swap(a, 3, 17);
    swap(a, 4, 16);
    swap(a, 5, 15);
    swap(a, 6, 14);
    swap(a, 7, 13);
    swap(a, 8, 12);
    swap(a, 9, 11);*/