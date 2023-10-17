

#include <stdio.h>
#define FORA 0
#define DENTRO 1
int main(){
    int estado = FORA;
    char c, last;

    last = ' ';
    while ((c = getchar()) != EOF) {
        if (estado == FORA){
            if (c=='"'){
                estado = DENTRO;
            }
        }
        else if (estado == DENTRO && c=='"'){
            if (last == '\\')
                putchar(c);
            else {
                putchar('\n');
                estado = FORA;
            }
                
        } 
        else if (estado == DENTRO && c == '\\'){
            if (last == '\\')
                putchar(c);
        }
        else
            putchar(c);
        last = c;
    }
    return 0;
}