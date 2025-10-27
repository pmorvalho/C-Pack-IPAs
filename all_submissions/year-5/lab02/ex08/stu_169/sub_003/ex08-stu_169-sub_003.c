

#include <stdio.h>

int main() {
    int N;
    float num, soma = 0, media = 0;

    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        scanf("%f", &num);
        soma = soma + num;
    }

    media = soma / N;
    printf("%.2f\n", media); 

    return 0;
}