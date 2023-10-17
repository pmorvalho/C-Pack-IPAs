
#include <stdio.h>

void quadrado(int N) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = i + 1; j <= N + i; j++) {
            if (j != N + i)
                printf("%d\t", j);
            else
                printf("%d\n", j);
        }
    }
    return;
}

int main() {
    int N;
    scanf("%d", &N);
    if (N < 2)
        return 1;
    quadrado(N);
    return 0;
    }