#include <stdio.h>

#define n 5

int main(){
    //Los arrays necesitan ser definidos por un valor que no cambia
    float vector1[n] = {1.0, 2.5, 3.0, 4.5, 5.0};
    float vector2[n] = {2.0, 3.5, 4.0, 5.5, 6.0};

    float productoPunto = 0.0;
    for(int i = 0; i < n; i++){
        productoPunto += vector1[i] * vector2[i];
    }
    printf("El producto punto entre los 2 vectores es: %.3f\n", productoPunto);
    return 0;
}