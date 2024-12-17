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
                //TODO: colocar o módulo de conversão
                break;
            //etc... outros casos
            default:
                printf("\nSaindo...");
        }
    }while(menuController != 0);
}