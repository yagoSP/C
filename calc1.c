#include <stdio.h> 
#include <stdlib.h>
#include <conio2.h>
#include <locale.h>
main(){
	char op, vop;
	int n1,n2,r0;
	setlocale(LC_ALL, "Portuguese");
	vop = '+', '-', '/', '*';
	printf("Calculadora 1.0\n[Operadores '+' '-' '*' '/']\n\n");
	printf("Operador:\t");
	scanf("%c", &op);
	if(op != vop){
		textbackground(4);
		textcolor(15);
		printf("Erro: Operação Inválida!");
		getch();
		return 0;
	}
	printf("Numero:\t");
	scanf("%d", &n1);
	printf("Numero:\t");
	scanf("%d", &n2);
	switch(op){
		case '+':
			r0=n1+n2;
			printf("%d + %d = %d",n1,n2,r0);
			break;
		case '-':
			r0=n1-n2;
			printf("%d - %d = %d",n1,n2,r0);
			break;
		case '*':
			r0=n1*n2;
			printf("%d x %d = %d",n1,n2,r0);
			break;
		case '/':
			r0=n1/n2;
			printf("%d / %d = %d",n1,n2,r0);
			break;
		}
		getch();
		return 0;
}
//Criado por YagoSP 19/09/2021 11:56
			
