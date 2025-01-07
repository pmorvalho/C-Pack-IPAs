

#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);
    float num, media = 0.00;
    for (i = 0; i < N; i++) {
        scanf("%f", &num);
        media = media + num;
    }
    media = media / N;
    printf("%.2f\n", media);
    return 0;
}
