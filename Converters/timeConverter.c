#include "../Libs/timeConverter.h"
#include <stdio.h>

void convert_seconds(int seconds)
{
    int choice;
    printf("Escolha a unidade para conversao:\n");
    printf("1 - Converter para minutos\n");
    printf("2 - Converter para horas\n");
    printf("Digite sua opcao: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("%d segundos = %.2f minutos\n", seconds, seconds / 60.0);
        break;
    case 2:
        printf("%d segundos = %.2f horas\n", seconds, seconds / 3600.0);
        break;
    default:
        printf("Opcao invalida!\n");
        break;
    }
}

void convert_minutes(int minutes)
{
    int choice;
    printf("Escolha a unidade para conversao:\n");
    printf("1 - Converter para segundos\n");
    printf("2 - Converter para horas\n");
    printf("Digite sua opcao: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("%d minutos = %d segundos\n", minutes, minutes * 60);
        break;
    case 2:
        printf("%d minutos = %.2f horas\n", minutes, minutes / 60.0);
        break;
    default:
        printf("Opcao invalida!\n");
        break;
    }
}

void convert_hours(int hours)
{
    int choice;
    printf("Escolha a unidade para conversao:\n");
    printf("1 - Converter para minutos\n");
    printf("2 - Converter para segundos\n");
    printf("Digite sua opcao: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("%d horas = %d minutos\n", hours, hours * 60);
        break;
    case 2:
        printf("%d horas = %d segundos\n", hours, hours * 3600);
        break;
    default:
        printf("Opcao invalida!\n");
        break;
    }
}

int timeConverter()
{
    int option;
    while (1)
    {
        printf("\nEscolha a conversao desejada:\n");
        printf("1 - Converter segundos\n");
        printf("2 - Converter minutos\n");
        printf("3 - Converter horas\n");
        printf("4 - Sair\n");
        printf("Digite sua opcao: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
        {
            int seconds;
            printf("Digite o numero de segundos: ");
            scanf("%d", &seconds);
            convert_seconds(seconds);
            break;
        }
        case 2:
        {
            int minutes;
            printf("Digite o numero de minutos: ");
            scanf("%d", &minutes);
            convert_minutes(minutes);
            break;
        }
        case 3:
        {
            double hours;
            printf("Digite o numero de horas: ");
            scanf("%lf", &hours);
            convert_hours(hours);
            break;
        }
        case 4:
            printf("Saindo...\n");
            return 0;
        default:
            printf("Opcao invalida! Tente novamente.\n");
            break;
        }
    }

    return 0;
}
