#include "program.h"
#include <stdio.h>

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
        printf("0. Sair\n");

        scanf("%d", &menuController);

        switch(menuController){
            case 1:
                //TODO: colocar o módulo de conversão
                break;
            case 2:
                //TODO: colocar o módulo de conversão
                break;
            //etc... outros casos
            default:
                printf("\nSaindo...");
        }
    }while(menuController != 0);
}