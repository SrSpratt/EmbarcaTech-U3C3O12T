#include "lenghtConverter.h"
#include <stdio.h>


float metroParaCentimetro(float metro) {
    return metro * 100;
}

float metroParaMilimetro(float metro) {
    return metro * 1000;
}

float centimetroParaMilimetro(float centimetro) {
    return centimetro * 10;
}

void LenghtConverter() {
    int opcao;
    float valor, resultado;

   
    do {
        printf("\n=== Conversor de Unidades de Comprimento ===\n");
        printf("1 - Metros para Centimetros\n");
        printf("2 - Metros para Milimetros\n");
        printf("3 - Centimetros para Milimetros\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        
        switch (opcao) {
            case 1:
                printf("Digite o valor em metros: ");
                scanf("%f", &valor);
                resultado = metroParaCentimetro(valor);
                printf("%.2f metros = %.2f centimetros\n", valor, resultado);
                break;
            case 2:
                printf("Digite o valor em metros: ");
                scanf("%f", &valor);
                resultado = metroParaMilimetro(valor);
                printf("%.2f metros = %.2f milimetros\n", valor, resultado);
                break;
            case 3:
                printf("Digite o valor em centimetros: ");
                scanf("%f", &valor);
                resultado = centimetroParaMilimetro(valor);
                printf("%.2f centimetros = %.2f milimetros\n", valor, resultado);
                break;
            case 4:
                printf("Saindo do programa. Ate mais!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 4);
}