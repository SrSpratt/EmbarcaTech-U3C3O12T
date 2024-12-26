#include "../Libs/sizeConverter.h"
#include <stdio.h>

// Funções de conversão
float bitsParaBytes(float bits) {
    return bits / 8;
}

float bytesParaBits(float bytes) {
    return bytes * 8;
}

float bytesParaKB(float bytes) {
    return bytes / 1024;
}

float kbParaBytes(float kb) {
    return kb * 1024;
}

float kbParaMB(float kb) {
    return kb / 1024;
}

float mbParaGB(float mb) {
    return mb / 1024;
}

float gbParaTB(float gb) {
    return gb / 1024;
}

void SizeConverter() {
    int opcao;
    float valor, resultado;

    do {
        printf("\n=== Conversor de Unidades de Armazenamento ===\n");
        printf("1 - Bits para Bytes\n");
        printf("2 - Bytes para Bits\n");
        printf("3 - Bytes para Kilobytes (KB)\n");
        printf("4 - Kilobytes (KB) para Bytes\n");
        printf("5 - Kilobytes (KB) para Megabytes (MB)\n");
        printf("6 - Megabytes (MB) para Gigabytes (GB)\n");
        printf("7 - Gigabytes (GB) para Terabytes (TB)\n");
        printf("8 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor em bits: ");
                scanf("%f", &valor);
                resultado = bitsParaBytes(valor);
                printf("%.2f bits = %.2f bytes\n", valor, resultado);
                break;
            case 2:
                printf("Digite o valor em bytes: ");
                scanf("%f", &valor);
                resultado = bytesParaBits(valor);
                printf("%.2f bytes = %.2f bits\n", valor, resultado);
                break;
            case 3:
                printf("Digite o valor em bytes: ");
                scanf("%f", &valor);
                resultado = bytesParaKB(valor);
                printf("%.2f bytes = %.2f kilobytes (KB)\n", valor, resultado);
                break;
            case 4:
                printf("Digite o valor em kilobytes (KB): ");
                scanf("%f", &valor);
                resultado = kbParaBytes(valor);
                printf("%.2f kilobytes (KB) = %.2f bytes\n", valor, resultado);
                break;
            case 5:
                printf("Digite o valor em kilobytes (KB): ");
                scanf("%f", &valor);
                resultado = kbParaMB(valor);
                printf("%.2f kilobytes (KB) = %.2f megabytes (MB)\n", valor, resultado);
                break;
            case 6:
                printf("Digite o valor em megabytes (MB): ");
                scanf("%f", &valor);
                resultado = mbParaGB(valor);
                printf("%.2f megabytes (MB) = %.2f gigabytes (GB)\n", valor, resultado);
                break;
            case 7:
                printf("Digite o valor em gigabytes (GB): ");
                scanf("%f", &valor);
                resultado = gbParaTB(valor);
                printf("%.2f gigabytes (GB) = %.2f terabytes (TB)\n", valor, resultado);
                break;
            case 8:
                printf("Saindo do programa. Até mais!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 8);
}
