
#include <stdio.h>

void piramide(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= (N - i) * 2; j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%d", j);
            if (j != i) {
                printf(" ");
            }
        }

        for (int j = i - 1; j > 0; j--) {
            printf(" %d", j);
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);

    piramide(N);

    return 0;
}