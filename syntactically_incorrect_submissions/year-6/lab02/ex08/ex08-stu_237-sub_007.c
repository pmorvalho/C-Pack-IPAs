
#include <stdio.h>

int main() {
    int N;
    float value;
    float soma;
    float media;

    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        scanf("%f", &value);
        soma += value;
    }

    media = soma / N;

    printf("%.2f\n", media);

    return 0;
}