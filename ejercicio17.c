#include <stdio.h>
#include <string.h>
#include <ctype.h>

void to_lower_case(char *palabra){
    for(int i = 0; palabra[i] != '\0'; i++){
        char c = palabra[i];
        if(isalpha(c)){
            palabra[i] = tolower(c);
        }
    }
}

int main(int argc, char *argv[]){
    char palabra[50];
    //strcpy -> String Copy
    //String Copy me permite copiar una palabra a un array
    //Estructura = [donde copio][desde donde copio]
    strcpy(palabra, argv[1]);

    printf("Palabra original: %s\n", palabra);

    to_lower_case(palabra);

    printf("Palabra en minuscula: %s\n", palabra);

}