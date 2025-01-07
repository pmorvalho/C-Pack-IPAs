

#include <stdio.h>

int main() {

    int n, i;
    float val, soma, media;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%f", &val);
        soma += val;
    }

    media = soma / n;

    printf("%.2f\n", media);

    return 0;
}
