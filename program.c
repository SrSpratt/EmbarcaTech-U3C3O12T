#include <program.h>
#include <cObject.h>
#include <temperatureConverter.h>
#include <powerConverter.h>
#include <lengthConverter.h>
#include <sizeConverter.h>
#include <timeConverter.h>
#include <volumeConverter.h>
#include <stdio.h>
#include <stdlib.h>
#include <speedConverter.h>
#include <areaConverter.h>

void GetHeader()
{
    printf("\n\n");
    printf(">EmbarcaTech - Primeiro Projeto\n");
    printf(">Grupo4\n");
    printf(">Subgrupo 7\n\n");
}

void GetFooter()
{
    printf("\nAte mais...\n\n");
}

void GetMenu()
{
    int menuController; // Controlador do menu
    double inputTemp;
    //CObject object;

    do
    {
        printf("\nEscolha uma opcao de conversao:\n");
        printf("1. Unidades de comprimento\n");
        printf("2. Unidades de potencia eletrica\n");
        printf("3. Conversao de Celsius para Fahrenheit\n");
        printf("4. Conversao de Celsius para Kelvin\n");
        printf("5. Conversor de Area\n");
        printf("6. Conversao de Velocidade\n");
        printf("7. Conversao de Tempo\n");
        printf("8. Unidades de Armazenamento de dados\n");
        printf("9. Conversao de Volume\n");
        printf("0. Sair\n");

        scanf("%d", &menuController);

        switch (menuController)
        {
        case 1:
            LengthConverter();
            break;
        case 2:
            PowerConverter();
            break;
        case 3:
            printf("Digite a temperatura em Celsius: ");
            scanf("%lf", &inputTemp);
            printf("Temperatura em Fahrenheit: %lf\n", CelsiusToFahrenheit(inputTemp));
            break;
        case 4:
            printf("Digite a temperatura em Celsius: ");
            scanf("%lf", &inputTemp);
            printf("Temperatura em Kelvin: %lf\n", CelsiusToKelvin(inputTemp));
            break;
        case 5:
            AreaConverter();
            break;
        case 6:
            speedConverter();
            break;
        case 7:
            timeConverter();
            break;
        case 8:
            SizeConverter();
            break;
        case 9:
            volumeConverter();
            break;
        case 0:
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nOpcaoo invalida, tente novamente.\n");
        }
    } while (menuController != 0);
}