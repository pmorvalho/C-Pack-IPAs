
#include <stdio.h>

int main() {
    int N, contador;
    float valor, media, soma_total = 0;

    scanf("%d", &N);

    for (contador = 0; contador < N; contador++) {
        scanf("%f", &valor);
        soma_total += valor;
    }

    media = soma_total/N;

    printf("%.2f\n", media);
    return 0;
}