#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c, delta;
    printf("Calculador de Delta\nFormula: Delta = b^2-4*a*c\n");
    //input de valores
    printf("Coloque o valor de [b]:\t");
    scanf("%d", &b);
    printf("Coloque o valor de [a]:\t");
    scanf("%d", &a);
    printf("Coloque o valor de [c]:\t");
    scanf("%d", &c);
    //matemática e printf
    delta = (pow(b,2))-4*(a*c);
    printf("%d", delta);
    //end 
    return 0;
}
//Criado por YagoSP 13/11/2021 [15:42]
