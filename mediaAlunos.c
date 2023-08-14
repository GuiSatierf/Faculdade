#include <stdio.h>
#include <stdlib.h>

#define ALUNOS 10
#define NOTAS 4

int main()
{
    float notas, total, resultado;

    for (int i = 0; i < ALUNOS; i++)
    {
        printf("Digite as notas do aluno %d\n", i + 1);
        printf("\n");

        for (int j = 0; j < NOTAS; j++)
        {
            printf("Digite a nota %d: \n", j + 1);

            fflush(stdin);
            scanf("%f", &notas);
            printf("\n");

            total = total + notas;
        }

        resultado = total / 4;

        if (resultado < 5)
        {
            printf("Aluno %d: REPROVADO \n", i + 1);
            printf("==============\n");
            printf("\n");
        }
        else
        {
            if (resultado < 7)
            {
                printf("Aluno %d: RECUPERACAO \n", i + 1);
                printf("==============\n");
                printf("\n");
            }
            else
            {
                printf("Aluno %d: APROVADO \n", i + 1);
                printf("==============\n");
                printf("\n");
            }
        }

        total = 0;
    }
}
