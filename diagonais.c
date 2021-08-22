#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int ndl, d;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a quantidade de lados que a forma tem:\t");
	scanf("%d", &ndl);
	system("cls");
	d = ndl*(ndl-3)/2;
	printf("Quantidade de Lados [%d]\nQuantidade de Diagonais [%d]", ndl, d);
	getch();
	return 0;
}
//Criado por YagoSP - 22/08/2021 [15:42]
