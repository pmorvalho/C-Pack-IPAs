

#include <stdio.h>

void cruz(int N);
void imprimir_linha(int nr_linha, int N);

int main() {
    int n;

    scanf("%d", &n);
    cruz(n);
    return 0;
}

void imprimir_linha(int nr_linha, int N) {
    for (int c = 1; c <= N; c++) {
        if (c == nr_linha || c == (N + 1 - nr_linha))
            printf("%c ", '*');
        else
            printf("%c ", '-');
        if (c != N)
            printf(" ");
        else
            printf("\n");
    }
}

void cruz(int N) {
    for (int i = 1; i <= N; i++)
        imprimir_linha(i, N);
}