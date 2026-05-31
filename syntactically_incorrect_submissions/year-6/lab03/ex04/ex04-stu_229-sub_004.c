
#include <stdio.h>

int spc(int c);
int nonzero(int c);
enum state{
    FORA,
    DENTRO,
    INI
};

int main()
{
    int c;
    enum state st = FORA;
    while((c = getchar())!= EOF){
        switch(st){
            case FORA:
                if(nonzero(c)){
                    st = DENTRO;
                    putchar(c);
                } else if(c == '0'){
                    st = INI;
                } else putchar(c);
                break;
            case INI:
                if(spc(c)){
                    st = FORA;
                    putchar('o');
                    putchar(c);
                } else if (nonzero(c)){
                    st = DENTRO;
                    putchar(c);
                }
                break;
            case DENTRO:
                if(spc(c))
                    st = FORA;
                putchar(c);
                break;
        }
    }
    if(st = INI) putchar('0');
    return 0;
}

int nonzero(int c){
    return '1'<= c && c <= '9';
}

int spc(int c){
    return c == ' ' || c == '\n' || c == EOF;
}