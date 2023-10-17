
#include <stdio.h>
#define FORA 0
#define DENTRO 1
int main(){
    char c, last = ' ';
    int estado = FORA;
    while ((c = getchar()) != EOF && c != '\n'){
        if (c >= '1' && c <= '9')
            estado = DENTRO;
        else if (c != '0'){
            if (estado == FORA && last == '0')
                putchar('0');
            estado = FORA;
        }
        if ((estado = DENTRO) || (estado = FORA && c != '0'))
            putchar(c);
        last = c;
    }
    return 0;
}