
#include <stdio.h>

#define FORA 0
#define DENTRO 1
#define ESCAPE 2

int main(){
    int c;
    int state = FORA;
    while((c = getchar()) != EOF && c != '\n'){
        switch(state){
            case FORA:
                if (c == 34) state = DENTRO;
                break;
            case DENTRO:
                if(c == '\\') state = ESCAPE;
                else if (c == 34){
                    putchar('\n');
                    state = FORA;
                } else {
                    putchar(c);
                }
                break;
            case ESCAPE:
                putchar(c);
                state = DENTRO;
                break;
                }
            }
    return 0;
}