#include <stdio.h>

int main() {
    int producao, qtdCaminhoes;
    float cpdCaminhao, kmPercorrido, valorKm, valorTransporte;

    printf("Toneladas produzidas: ");
    scanf("%d", &producao);
    printf("Número de caminhões disponíveis: ");
    scanf("%d", &qtdCaminhoes);

    float custoTotal = 0.0;
    int i = 1;

    while (i <= qtdCaminhoes) {
        printf("--- Caminhão %d ---\n", i);
        
        printf("Informe a capacidade do caminhão em toneladas: ");
        scanf("%f", &cpdCaminhao);
        
        printf("Informe a quantidade de quilômetros a ser percorridos: ");
        scanf("%f", &kmPercorrido);
        
        printf("Informe o valor por tonelada em um quilômetro rodado: ");
        scanf("%f", &valorKm);

        if (cpdCaminhao > 45) {
            valorTransporte = (cpdCaminhao * kmPercorrido) * (valorKm * 0.75);
        } else {
            valorTransporte = (cpdCaminhao * kmPercorrido) * valorKm;
        }
        
        custoTotal = custoTotal + valorTransporte;
    
        if (producao > cpdCaminhao) {
            producao = producao - cpdCaminhao;
        } else {
            producao = 0;
        }
        
        i = i + 1;
    }
    
    if (producao == 0) {
        printf("A empresa de logística está apta a realizar o contrato.\n");
        printf("O custo total de transporte é de R$ %.2f\n", custoTotal);
    } else {
        printf("A empresa de logística não está apta a realizar o contrato.\n");
        printf("A produção excede a capacidade dos caminhões disponíveis.\n");
    }

    return 0;
}
