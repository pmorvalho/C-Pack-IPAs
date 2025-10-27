
#include <stdio.h>

#define SUM 1
#define SUBTRACT 0

int conc_num (int left, int right){
    return 10*left + right;
}

int calc(int operador, int a, int b){
    if(operador == SUM)
        return a + b;
    else
        return a - b;
}

int main(){
    int c, soma = 0, n = 0, estado = SUM;

    while((c = getchar()) != EOF && c != '\n'){
        switch(c){
            case(' '):
                break;
            case('+'):
                soma = calc(estado, soma, n);
                estado = SUM;
                n = 0;
                break;
            case('-'):
                soma = calc(estado, soma, n);
                estado = SUBTRACT;
                n = 0;
                break;
            default:
                n = conc_num(n, c - '0');

        }
    }
    printf("%d\n", calc(estado, soma, n));
    return 0;
}