
#include <stdio.h>

void quadrado(int N) {
    int i, j=0;

    while (j < N){
        for (i = 1; i <= N; ++i) {
        printf("%d\t", i+j);
        }
        printf("\n");
        j++;
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