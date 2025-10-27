
#include <stdio.h>

void operar(int ac, int novo_int);

int main(){
    int c, acumulador = 0, novo_int = 0;

    
    int operacao = 0;

    while ((c = getchar()) != '\n'){
        
        if (c == '+'){
            operacao = 1;
        } else if (c == '-'){
            operacao = 2;
        } else  if (c == ' '){
            
            if (operacao==1)
                acumulador += novo_int;
            else if (operacao==2)
                acumulador -= novo_int;
            
            else acumulador = novo_int;
            novo_int = 0;
        } else {
            
            novo_int = novo_int * 10 + c - '0';
        }
    };
    
    
    if (operacao==1)
        acumulador += novo_int;
    else if (operacao==2)
        acumulador -= novo_int;

    printf("%d\n", acumulador);

    return 0;
}
