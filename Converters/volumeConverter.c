#include <stdio.h>
#include <stdlib.h>

void menuVolume(){
	printf("1 - Mililitro para Litro\n");
	printf("2 - Mililitro para Hectolitro\n");
	printf("3 - Litro para Mililitro\n");
	printf("4 - Litro para Hectolitro\n");
	printf("5 - Hectolitro para Mililitro\n");
	printf("6 - Hectolitro para Litro\n");
	printf("0 - Caso queira finalizar o sistema\n");
}

void mlLitro(){
	float mililitros, litros;
	printf("Quantos mililitros deseja converter?\n");
	scanf("%f", &mililitros);
	litros = mililitros / 1000;
	printf("%.4f mililitros resultam em %.4f litros\n", mililitros, litros);
}

void mlHectolitro(){
	float mililitros, hectolitros;
	printf("Quantos mililitros deseja converter?\n");
	scanf("%f", &mililitros);
	hectolitros = mililitros / 100000;
	printf("%.4f mililitros resultam em %.4f hectolitros\n", mililitros, hectolitros);
}

void lMililitro(){
	float litros, mililitros;
	printf("Quantos litros deseja converter?\n");
	scanf("%f", &litros);
	mililitros = litros * 1000;
	printf("%.4f litros resultam em %.4f mililitros\n", litros, mililitros);
}

void lHectolitro(){
	float litros, hectolitros;
	printf("Quantos litros deseja converter?\n");
	scanf("%f", &litros);
	hectolitros = litros / 100;
	printf("%.4f litros resultam em %.4f hectolitros\n", litros, hectolitros);
}

void hlMililitro(){
	float hectolitros, mililitros;
	printf("Quantos hectolitros deseja converter?\n");
	scanf("%f", &hectolitros);
	mililitros = hectolitros * 100000;
	printf("%.4f hectolitros resultam em %.4f mililitros\n", hectolitros, mililitros);
}

void hlLitro(){
	float hectolitros, litros;
	printf("Quantos hectolitros deseja converter?\n");
	scanf("%f", &hectolitros);
	litros = hectolitros * 100;
	printf("%.4f hectolitros resultam em %.4f litros\n", hectolitros, litros);
}

int volumeConverter(){
	int codigo = 0, desejo = 0;

	printf("Seja bem-vindo ao sistema de conversão de volume! Sinta-se a vontade para utilizar uma das opções.\n");
	
	do{
		menuVolume();
		scanf("%d", &codigo);

			switch(codigo){
			case 1:{
				mlLitro();
				break;
			}
			case 2:{
				mlHectolitro();
				break;
			}
			case 3:{
				lMililitro();
				break;
			}
			case 4:{
				lHectolitro();
				break;
			}
			case 5:{
				hlMililitro();
				break;
				}
			case 6:{
				hlLitro();
				break;
			}
			case 0:{
				continue;
			}
			default:{
				break;
			}
		}
		if(codigo < 0 || codigo > 6){
			printf("Digite uma opcao existente\n");
		} else {
			printf("Você deseja converter outra vez? Se sim, digite qualquer numero diferente de 0\n");
			scanf("%d", &desejo);
			if(desejo != 0){
				printf("Vamos outra vez então!\n");
			} else {
				break;
			}
			break;}
	} while(desejo != 0);

	printf("Obrigado por utilizar nosso sistema :)\n");

	return 0;
}
