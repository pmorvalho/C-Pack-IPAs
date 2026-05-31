

#include <stdio.h>

int main () {

    int N, i;
    float x, acc = 0, media;

    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        scanf("%f", &x);
        acc += x;
    }

    media = acc / N;
    printf("%.2f\n", media);
    return 0;
}