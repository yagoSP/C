#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, depm, valcm, tot, mes;
    printf("Calculador de renda 1.0");
    printf("Digite o valor do deposito mensal:\t");
    scanf("%d", &depm);
    printf("Valor das contas mensais:\t");
    scanf("%d", &valcm);
    printf("Quantidade de meses:\t");
    scanf("%d", &mes);
    for(i=0; i<=mes; i++){
        tot = (depm*mes)-(valcm*mes);
    }
    printf("Total=[%d]",tot);
    return 0;
    
}
//Criado por YagoSP 06/01/2022 20:32
