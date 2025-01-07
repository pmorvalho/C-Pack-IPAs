
#include <stdio.h>

void quadrado(int N) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d", i + j + 1);

            if (j < N - 1) {
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main() {
    int N = 0;

    scanf("%d", &N);
    while (N < 2) {
        scanf("%d", &N);
    }
    quadrado(N);
    return 0;
}