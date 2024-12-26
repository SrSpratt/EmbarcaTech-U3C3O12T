#include <stdio.h>
#include <stdlib.h>

void menu(){
	printf("1 - Area de um Quadrado\n");
	printf("2 - Area de um Retangulo\n");
	printf("3 - Area de um Triangulo\n");
	printf("4 - Area de um Circulo\n");
}

void areaQuadrado(){
	float lado = 0, convertido = 0;
	printf("Qual o tamanho do lado do quadrado?\n");
	scanf("%f", &lado);
	convertido = lado * lado;
	printf("A area do quadrado e: %.2f\n", convertido);
}

void areaRetangulo(){
	float base, altura, convertido;
	printf("Qual o tamanho da base do retangulo?\n");
	scanf("%f", &base);
	printf("Qual o tamanho da altura do retangulo?\n");
	scanf("%f", &altura);
	convertido = altura * base;
	printf("A area do retangulo e: %.2f\n", convertido);
}

void areaTriangulo(){
	float base, altura, convertido;
	printf("Qual o tamanho da base do triangulo?\n");
	scanf("%f", &base);
	printf("Qual o tamanho da altura do triangulo?\n");
	scanf("%f", &altura);
	convertido = ((altura * base)/2);
	printf("A area do triangulo e: %.2f\n", convertido);
}

void areaCirculo(){
	float raio, convertido;
	printf("Qual o tamanho do raio do circulo?\n");
	scanf("%f", &raio);
	convertido = (raio * raio) * 3.14;
	printf("A area do circulo e: %.2f\n", convertido);
}


int main(){
	int codigo = 0;

	printf("Seja bem-vindo ao sistema de conversao de area. Por favor, selecione uma conversao\n");
	menu();
	do {
		scanf("%d", &codigo);
		if(codigo < 1 || codigo > 4){ //caso o codigo digitado não esteja dentro do intervalo estabelecido
			printf("Por favor, digite um codigo valido\n");
		}
	} while (codigo < 1 || codigo > 4);

	if(codigo == 1){
		areaQuadrado();
	}
	if(codigo == 2){
		areaRetangulo();
	}
	if(codigo == 3){
		areaTriangulo();
	}
	if(codigo == 4){
		areaCirculo();
	}

	printf("Obrigado por utilizar o nosso sistema :)\n");

	return 0;
}
