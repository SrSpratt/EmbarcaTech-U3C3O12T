#include <stdio.h>
#include <areaConverter.h>



void AreaConverter() { 
    int opcao;
    do {
        
        printf("\n-- Conversor de Medida --\n");
        printf("(1) Metro quadrados para Centimetro quadrados\n");
        printf("(2) Hectare para Metro quadrados\n");
        printf("(3) Acre para Metro quadrados\n");
        printf("(4) Metro quadrados para Jarda quadrada\n");
        printf("(0) Sair\n");

        printf("Selecione um dos numeros: ");
        if (scanf("%d", &opcao) != 1) { 
            printf("Entrada negada. Digite um número.\n");
            while (getchar() != '\n'); 
            continue;
        }

        switch (opcao) {
            case 1:
                printf("\n(1) Metro quadrado para Centimetro quadrado\n");
                printf("Digite o valor que deseja converter: ");
                if (scanf("%f", &valor) != 1) { 
                    printf("Entrada negada. Tente novamente.\n");
                    while (getchar() != '\n'); 
                    continue;
                }
                resultado = valor * 10000;
                printf("%.2f metros quadrados = %.2f centimetros quadrados\n", valor, resultado);
                break;
            case 2:
                printf("\n(2) Hectare para Metro quadrado\n");
                printf("Digite o valor que deseja converter: ");
                if (scanf("%f", &valor) != 1) { 
                    printf("Entrada negada. Tente novamente.\n");
                    while (getchar() != '\n'); 
                    continue;
                }
                resultado = valor * 10000;
                printf("%.2f hectares = %.2f metros quadrados\n", valor, resultado);
                break;
            case 3:
                printf("\n(3) Acre para Metro quadrado\n");
                printf("Digite o valor que deseja converter: ");
                if (scanf("%f", &valor) != 1) { 
                    printf("Entrada negada. Tente novamente.\n");
                    while (getchar() != '\n'); 
                    continue;
                }
                resultado = valor * 4046.86;
                printf("%.2f acres = %.2f metros quadrados\n", valor, resultado);
                break;
            case 4:
                printf("\n(4) Metro quadrado para Jarda²\n");
                printf("Digite o valor que deseja converter: ");
                if (scanf("%f", &valor) != 1) { 
                    printf("Entrada negada. Tente novamente.\n");
                    while (getchar() != '\n'); 
                    continue;
                }
                resultado = valor * 1.196;
                printf("%.2f metros quadradoss = %.2f jardas quadradas\n", valor, resultado);
                break;
            case 0:
                printf("Programa finalizado.\n");
                break;
            default:
                printf("Escolha negada. Escolha entre (0), (1), (2), (3) ou (4).\n");
        }
    } while (opcao != 0);
 
}
