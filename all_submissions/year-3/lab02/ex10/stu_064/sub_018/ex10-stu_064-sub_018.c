

#include <stdio.h>

int main() {
    int n, ndigitos = 0, soma = 0;
    scanf("%d", &n);

    while (n != 0) {
        ndigitos++;
        soma += n % 10;
        n /= 10;
    }

    printf("%d\n%d\n", ndigitos, soma);

    return 0;
}