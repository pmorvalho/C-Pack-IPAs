
#include <stdio.h>

void quadrado(int N) {
    int j=0;

    while (j < N){
        for (int i = 1; i < N; ++i) {
            printf("%d\t", i+j);
        }
        printf("%d\n", N+j);
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
