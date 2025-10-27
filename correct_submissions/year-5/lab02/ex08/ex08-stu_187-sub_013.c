

#include <stdio.h>

int main() {
    int n, i;
    float num, acumulador, media;

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%f", &num);
        acumulador = acumulador + num;
    }
    media = acumulador/n;
    printf("%.2f\n", media);
    return 0;
}