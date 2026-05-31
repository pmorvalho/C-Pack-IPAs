
#include <stdio.h>
#define DENTRO 0
#define FORA 1
#define BARRA 2

int main(){
    int c, estado=FORA;
    while((c=getchar())!=EOF){
        if (estado==FORA){
            if (c=='"')
                estado = DENTRO;
        }
        else if (estado==DENTRO){
            if (c=='"'){
                estado = FORA;
                putchar('\n');}
            else if (c=='\\')
                estado = BARRA;
            else
                putchar(c);
        }
        else{
            putchar(c);
            estado = DENTRO;
        }
    }
    return 0;
}