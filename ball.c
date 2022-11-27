#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    int resp;
    char bres[10][64] = {
        "Sim",
        "Nao",
        "Faça isso agora!",
        "Pense mais sobre!",
        "Tente mais tarde!"
        }
    srand(time(NULL));
    resp = rand() % 5;
    printf("%s\n", bres[resp]);
    return 0;
}

/* Feito por YagoSP 27/11/2022 15:44 */

