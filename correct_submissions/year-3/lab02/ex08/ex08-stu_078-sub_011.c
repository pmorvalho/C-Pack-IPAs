
#include <stdio.h>

int main() {
    int N, contador = 0;
    float media, soma = 0, num_atual;
    scanf("%d", &N);
    while (++contador <= N) {
        scanf("%f", &num_atual);
        soma += num_atual;
    }
    media = soma / N;
    printf("%.2f\n", media);
    return 0;
}