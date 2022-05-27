#include <stdio.h>

int N;
int dig, soma = 0, contador = 0;

int main(){

    scanf("%d", &N);
    while (N > 0 ){
        dig = N % 10;
        N = N / 10;
        contador += 1;
        soma = soma + dig;
    }   
    printf("%d\t%d\n", contador, soma);
    return 0;

}