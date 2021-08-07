#include <stdio.h>
#include <locale.h>
main(){
	int value;
	setlocale(LC_ALL, "Portuguese");
	printf("Valor do mes:\t");
	scanf("%d", &value);
	
	switch(value){
		case 1:
			printf("Janeiro");
			break;
		case 2:
			printf("Fevereiro");
			break;
		case 3:
			printf("Março");
			break;
		case 4:
			printf("Abril");
			break;
		case 5:
			printf("Maio");
			break;
		case 6:
			printf("Junho");
			break;
		case 7:
			printf("Julho");
			break;
		case 8:
			printf("Agosto");
			break;
		case 9:
			printf("Setembro");
			break;
		case 10:
			printf("Outubro");
			break;
		case 11:
			printf("Novembro");
			break;
		case 12:
			printf("Dezembro");
	}
  if(value > 12){
    printf("Mês Inexistente!");
  }
getch();
return 0;
}
//Criado por YagoSP 06/08/2021 21:41
