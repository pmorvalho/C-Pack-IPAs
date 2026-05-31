
#include <stdio.h>
#define DENTRO 0
#define FORA 1
#define NUM 100

int main(){
    int c, estado= FORA;
    c=getchar();
    while(c!=EOF){
        if (estado == FORA){
            if (c == '0'){
                estado = DENTRO;
                c =getchar();
            }
            else if (c > '0' && c <= '9'){
                estado = NUM;
                putchar(c);
                c =getchar();
            }
        }
        else if (estado==DENTRO){
            if (c == '0')
                c =getchar();
            else if (c > '0' && c <= '9'){
                estado=NUM;
                putchar(c);
                c =getchar();
            }
            else {
                printf("0 ");
                c =getchar();
            }    
        }
        else {
            if (c >= '0' && c <= '9'){
                putchar(c);
                c =getchar();
            }
            else {
                estado=FORA;
                printf(" ");
                c =getchar();
            }
        }
    }
    return 0;
}