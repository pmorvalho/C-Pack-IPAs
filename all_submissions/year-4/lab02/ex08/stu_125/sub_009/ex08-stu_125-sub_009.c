
#include <stdio.h>

int main() {
    int n, i;
    float num, media, total = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%f", &num);
        total += num;
    }

    media = total / n;
    printf("%.2f\n", media);

    return 0;
}