
#include <stdio.h>

#define VECMAX 100

int main() {
    int n, i, j, max = 0, vec[100];
    scanf("%d", &n);
    if (n >= VECMAX) {
        printf("Erro: n tem que ser menor que 100");
    }
    else {
        for (i = 0; i < n; i++) {
            scanf("%d", &vec[i]);
            if (vec[i] > max) {
                max = vec[i];
            }
        }
        for (i = max; i >= 1; i--) {
            for (j = 0; j < n; j++) {
                if (vec[j] >= i) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }

            printf("\n");
        }
    }

    return 0;
}