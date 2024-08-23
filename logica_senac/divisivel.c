#include <stdio.h>
int main(void){
    int v1, v2;
    
    printf("v1: ");
    scanf("%d", &v1);
    
    printf("v2: ");
    scanf("%d", &v2);
    
    if(v1 % v2 == 0){
        printf("v1 divisivel por v2!");
    }
    else {
        printf("v1 nao divisivel por v2");
    }
    return 0;
} 
// YagoSP  23/08/2024 12:32 Biblioteca Senac
