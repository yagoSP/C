/* this code was writed by YagoSP [02:17 || 30/12/2022] 
                 Edited by YagoSP [01:12 || 03/01/2023]*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void){
    char hiragana[64][64]={
        "ぁ= A","ぃ= I","ぅ= U","ぇ= E","ぉ= O",
	    "か= KA","き= KI","く= KU","け= KE","こ= KO",
	    "さ= SA","し= SHI","す= SU","せ= SE","そ= SO",
	    "た= TA","ち= CHI","っ= TSU","て= TE","と= TO",
	    "な= NA","に= NI","ぬ= NU","ね= NE","の= NO",
	    "は= HA","ひ= HI","ふ= FU","へ= HE","ほ= HO",
	    "ま= MA","み= MI","む= MU","め= ME","も= MO",
	    "ゃ= YA","ゅ= YU","ょ= YO",
	    "ら= RA","り= RI","る= RU","れ= RE","ろ = RO",
	    "わ= WA","を= o","ん= N"
        };
    int i;
    for(i=0; i<=46; i++){
        printf("%s\n", hiragana[i]);
        sleep(2);
    };
    return 0;
}
    
