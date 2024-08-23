#include <stdio.h>
int main(void){
    int v1, v2, v3;
    
    printf("v1: ");
    scanf("%d", &v1);
    
    printf("v2: ");
    scanf("%d", &v2);
    
    printf("v3: ");
    scanf("%d", &v3);
    
    if(v1 > v2 && v1 > v3){
        printf("v1 [v]");
    }
    else {
        if(v2 > v1 && v2 > v3){
            printf("v2 [v]");
            
        }
        else{
            if(v3 > v1 && v3 > v2){
                printf("v3 [v]");
                
            }
            else {
                printf("NULL");
            }
        }
    }
    return 0;
}

// SEX 23/08/2024 YagoSP SENAC Biblioteca 12:12
