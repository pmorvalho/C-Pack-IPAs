#include <stdio.h>

#define VECMAX 100

int main() {
    int n, v[VECMAX], contador, linha, max = 0;

    scanf("%d", &n);

    for (contador = 0; contador < n; contador++) {
        scanf("%d", &v[contador]);
        if (v[contador] > max) {
            max = v[contador];
        }
    }

    for (linha = max; linha >= 1; linha--) {
        for (contador = 0; contador < n; contador++) {
            if (v[contador] >= linha) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;

}