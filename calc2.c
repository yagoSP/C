//Includes
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio2.h>
main(){
	int n1, n2, r0;
	char op;
	setlocale(LC_ALL, "Portuguese");
	printf("Calc 2.0\nOperadores + - * /\n\n");
	printf("Operador:\t");
	scanf("%c", &op);
	if(op != '+' && op != '-' && op != '*' && op != '/'){
		textbackground(4);
		textcolor(15);
		printf("Erro: Operação inválida!");
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
//Criado por YagoSP 19/09/2021 17:41
	
