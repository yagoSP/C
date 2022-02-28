#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]){
  int i;
  for(i=0; i<=10; i++){
    if(strcmp(argv[i], "-a") == 0){
      printf("Hello\n");
      break;
    }
    if(strcmp(argv[i], "-b") == 0){
      printf("Option 2\n");
      break;
    }
  }
  return 0;
}
/* Este código pega argumentos direto da linha de comando!
(./argu <argumento>)
Criado por YagoSP 28/02/2022 19:42*/
