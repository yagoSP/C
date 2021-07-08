#include <stdio.h>
main(){
  int t, m, r;
  printf("Tabuada");
  printf("Digite um numero:\t");
  scanf("%d", &t);
  for(m=0; m<=10; m++){
    r = t*m;
    printf("%d X %d = %d\n", t, m, r);
  }
  getch();
  return 0;
}
