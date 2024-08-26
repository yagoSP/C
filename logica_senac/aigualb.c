/*
 * Faça um algoritmo que leia os dois valores inteiros A e B,
 * se os valores de A e B forem iguais, deverá somar os dois valores,
 * caso contrário devera multiplicar A por B. Ao final de qualquer
 * um dos cálculos deve-se atribuir o resultado a uma variável C e imprimir
 * seu valor na tela.
 */

// Includes
#include <stdio.h>

// Função Main
int main(void){

	// Variáveis
	int a, b, c;

	// Inserção de dados
	printf("Digite o valor de A: ");
	scanf("%d", &a);

	printf("Digite o valor de B: ");
	scanf("%d", &b);

	// Parte Lógica
	if(a == b){
		c = a + b;
		printf("%d + %d = %d [IGUAIS]\n", a, b, c);
	}
	else{
		c = a * b;
		printf("%d x %d = %d [DIFERENTES]\n", a, b, c);
	}
	return 0;
}

// Criado por YagoSP 26/08/2024 13:27

