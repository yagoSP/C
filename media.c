#include <stdio.h>
int main () {
  int b1, b2, b3, b4, som;
  float mf;
  printf("Digite o valor do primeiro bimestre:\t");
  scanf("%d", &b1);
  printf("Digite o valor do segundo bimestre:\t");
  scanf("%d", &b2);
  printf("Digite o valor do terceiro bimestre:\t");
  scanf("%d", &b3);
  printf("Digite o valor do quarto bimestre:\t");
  scanf("%d", &b4);
  som = (b1+b2+b3+b4);
  mf =  som / 4;
  system("cls");
  printf("SOMA TOTAL DA MEDIA \n BIMESTRE 1:\t%d \n BIMESTRE 2:\t%d \n BIMESTRE 3:\t%d \n BIMESTRE 4:\t%d \n MEDIA FINAL:\t%f", b1,b2,b3,b4,mf);
  getch();
  return 0;
}
