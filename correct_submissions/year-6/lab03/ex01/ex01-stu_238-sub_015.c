#include <stdio.h>

void quadrado(int N) {
    int i, j;

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N; j++) {
            printf("%d", i + j - 1);

            if (j < N) {
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        if (n >= 2) {
            quadrado(n);
        }
    }

    return 0;
}