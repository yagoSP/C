/*   Montar um programa que faça uma varredura de pings através do IPV4 (uma espécie de bruteforce) */
// V 1.0.0
#include <stdio.h>
#include <stdlib.h>
int main(void){
        int octt[4];
        int i;
        for(octt[i]=0; octt[i]<=255; octt[i]++){
                if(octt[i] == 255){
                        i+1;
                };
                printf("[0] %d\n", octt[i]);
 
        };
        for(octt[i]=0; octt[i]<=255; octt[i]++){
                printf("[1] %d\n", octt[i]);
                if(octt[i] == 255){
                        i+1;
                };
        };
 
        for(octt[i]=0; octt[i]<=255; octt[i]++){
                printf("[2] %d\n", octt[i]);
                if(octt[i] == 255){
                        i+1;
                };
        };
 
        for(octt[i]=0; octt[i]<=255; octt[i]++){
                printf("[3] %d\n", octt[i]);
        };
 
        //printf("%d", octt[0]);
        return 0;
}
 
