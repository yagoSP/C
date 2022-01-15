/*   Código em desenvolvimento!   */ 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rando(){
    int score, random, ask, qnt, count; //Declaração de variáveis;
    srand(time(NULL));
    random = 10; //Valor simulando o rand();.
    score = 0; // Valor inicial do score.
    printf("Quantas vezes quer jogar:\t");
    scanf("%d", &qnt);
    for(count=1; count<=qnt; count++){ //For para a quantidade de jogadas.
        printf(">_:\t");
        scanf("%d", &ask);
        if(ask == random){
            score++;
        }
        if(ask != random){ //if para a perca de pontos.
            score = score -1;
        }
    }
    printf("%d", score);
    
}

int main(void){ //Função main
    rando();
    return 0;
}
//Beta criada por YagoSP 15/01/2022 (01:04)
