/*
 *  Faça um algoritmo que leia dois valores inteiros A e B, se 
 *  os valores de A e B forem iguais, deverá somar os dois valores.
 */

// Includes
#include <stdio.h>

// Função Main
int main(void){
	
	// Declaração de variáveis
	int a, b, result;

	// Inserção de dados
	printf("Digite o valor de A: ");
	scanf("%d", &a);

	printf("Digite o valor de B: ");
	scanf("%d", &b);

	// Parte Lógica
	if(a == b){
		result = a + b;
		printf("%d + %d = %d [IGUAIS]\n", a, b, result);
	}
	else{
		printf("Os numeros são diferentes!\n");
	}
	return 0;
}

// Criado por YagoSP 26/08/2024 13:13
