

#include <stdio.h>
#define DENTRO 1
#define FORA 0

int main(){

    int c, estado, anterior = 0;
    estado = FORA;

    c = getchar();
    while(c != EOF && c != '\n'){

        
        if ((c == '"'|| c =='\\') && estado == DENTRO && anterior == '\\'){
            putchar(c);
            anterior = 0;
        }  
        else if (c == '"' && estado == FORA){
            estado = DENTRO;
        }  
        else if (c == '"' && estado == DENTRO){
            estado = FORA;
            putchar('\n');
        }
        else if (estado == DENTRO && c == '\\' && anterior != '\\')
            anterior = c;
        else if (estado == DENTRO){
            putchar(c);
            anterior = c;
        } 
        c = getchar();    
    }
    
    return 0;
}