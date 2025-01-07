
#include <stdio.h>

void quadrado(int N);

int main () {
    int N;
    scanf("%d", &N);
    quadrado(N);
    return 0;
}

void quadrado(int N) {
    int i0, j0, j1;
    for (i0 = 1; i0 <= N; i0++) {
        j1 = i0;
        for (j0 = 0; j0 < N; j0++) {
            if (j0)
                printf("\t");
            printf("%d", j1);
            j1++;
        }
        printf("\n");
    }
    return;
}