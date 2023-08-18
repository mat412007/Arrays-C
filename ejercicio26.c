#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char *fecha[15] = {"22/11", "26/11", "26/11", "30/11", "30/11", "03/12", "03/12", "09/12", "09/12", "13/12", "13/12", "13/12", "18/12", "18/12", "18/12"};
    char *jugador[15] = {"L. Messi", "L. Messi", "E. Fernandez", "A. Mac Allister", "J. Alvarez","L. Messi", "J. Alvarez", "N. Molina", "L. Messi", "L. Messi", "J. Alvarez", "J. Alvarez", "L. Messi", "A. Di Maria", "L. Messi"};
    char *minutos[15] = {"10", "64", "87", "46", "67", "35", "57", "35", "73", "34", "39", "69", "23", "36", "108"};
    for(int i = 0; i < 15; i++){
        printf("%s - Gol de %s a los %s minutos\n", fecha[i], jugador[i], minutos[i]);
    }
}