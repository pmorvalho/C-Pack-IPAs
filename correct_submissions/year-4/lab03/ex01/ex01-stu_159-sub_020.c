
#include <stdio.h>

void quadrado(int N);

int main () {
    int N;
    scanf("%d", &N);
    quadrado(N);
    return 0;
}

void quadrado(int N) {
    int i, j0, j1;
    for (i = 1; i <= N; i++) {
        j1 = i;
        for (j0 = 0; j0 < N; j0++) {
            if (j0)
                putchar('\t');
            printf("%d", j1);
            j1++;
        }
        putchar('\n');
    }
    return;
}