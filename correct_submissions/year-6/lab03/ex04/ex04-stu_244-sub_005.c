
#include <stdio.h>
#define DENTRO 0
#define FORA 1
#define NUM 100

int main(){
    int c, estado= FORA;
    while((c =getchar())!=EOF){
        if (estado == FORA){
            if (c == '0')
                estado = DENTRO;
            else if (c > '0' && c <= '9'){
                estado = NUM;
                putchar(c);
            }
            else
                putchar(c);
        }
        else if (estado==DENTRO){
            if (c == '0') {
            }
            else if (c > '0' && c <= '9'){
                estado=NUM;
                putchar(c);
            }
            else {
                putchar('0'); 
                putchar(c);   
                estado = FORA;
            }    
        }
        else if (estado == NUM){
            if (c >= '0' && c <= '9'){
                putchar(c);
            }
            else {
                estado=FORA;
                putchar(c);
            }
        }    
    }
    if (estado == DENTRO) {
        putchar('0');
    }
    return 0;
}