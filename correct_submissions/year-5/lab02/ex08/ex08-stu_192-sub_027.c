
#include <stdio.h>

int main() {
    int n;
    float m, nn, media, soma =0;
    scanf("%d", &n);
    nn = n;
    while (n>0) {
        scanf("%f", &m);
        soma += m;
        --n;
    }
    media = soma/nn;
    printf("%.2f\n", media);
    return 0;
}