
#include <stdio.h>

int space(int c){
    return ((c == '\n') || (c == ' ') || (c == EOF));
}

int nonZero (int c){
    return ((c >= '1') && (c <= '9'));
}

enum state {
    FORA,
    INI,
    DENTRO
};

int main()
{
    enum state st = FORA;
    int current;

    while((current=getchar()) != EOF){

        switch(st){
            case FORA:
                if(nonZero(current)){
                    st = DENTRO;
                    putchar(current);
                } else if(current == '0'){
                    st = INI;
                } else{
                    putchar(current);
                }
            break;

            case INI:
                if(space(current)){
                    putchar('0');
                    putchar(current);
                    st = FORA;
                }else if(nonZero(current)){
                    putchar(current);
                    st = DENTRO;
                }
            break;

            case DENTRO:
                putchar(current);
                if(space(current)){
                    st = FORA;
                }
            break;
        }

    }

    if (st == INI)
        putchar('0');
    

    return 0;
}