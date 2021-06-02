#include <stdio.h>
#include <math.h>
main () {
  int ctt1, ctt2, rzq, som;
  system("title Teorema de Pitagoras");
  system("cls");
  printf("Digite o valor de um cateto:\t");
  scanf("%d", &ctt1);
  printf("Digite o valor do outro cateto:\t");
  scanf("%d", &ctt2);
  som = (ctt1*ctt1)+(ctt2*ctt2);
  rzq = sqrt(som);
  printf("O resultado do teorema e:\t%d", rzq);
  getch();
}
/* Criado por yagoSP ... 02/06/2021 */
