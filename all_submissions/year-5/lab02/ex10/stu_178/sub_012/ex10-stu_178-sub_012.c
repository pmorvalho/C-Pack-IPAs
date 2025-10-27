
#include <stdio.h>

int main(){
    int N, cont, soma;
    cont = soma = 0;
    scanf("%d", &N);
    while(N != 0){
        cont++;
        soma += N%10;
        N = N / 10;
    }
    printf("%d\n%d\n", cont, soma);
    return 0;
}