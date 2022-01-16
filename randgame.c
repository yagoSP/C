/*   Código em desenvolvimento!   */ 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rando(){
    int score, randomi, ask, qnt, count; //Declaração de variáveis;
    srand(time(NULL));
    randomi = rand() % 10; //Valor simulando o rand();.
    score = 0; // Valor inicial do score.
    printf("Quantas vezes quer jogar:\t");
    scanf("%d", &qnt);
    for(count=1; count<=qnt; count++){ //For para a quantidade de jogadas.
        printf(">_:\t");
        scanf("%d", &ask);
        if(ask == randomi){
            score++;
            printf("+1 score\n");
        }
        if(ask != randomi){ //if para a perca de pontos.
            score = score +1 -1;
        }
    }
    printf("%d", score);
    
}
int main(void){
    rando();
    return 0;
}
//Alfa criada por YagoSP 15/01/2022 (01:04)
//Beta 16/01/2022 15:46
