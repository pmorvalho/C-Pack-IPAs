
#include <stdio.h>
#define FORA 0
#define DENTRO 1

int main(){
    int c, estado=FORA,barra=FORA;
    while((c=getchar())!=EOF){
        if(estado){
            if(barra){
                putchar(c);
                barra=FORA;
            }
            else if(c== '\\'){
                barra=DENTRO;
            }
            else if(c== '"'){
                estado=FORA;
                printf("\n");
            }
            else
                putchar(c);
        }
        else if(c== '"')
            estado=DENTRO;
    }
    return 0;
}