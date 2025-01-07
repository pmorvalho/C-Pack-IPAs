



#include <stdio.h>

int main(){
    enum state{DENTRO = 1, FORA = 0};
    int c, state;
    state = FORA;

    while((c = getchar()) != EOF || (c = getchar()) != '\n'){ 
        if ( c >= '1' && c <= '9') state = DENTRO, putchar(c);
        else if(state == DENTRO && c == ' ') putchar(c), state = FORA; 
    }
    return 0;
}//