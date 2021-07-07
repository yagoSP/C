#include <stdio.h>
main(){
  char vet[10];
  int i;
  for(i=0; i<=4; i++){
    printf("VOGAL:\t");
    scanf("%s", &vet[i]);
  }
  system("cls");
  for(i=0; i<=4; i++){
    printf("VOGAL [%c]\n", vet[i]);
  }
  getch();
  return 0;
}
//YagoSP 07/07/2021 15:55 PM
