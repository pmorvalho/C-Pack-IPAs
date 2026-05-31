
#include <stdio.h>
#define FORA 0
#define DENTRO 1   
#define INI 2

int nonzero(int c) {
    return '1' <= c && c<='9';
}
int spc(int c) {
    return c == ' ' || c=='\n' || c==EOF;
}

int main() {
    int c, state=FORA;
    while ((c=getchar()) != EOF){
        switch(state){
            case FORA:
                if (nonzero(c)){
                    state=DENTRO;
                    putchar(c);
                }else if(c == '0'){
                    state=INI;
                }else{
                  putchar(c);
                }
                break;
            case INI:
                if (spc(c)){
                    state=FORA;
                    putchar('0');
                    putchar('c');
                }else if(nonzero(c)){
                    state = DENTRO;
                    putchat(c);
                }
                break;
            case DENTRO:
            if(spc(c)) state=FORA;
            putchar(c);
            break;
        }
    }
    if (state==INI) putchar('0');
    return 0;
}


