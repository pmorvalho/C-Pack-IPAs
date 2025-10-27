
#include <stdio.h>
#define AUXILIAR 10

int main() {
    int n, i, soma = 0;
    scanf("%d", &n);
    while(n>0) {
        soma = soma + n/AUXILIAR;
        ++i;
        --n;
    }
    printf("%d\n%d\n", i, soma);
    return 0;
}