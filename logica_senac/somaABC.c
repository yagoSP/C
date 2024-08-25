/*
 *  Faça um algoritmo que leia os valores de A, B C 	     
 *  e em seguida imprima na tela a soma entre A e B e mostre 
 *  se a soma é menor que C.                                 
 */

// Includes
#include <stdio.h>

int main(void){
	
	// Declaração de variáveis
	int a, b, c, resultSum;
	
	// Inserção de valores
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);

	printf("Digite o valor de B: ");
	scanf("%d", &b);

	printf("Digite o valor de C: ");
	scanf("%d", &c);

	// Parte Lógica
	
	resultSum = a + b;
	if(resultSum > c){
		printf("%d e maior que %d!\n", resultSum, c);
	}
	else{
		printf("%d e menor que %d!\n", resultSum, c);
	}
	
	// Final
	return 0;
}
// Criado por YagoSP 24/08/2024 15:19
