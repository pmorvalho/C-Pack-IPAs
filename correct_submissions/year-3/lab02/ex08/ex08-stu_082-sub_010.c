

#include <stdio.h>

int main() {
    int n, i;
    float valor, soma = 0, media = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%f", &valor);
        soma += valor;
    }
    media = soma / n;
    printf("%.2f\n", media);
    return 0;
}