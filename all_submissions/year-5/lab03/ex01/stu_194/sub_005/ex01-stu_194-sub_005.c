

#include <stdio.h>

void quadrado(int N);

int main() {
    int n;

    scanf("%d", &n);

    quadrado(n);

    return 0;
}

void quadrado(int N) {
    int x, y;
    if (N < 2) return;

    for (y = 0; y < N; y++) {
        for (x = 0; x < N - 1; x++) {
            printf("%d\t", 1 + x + y);
        }

        printf("%d\n", 1 + x + y);
    }
}