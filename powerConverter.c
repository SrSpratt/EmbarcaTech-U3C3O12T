#include "PowerConverter.h"
#include <stdio.h>

// Implementação das funções de conversão
float WattToKilowatt(float watt) {
    return watt / 1000;
}

float WattToHorsepower(float watt) {
    return watt / 735.5;
}

float KilowattToWatt(float kilowatt) {
    return kilowatt * 1000;
}

float KilowattToHorsepower(float kilowatt) {
    return kilowatt * (1000 / 735.5);
}

float HorsepowerToWatt(float horsepower) {
    return horsepower * 735.5;
}

float HorsepowerToKilowatt(float horsepower) {
    return (horsepower * 735.5) / 1000;
}

// Função principal do conversor
void PowerConverter() {
    int option;
    float inputValue, result;

    do {
        printf("\n=== Power Unit Converter ===\n");
        printf("1 - Watts to Kilowatts\n");
        printf("2 - Watts to Horsepower\n");
        printf("3 - Kilowatts to Watts\n");
        printf("4 - Kilowatts to Horsepower\n");
        printf("5 - Horsepower to Watts\n");
        printf("6 - Horsepower to Kilowatts\n");
        printf("7 - Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Enter the value in Watts: ");
                scanf("%f", &inputValue);
                result = WattToKilowatt(inputValue);
                printf("%.2f W = %.2f kW\n", inputValue, result);
                break;
            case 2:
                printf("Enter the value in Watts: ");
                scanf("%f", &inputValue);
                result = WattToHorsepower(inputValue);
                printf("%.2f W = %.2f HP\n", inputValue, result);
                break;
            case 3:
                printf("Enter the value in Kilowatts: ");
                scanf("%f", &inputValue);
                result = KilowattToWatt(inputValue);
                printf("%.2f kW = %.2f W\n", inputValue, result);
                break;
            case 4:
                printf("Enter the value in Kilowatts: ");
                scanf("%f", &inputValue);
                result = KilowattToHorsepower(inputValue);
                printf("%.2f kW = %.2f HP\n", inputValue, result);
                break;
            case 5:
                printf("Enter the value in Horsepower: ");
                scanf("%f", &inputValue);
                result = HorsepowerToWatt(inputValue);
                printf("%.2f HP = %.2f W\n", inputValue, result);
                break;
            case 6:
                printf("Enter the value in Horsepower: ");
                scanf("%f", &inputValue);
                result = HorsepowerToKilowatt(inputValue);
                printf("%.2f HP = %.2f kW\n", inputValue, result);
                break;
            case 7:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
    } while (option != 7);
}
