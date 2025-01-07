
#include <stdio.h>

void cruz(int N) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == j || i + j == N - 1) {
                putchar('*');
            } else {
                putchar('-');
            }

            if (j < N - 1) {
                putchar(' ');
            }
        }
        putchar('\n');
    }
}

int main() {
    int N = 0;

    scanf("%d", &N);
    while (N <= 0) {
        scanf("%d", &N);
    }
    cruz(N);
    return 0;
}