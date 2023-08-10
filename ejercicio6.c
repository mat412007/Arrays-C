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
    int a[] = {1, 2, 3, 4, 5, 6};
    printarr(a, 6);
    swap(a, 0, 5);
    swap(a, 1, 4);
    swap(a, 2, 3);
    printarr(a, 6);
}