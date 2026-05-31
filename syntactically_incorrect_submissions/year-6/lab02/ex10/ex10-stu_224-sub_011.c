
#include <stdio.h>

int main() {
    int N;
    int soma = 0;
    int digs = 0;
    scanf("%d", &N); 

    while (N > 0) {
        soma += N % 10;
        N = N / 10;
        digs++;
    }

    printf("%d\n%d\n", digs, soma);
}