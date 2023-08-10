#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int n){
    bool prime = true;
    int divisor = 2;
    while(divisor < n){
        if(n % divisor == 0) prime = false;
        divisor++;
    }
    return prime;
}

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    int x[n];
    for(int i = 0; i < n; i++){
        x[i] = i + 1;
        if(is_prime(x[i])){
            printf("%d ", x[i]);
        }
    }
    printf("\n");
    return 0;
}