
#include <stdio.h>
#define NEUTRO 2 
#define SOMA 1
#define SUB 0

int main(){

    int c = getchar(), soma = 0, num = 0, estado;
    estado = NEUTRO;

    while (c!= '\n' && c != '\0' && c != EOF){
        
        if( c >= '0' && c <= '9')
            num = num * 10 + c -'0';

        if (estado == NEUTRO && c == ' ')
            soma = num;

        if (c == '+')
            estado = SOMA;

        if (c == '-')
            estado = SUB;

        if (c == ' ' && estado == SOMA){
            soma += num;
            num = 0; 
        }
        
        if (c == ' ' && estado == SUB){
            soma -= num;
            num = 0;
        }
       
        c = getchar(); 
    }
    
    printf("%d\n", soma);

    return 0;
}

