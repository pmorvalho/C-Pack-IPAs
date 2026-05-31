
#include <stdio.h>

void cruz(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (j == i || j == (N - i + 1)) {
                printf("*");
            }
            else {
                printf("-");
            }
            if (j == N) {
                printf("\n");
            }
            else {
                printf(" ");
            }
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    cruz(N);

    return 0;
}