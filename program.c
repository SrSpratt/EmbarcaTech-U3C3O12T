#include "program.h"
#include "cObject.h"
#include <stdio.h>
#include <stdlib.h>

void GetHeader(){
    //printf("\n ______________________________\n");
    printf("\n\n");
    printf(">EmbarcaTech - Primeiro Projeto\n");
    printf(">Grupo4\n");
    printf(">Subgrupo 7\n\n");
    //printf(" ------------------------\n");
}

void GetFooter(){
    printf("\nAté mais...\n\n");
}

void GetMenu(){

    int menuController; //Controlador do menu
    do{
        printf("\nEscolha uma opção de conversão:\n");
        printf("1. Unidades de comprimento\n");
        printf("2. Unidades de potência elétrica\n");
        printf("3. Conversão de Celsius para Fahrenheit\n");
        printf("4. Conversão de Celsius para Kelvin\n");
        printf("0. Sair\n");

        scanf("%d", &menuController);

        CObject object;

        switch(menuController){
            case 1:
                InitCObject(12.5, &object); //Teste
                printf("%lf\n", object.output);
                printf("%s\n", PrintCObject(&object));
                break;
            case 2:
                //módulo de conversão
                break;
            case 3:
                printf("Digite o valor em Celsius: ");
                double celsius;
                scanf("%lf", &celsius);
                printf("%.2lf Celsius = %.2lf Fahrenheit\n", celsius, celsiusParaFahrenheit(celsius));
                break;
            case 4:
                printf("Digite o valor em Celsius: ");
                scanf("%lf", &celsius);
                printf("%.2lf Celsius = %.2lf Kelvin\n", celsius, celsiusParaKelvin(celsius));
                break;
            default:
                printf("\nSaindo...");
        }
    }while(menuController != 0);
}