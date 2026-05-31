
#include <stdio.h>

int spc(int c);
int aspas(int c);
int barra(int c);
int letra(int c);

enum state{
    FORA,
    DENTRO,
    BARRA
};

int main() {
    int c;
    enum state st = FORA;
    while((c = getchar()) != EOF) {
        switch(st) {
            case FORA:
                if(aspas(c))
                    st = DENTRO;
                break;
            case BARRA:
                putchar(c);
                st = DENTRO;
                break;
            case DENTRO:
                if(barra(c))
                    st = BARRA;
                else if(aspas(c)) {
                    putchar('\n');
                    st = FORA;
                }else if (letra(c) || spc(c)) 
                    putchar(c);
                break;
        }
    }
    return 0;
}


int aspas(int c) {
    return c == '\"';
}

int letra(int c) {
    return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') ;
}
int spc(int c) {
    return (c == ' ')|| (c == '\n') || (c == EOF);
}

int barra(int c) {
    return c == '\\';
}