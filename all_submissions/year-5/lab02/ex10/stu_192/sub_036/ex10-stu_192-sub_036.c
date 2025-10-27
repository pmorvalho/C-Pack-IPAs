
#include <stdio.h>
#define AUXILIAR 10

int main() {
    int n = 0, i = 0, soma = 0;
    scanf("%d", &n);
    while(n>0) {
        soma = soma + n/AUXILIAR;
        ++i;
        n = n/AUXILIAR;
    }
    printf("%d\n%d\n", i, soma);
    return 0;
}