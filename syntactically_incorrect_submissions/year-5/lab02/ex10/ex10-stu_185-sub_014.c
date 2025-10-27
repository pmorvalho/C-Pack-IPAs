
#include <stdio.h>
int main(){
    int N , soma = 0, vezes = 0;
    scanf("%d", &N);
    while(N > 0){
        soma = soma + (N % 10);
        N = N / 10;
        vezes++;
    }
    printf("%d\n%d\n", vezes, soma);
}