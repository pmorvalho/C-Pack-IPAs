

#include <stdio.h>

#define MAX 100

enum state {SOMA,SUB, NADA};

int converteCharToInt( char c){
    int number = c - 48;
    return number;
}

int potenciaDeDez(int n){
    int res = 10;

    for (int i = 0;i < n-1; i++){
        res *= res;
    }
    return res;
}
int main(){ 
    int expressao[MAX], c, size = 0, aux1 = 0, potencia = 1, total = 0;
    enum state estado = SOMA; 

    for( int i = 0;(c = getchar()) != '\n';i++){
        expressao[i] = c;
        size++;
    }
    expressao[size] = ' ';

    for (int i = 0; i < size; i++){
        if ((expressao[i] >= '0' && expressao[i] <='9') &&
        ((expressao[i+1]) >= '0' && (expressao[i+1]) <='9')){
             aux1 += converteCharToInt(expressao[i]);
            aux1 *= potenciaDeDez(potencia);
            
        } else if(expressao[i] >= '0' && expressao[i] <='9') {
            aux1 += (converteCharToInt(expressao[i]));
            if (estado == SOMA){
                total += aux1;
                aux1 = 0;
                potencia = 0;
            }
            else if (estado == SUB) {
                total -= aux1;
                aux1 = 0;
                potencia = 0;
                }
            }
        if (expressao[i] == '+'){estado = SOMA;}
        else if (expressao[i] == '-') estado = SUB;
    }
    printf("%d\n", total);
    return 0;
}