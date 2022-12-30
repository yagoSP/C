/* this code was writed by YagoSP [02:17 || 30/12/2022] */
#include <stdio.h>
#include <stdlib.h>
#include <locate.h>
#include <wchar.h>
#include <time.h>
#include <unistd.h>
int main(void){
    char hiragana[64][64]={
        "ぁ","ぃ","ぅ","ぇ","ぉ",
        "か","き","く","け","こ",
        "さ","し","す","せ","そ",
        "た","ち","っ","て","と",
        "な","に","ぬ","ね","の",
        "は","ひ","ふ","へ","ほ",
        "ま","み","む","め","も",
        "ゃ","ゅ","ょ",
        "ら","り","る","れ","ろ",
        "わ","を","ん"
        };
    srand(time(NULL));
    while(1){
        int i = rand() % 46;
        printf("%s\n", hiragana[i]);
        sleep(2);
    };
    return 0;
}
    
