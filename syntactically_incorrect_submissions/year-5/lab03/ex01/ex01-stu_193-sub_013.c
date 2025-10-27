

#include <stdio.h>















void quadrado(int N) {
    if (N < 2) return;
    for (int linha = 0; linha < N; ++linha) {
        for ( int coluna = 0; coluna < N ; ++coluna) {
            if (coluna) putchar('\t');
            printf("%d", linha + coluna + 1);
        }
        putchar('\n');
    }
}

int main() {
    int N;
    scanf("%d", &N);
    quadrado (N);
    return 0;
}