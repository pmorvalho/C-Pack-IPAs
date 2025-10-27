
#include <stdio.h>

void quadrado(int N) {
    int i, j, N_inc = N;
    for (i = 1; i <= N; i++) {
        if (i >= 2) {
            N_inc++;
            printf("\n");
        }
        for (j = i; j <= N_inc; j++) {
            printf("%d\t", j);
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    if (N >= 2) {
        quadrado(N);
    }
    return 0;
}