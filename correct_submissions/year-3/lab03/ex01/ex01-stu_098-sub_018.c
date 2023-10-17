

#include <stdio.h>

void quadrado(int N);

int main() {

    int N;

    scanf("%d", &N);
    quadrado(N);
    
    return 0;    
}

void quadrado(int N) {

    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 1; j <= N; j++) {
            if (j == N)
                printf("%d\n", N + i);
            else
                printf("%d\t", j + i);
        }
    }
}