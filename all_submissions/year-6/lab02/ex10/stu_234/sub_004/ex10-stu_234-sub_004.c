
#include <stdio.h>

int main() {
    int N, soma=0, cont=0;

    scanf("%d", &N);
    while (N!=0) {
        soma = soma + N%10;
        cont++;
        N=N/10;
    }
    printf("%d\n%d\n", cont, soma);
    return 0;
}