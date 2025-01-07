
#include<stdio.h>

int main() {
    int N, ac = 0, soma = 0;
    scanf("%d", &N);
    while (N != 0) {
        ac++;
        soma = soma + N % 10;
        N = N / 10;
    }
    printf("%d\n%d\n", ac, soma);
    return 0;
}