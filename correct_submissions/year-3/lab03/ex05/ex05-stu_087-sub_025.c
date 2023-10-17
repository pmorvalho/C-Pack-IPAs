
#include <stdio.h>

int quotes(int c){
    return c == '\"';
}

int backslash(int c){
    return c == '\\';
}

enum state{
    FORA,
    SPECIAL,
    DENTRO
};

int main(){

    enum state st = FORA;
    int current;

    while ((current = getchar()) != EOF){

        switch (st){

        case FORA:
            if (quotes(current)){
                st = DENTRO;
            }
        break;

        case DENTRO:
            if(quotes(current)){
                st = FORA;
                putchar('\n');
            }else if(backslash(current)){
                st = SPECIAL;
            }else{
                putchar(current);
            }
        break;

        case SPECIAL:
            putchar(current);
            st = DENTRO;

        }

    }
    return 0;
}