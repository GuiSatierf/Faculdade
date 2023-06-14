#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INGRESSOS 999

typedef struct
{
    char nome[50];
    char cpf[12];
    char dataNascimento[4];
} Ingresso;

Ingresso ingressos[MAX_INGRESSOS];
int numIngressos = 0;

void venderIngresso();
void listarIngressos();
void validarIngresso();

void venderIngresso()
{
    if (numIngressos >= MAX_INGRESSOS)
    {
        printf("Limite de ingressos atingido.\n");
        return;
    }

    Ingresso novoIngresso;
    printf("\n");
    printf("Nome do comprador: ");
    scanf(" %[^\n]", novoIngresso.nome);
    printf("CPF do comprador: ");
    scanf(" %[^\n]", novoIngresso.cpf);
    printf("Ano de nascimento do comprador (AAAA): ");
    scanf(" %[^\n]", novoIngresso.dataNascimento);

    ingressos[numIngressos] = novoIngresso;
    numIngressos++;
    printf("\n");
    printf("Ingresso vendido!\n");
}

void listarIngressos()
{
    printf("\n");
    printf("Ingressos vendidos:\n");
    for (int i = 0; i < numIngressos; i++)
    {
        printf("\n");
        printf("Ingresso #%d\n", i + 1);
        printf("Nome: %s\n", ingressos[i].nome);
        printf("CPF: %s\n", ingressos[i].cpf);
        printf("Ano de Nascimento: %s\n", ingressos[i].dataNascimento);
        printf("========================\n");
    }
}

void validarIngresso()
{
    char cpf[12];
    printf("\n");
    printf("Digite o CPF para validar o ingresso: ");
    scanf(" %[^\n]", cpf);

    for (int i = 0; i < numIngressos; i++)
    {
        if (strcmp(ingressos[i].cpf, cpf) == 0)
        {
            printf("\n");
            printf("Ingresso válido!\n");
            printf("Nome: %s\n", ingressos[i].nome);
            printf("Data de Nascimento: %s\n", ingressos[i].dataNascimento);
            return;
        }
        else
        {
            printf("Ingresso não encontrado.\n");
        }
    }
}

int main()
{
    char opcao;
    do
    {
        printf("========== Menu ==========\n");
        printf("\n");
        printf("a) Vender ingresso\n");
        printf("b) Listar ingressos vendidos\n");
        printf("c) Validar ingresso\n");
        printf("d) Sair\n");
        printf("\n");
        printf("Escolha uma opção: ");
        scanf(" %c", &opcao);

        switch (opcao)
        {
        case 'a':
            venderIngresso();
            break;
        case 'b':
            listarIngressos();
            break;
        case 'c':
            validarIngresso();
            break;
        case 'd':
            printf("\n");
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }

        printf("\n");
    } while (opcao != 'd');

    return 0;
}