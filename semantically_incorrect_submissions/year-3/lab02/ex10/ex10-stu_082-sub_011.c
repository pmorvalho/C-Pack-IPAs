

#include <stdio.h>

int main() {
    int n = 0, digitos = 0, soma = 0;
    scanf("%d", &n);
    while (n >= 0) {
        digitos++;
        soma += (n % 10);
        n /= 10;
    }
    printf("%d\n%d\n", digitos, soma);
    return 0;
}