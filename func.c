#include <stdio.h>
#include <stdlib.h>
void func(){
    int a, b, c;
    printf("O programa vai fazer a subtraçao entre o valor a & b!\n\n");
    printf("Digite o valor [a]:\t");
    scanf("%d", &a);
    printf("Digite o valor [b]:\t");
    scanf("%d", &b);
    c=a-b;
    printf("\n\n");
    printf("O valor da subtraçao entre %d e %d é %d\n", a,b,c);
    if(c<0){
        printf("%d e um numero negativo!", c);
        
    }
}
int main(){
    func();
    return 0;
}
