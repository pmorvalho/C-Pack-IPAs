
#include <stdio.h>
int main() {
    int i = 0, N;
    float num, media, acc = 0.0;
    scanf("%d", &N);
    while (i < N) {
        scanf("%f", &num);
        i++;
        acc += num;
    }
    if (N > 0) {
        media = acc / N;
        printf("%.2f\n", media);
    }
    return 0;
}