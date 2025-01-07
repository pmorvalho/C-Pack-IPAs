
#include <stdio.h>

int main(){
    int N, cont, soma;
    scanf("%d", &N);
    soma = 0; 
    cont = 0;
    while (N != 0){
        ++cont;
        soma = soma + N % 10;
        N = N / 10;
    }
    printf("%d\n%d\n", cont, soma);
    return 0;
}