

#include <stdio.h>

#define FORA 1
#define ESC 2
#define DENTRO 3

int main(){
    int current;
    int state = FORA;

    while((current=getchar()) != EOF){
        if(state == FORA){
            if (current == '"')
            state = DENTRO ;
        }
        else if(state == DENTRO){
            if(current == '\')
            state =
        }
        
    }
}