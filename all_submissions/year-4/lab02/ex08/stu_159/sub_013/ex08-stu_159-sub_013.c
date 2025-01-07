
#include <stdio.h>

int main() {
    int n, cont;
    cont = 0;
    float soma, numero, media;
    soma = 0;

    scanf("%d", &n);
    while (cont < n){
        scanf("%f", numero);
        soma += numero;
        ++cont;
    }
    media = soma / n;
    printf("%.2f\n", media);
    return 0;
}