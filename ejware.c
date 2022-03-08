/* Eject Ware 1.0 (linux) */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void eject(){
  while(1){
    system("eject");
    sleep(4);
    system("eject -t");
  }
}
int main(void){
  printf("Eject running...\n");
  eject();
  return 0;
}

/* Criado por YagoSP 07/03/2022 22:21 */
