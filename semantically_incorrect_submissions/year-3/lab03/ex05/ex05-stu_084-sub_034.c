
#include <stdio.h>
#define DENTRO 1
#define FORA 0


int main(){
    int c, estado, backslash;

    estado = FORA;
    backslash = FORA;

    while((c = getchar()) != EOF){
        if(c == '"' && estado == FORA){
            estado = DENTRO;
            continue;
        }
        else if(c == ' ' && estado == FORA){
            printf("\n");
            continue;
        }
        else if(c == '"' && estado == DENTRO && backslash == FORA){
            estado = FORA;
            continue;
        }
        else if(c == '\\' && backslash == FORA){
            backslash = DENTRO;
            continue;
        }
        else if(backslash == DENTRO){
            backslash = FORA;
            putchar(c);
            continue;
        }
        else{
            putchar(c);
        }
    }
    return 0;
}