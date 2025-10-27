
#include <stdio.h>

#define FORA 0
#define DENTRO 1
#define SIM 2
#define NAO 3

int main(){
    int c, estado = FORA, barra = NAO, soma = 0;
    while((c = getchar()) != EOF){
        if(estado == DENTRO){
            if(barra == SIM){
                putchar(c);
                soma++;
                barra = NAO;
            }
            else if(c == '\\')
                barra = SIM;
            else if(c == '"'){
                estado = FORA;
                printf("\n");
            }
            else{
                putchar(c);
                soma++;
            }
        }
        else if(c == '"'){
            estado = DENTRO;
        }
    }
}