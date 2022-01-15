#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    char ifse;
    char met[20][10] = {
        "Cliff",
        "James",
        "Jason",
        "Trujillo",
        "Lars",
        "Kirk",
        
    };
    srand(time(NULL));
    int i = rand() % 6;
    
    printf("Quer descobrir um nome [y] || [n]:\t");
    scanf("%c", &ifse);
    if(ifse == 'y' || ifse == 'Y'){
        
        printf("Voce seria %s", met[i]);
        
    }
    else{
        printf("Ate uma outra hora!");
        return 0;
    }
    return 0;
}
//Criado por YagoSP 14/01/2022 23:55
