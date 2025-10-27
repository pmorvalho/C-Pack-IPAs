
#include <stdio.h>

int main() {
    int n, n2;
    float numero, soma, media;
    scanf("%d", &n);
    n2 = n;
    soma = 0;
    while (n-- > 0) {
        scanf("%f", &numero);
        soma += numero;    

    }
    media = soma / n2;
    printf("%.2f\n", media);
    return 0;
}