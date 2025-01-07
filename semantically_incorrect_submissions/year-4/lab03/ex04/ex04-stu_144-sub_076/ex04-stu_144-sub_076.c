

#include <stdio.h>
#include <assert.h>

enum all_states { FORA, DENTRO, ZERO};

int spaces(char c) { return  c == ' ' || c == '\n' || c == EOF; }   
int nonzero(char c) { return c > '0' && c<= '9' ; }     

int main(){

    enum all_states state = FORA;
    int current;

    while((current = getchar()) != EOF){
        
        
        if(state == FORA){
            if(nonzero(current)){
                putchar(current);
                state = DENTRO;
            }
            else if(current == '0') state = ZERO;
            else putchar(current);
        }
        else if (state == DENTRO) {
            if(spaces(current)){
                putchar(current);
                state = FORA;
            }
            else{
                putchar(current);
            } 
        }
        else if(state == ZERO){
            if(nonzero(current)){
                putchar(current);
                state = DENTRO;
            }
            else if (spaces(current)){
                state = FORA;
                putchar('0');
                putchar(current);
            }
        }
    }

    return 0;

}

