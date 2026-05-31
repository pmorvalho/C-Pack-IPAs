
#include <stdio.h>

int main() {
    int N, i;
    float valor, soma = 0.0, media;

    if (scanf("%d", &N) == 1 && N > 0) {
        
        for (i = 0; i < N; i++) {
            if (scanf("%f", &valor) == 1) {
                soma += valor;
            }
        }

        media = soma / N;
        printf("%.2f\n", media);
    }

    return 0;
}