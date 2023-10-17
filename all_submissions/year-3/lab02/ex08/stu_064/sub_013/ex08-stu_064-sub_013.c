

#include <stdio.h>

int main () {
    int n, nNumeros;
    float soma = 0, media, valor;
    scanf("%d", &n);
    nNumeros = n;

    while (n--) {
        scanf("%f", &valor);
        soma += valor;
    }

    media = soma / nNumeros;
    printf("%.2f\n", media);

    return 0;
}