
#include <stdio.h>
#define FORA 0
#define NUMBA 1
#define SOMA 2
#define SUB 3

int main(){
    int c, num, op, res, estado = FORA;
    while((c = getchar()) != EOF){
        if(estado == FORA){
            if(c <= '9' && c >= '0'){
                estado = NUMBA;
                num = c - '0';
            }
        else if(c == '+'){
            op = SOMA;
        }
        
        }
    }
}