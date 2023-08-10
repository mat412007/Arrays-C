#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    int a [n];
    a[0] = 0;
    a[1] = 1;
    printf("0 1 ");
    for(int i = 2; i < n; i++){
        a[i] = a[i - 1] + a[i - 2];
        printf("%d ", a[i]);
    }
    return 0;
}