

#include <stdio.h>

void cruz(int N) {
    int i, j;
    for (i = 0; i <= N - 1; i++) {
        for (j = 0; j <= N - 1; j++) {
            if (i == j || i + j == N - 1) {
                printf("*");
            } else {
                printf("-");
            }
        if (j <= N - 1) {
            printf(" ");
        }
    }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}