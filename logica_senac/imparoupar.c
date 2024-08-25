/*
 *  Crie um algoritmo para receber um número qualquer
 *  e imprimir na tela se o número é par ou ímpar,
 *  positivo ou negativo.
 */

// Includes
#include <stdio.h>

// Função Main
int main(void){
	
	// Declaração de variaveis
	int num;

	// Inserção de valores
	printf("Digite um numero: ");
	scanf("%d", &num);

	
	// Parte Lógica
	if(num % 2 == 0 && num > 0){
		printf("O numero e par positivo!\n");
	}
	else{
		if(num % 2 == 0 && num < 0){
			printf("o numero e par negativo!\n");
		}
		else{
			if(num % 2 != 0 && num > 0){
				printf("O numero e impar e positivo!\n");
			}
			else{
				if(num % 2 != 0 && num < 0){
					printf("O numero e impar e negativo!\n");
				}
				else{
					printf("NULL\n");
				}
			}
		}
	}

	return 0;
}	
				
// Criado por YagoSP 25/08/2024 11:40
