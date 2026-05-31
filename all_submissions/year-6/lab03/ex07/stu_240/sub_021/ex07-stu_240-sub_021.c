
#include <stdio.h>
#define CONVERSAO '0'

int main(){
    int c, resultado = 0, numero_at = 0;
    char operador = '+';

    while ((c = getchar()) != EOF){
        if (c >= '0' && c <= '9'){
            numero_at = numero_at*10 + (c - CONVERSAO);
        }
        else if (c == '-' || c == '+' || c == '\n'){
            if (operador == '+'){
                resultado += numero_at;
            }
            else if (operador == '-'){
                resultado -= numero_at;
            }
            operador = c;
            numero_at = 0;
            if (c == '\n')
                printf("%d\n", resultado);
        }
        
    }
    
}