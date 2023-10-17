

#include <stdio.h>

int main() {

    int N, digitos = 0, soma = 0;
    scanf("%d", &N);

    while (N != 0) {
        int digito = N % 10;
        digitos++;
        soma= soma + digito;
        N = N / 10;
    }

    printf("%d\n",digitos);
    printf("%d\n",soma);

    return 0;
}