#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    if(argc < 2){//argc se refiere a la cvantidad total de argumentos
        printf("Incorrecto uso de echo.\n");
    }
    //strcmp -> String Compare
    //strcmp ->(primertexto, segundotexto) == 0 -> Son iguales
    //strcmp ->(primertexto, segundotexto) != 0 -> No son iguales
    if(strcmp(argv[1], "echo") == 0){
        for(int i = 2; i < argc; i++){
            printf("%s\n", argv[i]);
        }
    }
    else{
        printf("Incorrecto uso de echo.\n");
    }
    return 0;
}