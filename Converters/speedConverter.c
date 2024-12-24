#include <stdio.h>
#include <speedConverter.h>

void speedConverter() {
    float valor, resultado;
    int de, para;

    while (1) {
        printf("Digite o valor da velocidade (ou 0 para sair): ");
        if (scanf("%f", &valor) != 1) { 
            printf("Entrada negada. Tente novamente.\n");
            while (getchar() != '\n'); 
            continue;
        }

        if (valor == 0) {
            printf("Saindo do programa...\n");
            break;
        }

        printf("Selecione a unidade de origem:\n");
        printf("1. km/h\n2. m/s\n3. mph\n");
        if (scanf("%d", &de) != 1) { 
            printf("Entrada negada. Tente novamente.\n");
            while (getchar() != '\n'); 
            continue;
        }

        printf("Selecione a unidade de destino:\n");
        printf("1. km/h\n2. m/s\n3. mph\n");
        if (scanf("%d", &para) != 1) { 
            printf("Entrada negada. Tente novamente.\n");
            while (getchar() != '\n'); 
            continue;
        }

        switch (de) {
            case 1:
                switch (para) {
                    case 1:
                        resultado = valor;
                        break;
                    case 2:
                        resultado = valor / 3.6;
                        break;
                    case 3:
                        resultado = valor / 1.609;
                        break;
                }
                break;
            case 2:
                switch (para) {
                    case 1:
                        resultado = valor * 3.6;
                        break;
                    case 2:
                        resultado = valor;
                        break;
                    case 3:
                        resultado = valor * 2.237;
                        break;
                }
                break;
            case 3:
                switch (para) {
                    case 1:
                        resultado = valor * 1.609;
                        break;
                    case 2:
                        resultado = valor / 2.237;
                        break;
                    case 3:
                        resultado = valor;
                        break;
                }
                break;
        }

        printf("Resultado: %.2f\n", resultado);
    }
}
