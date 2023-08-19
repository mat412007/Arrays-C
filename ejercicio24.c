#include <stdio.h>
#include <string.h>

void traduciarAMorse(char *palabra){
    char *morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
                           "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                           "..-", "...-", ".--", "-..-", "-.--", "--.."};

    int longitud = strlen(palabra);

    for(int i = 0; i < longitud; i++){
        char letra = palabra[i];
        
        if(letra >= 'a' && letra <= 'z'){
            int indice = letra - 'a';
            printf("%s ", morse[indice]);
        }
    }
    printf("\n");
}


int main(int argc, char *argv[]){
    char *palabra = argv[1];
    traduciarAMorse(palabra);

}