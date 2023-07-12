#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    int nums[n];
    for(int i = 0; i < n; i++){
        nums[i] = i + 1;
        printf("%d\n", nums[i]);
    }
    return 0;
}