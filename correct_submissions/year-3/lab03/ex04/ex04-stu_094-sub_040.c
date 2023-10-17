

#include <stdio.h>

int nonzero(int c){
    return c >= '1' && c <= '9';
}

int spc(int c) {
    return c == ' ' || c == '\n' || c == EOF;
}

enum state {FORA, INICIO, DENTRO};

int main () {

    enum state st = FORA;
    int current;

    while ((current = getchar()) != EOF) {
        switch(st) {
            case FORA:
                if (nonzero(current)) {
                    putchar(current);
                    st = DENTRO;
                }
                else if (current == '0')
                    st = INICIO;
                else
                    putchar(current);
                break;
            case INICIO:
                if (spc(current)) {
                    putchar('0');
                    putchar(current);
                    st = FORA;
                }
                else if (nonzero(current)) {
                    putchar(current);
                    st = DENTRO;
                }
                break;
            case DENTRO:
                putchar(current);
                if (spc(current)) 
                    st = FORA;
                break;
        }
    }
    if (st == INICIO)
        putchar('0');
    return 0;
}
