

#include <stdio.h>

void quadrado(int N);

int main() {
    int N;
    scanf("%d", &N);
    if (N < 2) return 1;
    quadrado(N);
    return 0;
}

void quadrado(int N) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 1; j <= N - 1; j++) {
            printf("%d\t", j + i);
        }
        printf("%d\n", j + i);
    }
}