
#include <stdio.h>

void cruz(int N) {
    int i, j;

    for (i = 1; i <= N; ++i) {
        for (j = 1; j <= N; ++j) {
            if (j != 1) putchar(' ');
            if (i == j || i + j == N + 1)
                printf("*");
            else printf("-");
        }
        putchar('\n');
    }
}


int main() {
    int N;

    scanf("%d", &N);
    cruz(N);
    return 0;
}


