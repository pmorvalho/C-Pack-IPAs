
#include <stdio.h>

int main() {
    int n, quantidade;
    float soma = 0, numero, media;
    scanf("%d", &n);
    quantidade = n;
    while (n != 0) {
        scanf("%f", &numero);
        soma += numero;
        n--;
    }
    media = soma/quantidade;
    printf("%.2f\n", media);
    return 0;
}
//teste