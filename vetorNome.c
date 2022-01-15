#include <stdio.h>
int main(void){
    int blc;
    char met[10][50] = {
        "Chorelis",
        "Thiago",
        "Samuel",
        "Jack",
        "James",
        "Alice",
        "Kirk", 
        "Lars",
        "Jason",
        "Trujillo",
        "Cliff",
        "Edward"
    };
    printf("Digite o valor do bloco:\t");
    scanf("%d", &blc);
    printf("%s\n", met[blc]);
    return 0;
}
/*
(Linha 5) {O primeiro valor entre colchetes é o tamanho da string.
O segundo valor entre colchetes é a quantidade de "blocos" que o vetor tem.}
[Criado por YagoSP 11/01/2022 (21:55)]
