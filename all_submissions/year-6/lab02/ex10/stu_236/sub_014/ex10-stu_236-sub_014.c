
#include <stdio.h>

int main(){
    int N, num, contador = 0, soma = 0;
    scanf("%d", &N);
    while (N != 0){
        num = N % 10;
        N = N / 10;
        contador += 1;
        soma += num;
    }
    printf("%d\n%d\n", contador, soma);
    return 0;
}