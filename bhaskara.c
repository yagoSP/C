#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
	int a, b, c, delta, bsk, x1, x2;
//Input de valores
  printf("Digite o valor de [a]:\t");
	scanf("%d", &a);
	printf("Digite o valor de [b]:\t");
	scanf("%d", &b);
	printf("Digite o valor de [c]:\t");
	scanf("%d", &c);
	//Parte Matemática
	delta = pow(b,2)-4*(a*c);
	x1 = (-b) + sqrt(delta);
	x2 = (-b) - sqrt(delta);
	if(delta < 0){
	       printf("A equaçao nao tem raizes reais!");
	}else{
  //Resultado das raizes
	printf("X1 = %d\n", x1/2*a);
	printf("X2 = %d", x2/2*a);
	}
	return 0;
}
//Criado por YagoSP 19/02/2022 21:24
//Formula de Bháskara [X = (-b +- sqrt(delta)) / (2*a)]
