
#include <stdio.h>

void cruz(int N) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == j || i + j == N - 1) {
                printf("*");
            } else {
                printf("-");
            }

            if (j < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        cruz(n);
    }

    return 0;
}