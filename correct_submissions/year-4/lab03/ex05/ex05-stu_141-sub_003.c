
#include <stdio.h>

#define FORA 0
#define DENTRO 1
#define ON 2
#define OFF 3    
int main(){
    int c, estado = FORA, barra = OFF;

    while ((c = getchar()) != EOF){
        if (c == '"' && estado == FORA){
           estado = DENTRO;
        }
        else if (estado == DENTRO){
            if (barra == ON){
                putchar(c);
                barra = OFF;
            }
            else if (c == '"'){
                estado = FORA;
                putchar('\n');
            }
            else if (c == '\\' && barra == OFF){
                barra = ON;
            }
            else{
                putchar(c);
            }
        }
    }

    return 0;
}