#include <stdio.h>
#include <stdlib.h>
#define pmc 0.10
#define jrc 0.16
int main(){
  int mes, f;
  float si, sap, sf, jr, pm;
  printf("Mes:\t");
  scanf("%d", &mes);
  printf("Saldo Inicial:\t");
  scanf("%f", &si);
  for(f=1; f<=mes; f++){
    pm = si * pmc;
    sap = si - pm;
    jr = sap * jrc;
    sf = sap + jr;
    printf("%d\t %f, %f, %f, %f, %f\n", f, si, pm, sap, jr, sf);
    si = sf;
  }
  return 0;
}
//Criado por YagoSP 22/11/2021 
//21:40
