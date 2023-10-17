
#include <stdio.h>
#define DENTRO 1
#define FORA 0
#define IGNORA 1
#define SEGUE 0


int main(){
    int estado, barra;
    char c;
    estado = FORA;
    barra = SEGUE;
    while ((c = getchar()) != EOF){
        if(c == '"' && estado == DENTRO && barra == SEGUE){
            printf("\n");
            estado = FORA;
        }
        else if (c == '"' && estado == FORA)
            estado = DENTRO;
        else if(estado == DENTRO && c == '\\' && barra == SEGUE){
            barra = IGNORA;
        }
        else if(estado == DENTRO && barra == IGNORA){
            printf("%c", c);
            barra = SEGUE;
        }
        else if (estado == DENTRO)
            printf("%c", c);
    }
    return 0;
}