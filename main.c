#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeroRandomicoNaoRepetido(int sorteioMega[6]) {

    //implementção

    return numeroSorteado;
}

int main() {

    int sorteioMega[6];
    int x = 0;

    for(x = 0; x < 6; x++) {

        //Sorteando número da mega

        sorteioMega[x] = numeroRandomicoNaoRepetido(sorteioMega);
    }

    printf("Número sorteados de 1 a 60 na Mega Sena\n");

    for (x = 6; x < 6; x++) {
        printf("%i, ", sorteioMega[x]);
    }
}