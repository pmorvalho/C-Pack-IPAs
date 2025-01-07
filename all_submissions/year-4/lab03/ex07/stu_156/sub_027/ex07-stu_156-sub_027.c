
#include <stdio.h>
#define ZERO '0'
#define ADICAO 1
#define SUBTRACAO 2
#define SEMOPERDADOR 0

int main(void) {
    int c,digit;
    int op = ADICAO;
    long number = 0;
    int total = 0;
    

    while( (c = getchar()) != '\n'){
        if( c >= '0' && c <= '9'){
            digit = c - '0';
            number = digit + (number * 10);
        }
        else if(op == ADICAO){ 
            total += number;
            op = SEMOPERDADOR;
            number = 0;
        }
        else if(op == SUBTRACAO){
            total -= number;
            op = SEMOPERDADOR;
            number = 0;
        }
        else if(c == '+'){
            op = ADICAO;
            getchar(); 
            
        }
        else if(c == '-'){
            op = SUBTRACAO;
            getchar(); 
        }
    }
    if(op == ADICAO){ 
            total += number;
        }
    else{
        total -= number;
        }
    printf("%d\n",total);

    return 0;
}