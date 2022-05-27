#include <stdio.h>

#define FORA 0
#define DENTRO 1


int main () {
    int c, last, estado;

    estado = FORA;
    last = ' ';
    while((c = getchar()) != EOF) {
        if(c>='1' && c<='9')
            estado = DENTRO;
        else if(c != '0') {
            if(estado==FORA && last == '0')
                putchar('0');
            estado = FORA;
        }
        if(estado == DENTRO || (estado == FORA && c!='0'))
            printf("%c", c);
        last = c;
    }
    return 0;
}