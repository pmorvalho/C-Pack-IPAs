
#include <stdio.h>

int N, i = 1;
float num_in, soma, media;

int main () {
    scanf("%d", &N);
    scanf("%f", &soma);

    while (N != i) {
        scanf("%f", &num_in);
        soma += num_in;
        i++;
    }

    media = soma / N;
    printf("%.2f\n", soma);

    return 0;
}