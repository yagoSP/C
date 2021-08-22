#include <stdio.h>
#include <stdlib.h>
#define d 4
main(){
	int l, c, p, v, q; //Largura, Comprimento, Profundidade, Volume e Quantidade de Cloro (Piscina)
	printf("Largura:\t");
	scanf("%d", &l);
	printf("Comprimento:\t");
	scanf("%d", &c);
	printf("Profundidade:\t");
	scanf("%d", &p);
	v = l*c*p;
	system("cls");
	printf("Volume = [%d] (Metros Cubicos)\n", v);
	q = d*v;
	printf("Coloque %d gramas de cloro na sua piscina!", q);
	getch();
	return 0;
}
/* Vídeo Aula de MSX Basic com o Prof Pierluigi Piazzi
Linguagem original = Basic
Alterado para C por YagoSP
22/08/2021 [13:31]
*/
