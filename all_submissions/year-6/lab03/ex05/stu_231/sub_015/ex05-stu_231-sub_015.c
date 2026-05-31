
#include <stdio.h>
#define DENTRO 1
#define FORA 0
#define CHECK 2

int main(){
    int c, estado = FORA;
    while((c = getchar()) != EOF){
        if(estado == DENTRO){
            if(c == '\\')
                estado = CHECK;
            else if(c == '\"'){
                estado = FORA;
                printf("\n");
            }
            else
                putchar(c);
        }
        else if(estado == FORA){
            if(c == '\"')
                estado = DENTRO;
        }
        else{   
            putchar(c);
            estado = DENTRO;
        }

    } 
}