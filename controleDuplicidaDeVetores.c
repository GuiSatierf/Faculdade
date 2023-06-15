#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

int main()
{
    int cpcUm[TAMANHO];
    int cpcDois[TAMANHO];
    int dupli[TAMANHO];

    printf("===============\n");
    printf("Capacitação 1 \n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Digite o código do funcionário %i: ", i + 1);
        scanf("%i", &cpcUm[i]);
        printf("\n");
    }

    printf("===============\n");
    printf("Capacitação 2 \n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Digite o código do funcionário %i: ", i + 1);
        scanf("%i", &cpcDois[i]);
        printf("\n");
    }

    for (int i = 0; i < TAMANHO; i++)
    {
        dupli[i] = 0;
    }

    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            if (cpcUm[i] == cpcDois[j])
            {
                dupli[i] = cpcUm[i];
            }
        }
    }

    printf("Duplicatas encontradas:\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        if (dupli[i] != 0)
        {
            printf("%i ", dupli[i]);
        }
    }
    
    return 0;
}