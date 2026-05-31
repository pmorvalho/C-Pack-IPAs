
#include <stdio.h>

#define DENTRO 0
#define FORA 1
#define BARRA 2

int main(){
    int c, estado = FORA;
    
    c = getchar();  
    while (c != EOF){   
        if (estado == FORA){    
            if (c == '"')
                estado = DENTRO;    
        }
        else if (estado == DENTRO){
            if (c == '"'){ 
                estado = FORA;
                putchar('\n');
            }
            else if (c != '\\') 
 
                putchar(c);
            else{
                estado = BARRA;
            }
        }
        else{   
            putchar(c);
            estado = DENTRO;
        }
        c = getchar();  
        }
        return 0;
    }
