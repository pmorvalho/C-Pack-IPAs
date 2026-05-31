#include <stdio.h>

void quadrado(int N) {
    int a, b;

    for (a = 1; a <= N; a++) {
        for (b = 1; b <= N; b++) {
            printf("%d", a + b - 1);

            if (b < N) {
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