

#include <stdio.h>

int main(){

    int N, soma = 0, ndigitos = 0, digito;

    scanf("%d",&N);

    while(N != 0){ 
        digito = N % 10; 
        N = N / 10; 
        soma += digito; 
        ndigitos ++;
    }

    printf("%d\n%d", ndigitos, soma);
    return 0;
}