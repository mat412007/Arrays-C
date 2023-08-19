#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
                "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                "..-", "...-", ".--", "-..-", "-.--", "--.."};

void charAmorse(char c){
    if(isalpha(c)){
        int indice = toupper(c) - 'A';
        printf("%s ", morse[indice]);
    }
    else {
        printf(" ");
    }
}


int main(int argc, char* argv[]){

    // a.exe hola | como | estas 

    for(int i = 1; i < argc; i++){
        for(int j = 0; j < strlen(argv[i]); j++){
            charAmorse(argv[i][j]);
        }
        if(i < argc - 1){
            printf(" | ");
        }
    }

}