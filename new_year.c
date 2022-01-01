//Programa que imprime quantas vezes você quiser a mensagem "Feliz Ano Novo!"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
  int year, i;
  setlocale(LC_ALL, "Portuguese");
  printf("Digite qual ano está acabando:\t");
  scanf("%d", &year);
  for(i=0; i<=year; i++){
    printf("[%d] Adeus %d!\n", i, year);
  }
  return 0;
}
/* Adeus 2021! 
Criado por YagoSP // 31/12/2021 21:32
*/
