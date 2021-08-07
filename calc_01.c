#include <stdio.h>
#include <locale.h>
main(){
	int n1, n2, r0;
	char op;
	setlocale(LC_ALL, "Portuguese");
	printf("Calculadora 1.0\n\n");
	printf("Operadores válidos:\n[+] = Adição\n[-] = Subtração\n[*] = Multiplicação\n[/] = Divisão\n");
	printf("Digite um operador:\t");
	scanf("%s", &op);
	if(op != '+' && '-' && '*' && '/'){
		printf("Operação invalida!");
		getch();
		return 0;
	}
	printf("Digite um número:\t");
	scanf("%d", &n1);
	printf("Digite o outro número:\t");
	scanf("%d", &n2);
	switch(op){
		case '+':
			r0 = n1 + n2;
			printf("%d + %d = [%d]",n1, n2, r0);
			break;
		case '-':
			r0 = n1 - n2;
			printf("%d - %d = [%d]",n1, n2, r0);
			break;
		case '*':
			r0 = n1 * n2;
			printf("%d x %d = [%d]",n1, n2, r0);
			break;
		case '/':
			r0 = n1 / n2;
			printf("%d / %d = [%d]",n1, n2, r0);
			break;
	}
	getch();
	return 0;
}
//Criado por YagoSP 07/08/2021
