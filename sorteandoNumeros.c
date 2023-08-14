#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeroRandomicoNaoRepetido(int sorteioMega[6])
{

    int numeroSorteado;
    int repetido;

    do
    {
        numeroSorteado = rand() % 60 + 1;

        repetido = 0;
        for (int i = 0; i < 6; i++)
        {
            if (sorteioMega[i] == numeroSorteado)
            {
                repetido = 1;
                break;
            }
        }
    } while (repetido);

    return numeroSorteado;
}

int main()
{
    
    int sorteioMega[6];
    int x = 0;

    for (x = 0; x < 6; x++)
    {
        sorteioMega[x] = numeroRandomicoNaoRepetido(sorteioMega);
    }

    printf("Numeros sorteados de 1 a 60 da Mega Sena\n");
    for (x = 0; x < 6; x++)
    {
        printf("%i ", sorteioMega[x]);
    }
}
