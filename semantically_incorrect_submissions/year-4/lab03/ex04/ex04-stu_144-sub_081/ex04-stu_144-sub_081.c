

#include <stdio.h>
#include <assert.h>

enum all_states { FORA, DENTRO, ZERO};

int spaces(char c) { return  c == ' ' || c == '\n' || c == EOF; }   
int nonzero(char c) { return c > '0' && c<= '9' ; }     

int main(){

    enum all_states state = FORA;
    int current;
    int temp;

    while((current = getchar()) != EOF){
        temp = current;
        
        if(state == FORA){
            if(nonzero(current)){
                state = DENTRO;
                putchar(current);
            }
            else if(current == '0') state = ZERO;
            else putchar(current);
        }
        else if (state == DENTRO) {
            if(spaces(current)){
                state = FORA;
                putchar(current);
            }
            else if(nonzero(current)){
                putchar(current);
            } 
            else if(current == '0'){
                putchar(current);
            }
        }
        else if(state == ZERO){
            if(nonzero(current)){
                state = DENTRO;
                putchar(current);
            }
            else if (spaces(current)){
                state = FORA;
                putchar('0');
                putchar(current);
            }
        }
    }
    putchar(temp);
    putchar('\n');

    return 0;

}

