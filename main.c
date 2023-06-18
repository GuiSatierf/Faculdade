#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 6
#define LIMITE_NUMERO 60

int numeroRandomicoNaoRepetido(int vetor[], int index) {
    int numero;
    int repetido;

    do {
        numero = rand() % LIMITE_NUMERO + 1;

        repetido = 0;
        for (int i = 0; i < index; i++) {
            if (vetor[i] == numero) {
                repetido = 1;
                break;
            }
        }
    } while (repetido);

    return numero;
}

int main() {
    int numeros[TAMANHO_VETOR];

    srand(time(NULL));


    for (int i = 0; i < TAMANHO_VETOR; i++) {
        numeros[i] = numeroRandomicoNaoRepetido(numeros, i);
    }

    printf("Números sorteados: ");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}