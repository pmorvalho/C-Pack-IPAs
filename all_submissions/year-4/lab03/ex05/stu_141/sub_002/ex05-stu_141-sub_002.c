
#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main(){
    int c, estado = FORA;
    char last = ' ';

    while ((c = getchar()) != EOF){
        if (c == '"' && last != '\\' && estado == FORA){
           estado = DENTRO;
        }
        else if (estado == DENTRO){
            if (c == '"' && last != '\\'){
                estado = FORA;
                putchar('\n');
            }
            else if (c == '\\' && last != '\\'){}
            else{
                putchar(c);
            }
        }
        last = c;
    }

    return 0;
}