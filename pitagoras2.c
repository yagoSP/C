#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
main(){
	int ct1, ct2, hipo, x;
	printf("Cateto 1:\t");
	scanf("%d", &ct1);
	printf("Cateto 2:\t");
	scanf("%d", &ct2);
	x = (pow(ct1,2))+(pow(ct2,2));
	hipo = sqrt(x);
	printf("%d^2", hipo);
	getch();
	return 0;
}
/* 
Alteração do código (pitagoras.c).
Inclusão da biblioteca <math.h>
Modificado por YagoSP
22/08/2021 [17:16]
