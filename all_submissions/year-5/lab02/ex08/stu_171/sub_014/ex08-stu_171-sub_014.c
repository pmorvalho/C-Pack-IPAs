
#include <stdio.h>

int main() {
    int N, contador;
    float media, num, soma = 0;
    scanf("%d", &N);
    for (contador = 0; contador < N; contador++) {
        scanf("%f", &num);
        soma += num;

    }
    media = soma / N;
    printf("%.2f\n", media);
    return 0;
}