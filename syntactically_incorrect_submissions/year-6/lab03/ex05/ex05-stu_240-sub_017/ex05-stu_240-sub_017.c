
#include <stdio.h>
#define FORA 0
#define DENTRO 1
#define ESCAPE 2

int main(){
    int c, estado = FORA;
    while ((c = getchar()) != EOF){
        if (estado == FORA){
            if (c == '"'){
                estado = DENTRO;
            }
        }
        else if (estado = DENTRO){
            if (c == '"'){
                estado = FORA;
                putchar('\n');
            }
            else if (c == '\\'){
                estado = ESCAPE;
            }
            else{
                putchar(c);
            }
        }

        else if (estado == ESCAPE){
            putchar(c);
            estado = DENTRO;
        }
    }    
    return 0;
}