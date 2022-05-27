#include <stdio.h>

#define DIVISOR 10

int main() {
    int n, contador = 0, soma = 0;

    scanf("%d", &n);

    while (n != 0) {
        soma += n % DIVISOR;
        n = n / DIVISOR;
        ++contador;
    }
    
    printf("%d\n%d\n", contador, soma);

    return 0;

}