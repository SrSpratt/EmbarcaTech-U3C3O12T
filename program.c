#include <program.h>
#include <cObject.h>
#include <temperatureConverter.h>
#include <powerConverter.h>
#include <lengthConverter.h>
#include <areaConverter.c>
#include <areaConverter.h>
#include <volumeConverter.c>
#include <volumeConverter.h>
#include <stdio.h>
#include <stdlib.h>

void GetHeader(){
    printf("\n\n");
    printf(">EmbarcaTech - Primeiro Projeto\n");
    printf(">Grupo4\n");
    printf(">Subgrupo 7\n\n");
}

void GetFooter(){
    printf("\nAté mais...\n\n");
}

void GetMenu(){
    int menuController; //Controlador do menu
    double inputTemp;
    CObject object;

    do {
        printf("\nEscolha uma opção de conversão:\n");
        printf("1. Unidades de comprimento\n");
        printf("2. Unidades de potência elétrica\n");
        printf("3. Conversão de Celsius para Fahrenheit\n");
        printf("4. Conversão de Celsius para Kelvin\n");
        printf("9 - Conversão de volume\n");
        printf("0. Sair\n");

        scanf("%d", &menuController);

        switch(menuController){
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
                break;
            case 9:{
                volumeConverter();
                break;
            }
            case 0:
                printf("\nSaindo...\n");
            default:
                printf("\nOpção inválida, tente novamente.\n");
        }
    } while(menuController != 0);
}