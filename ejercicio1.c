#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    int x[n];
    for(int i = 1; i <= n; i++){
        x[i] = i;
        printf("%d ", x[i]);
    }
    printf("\n");
    return 0;
}