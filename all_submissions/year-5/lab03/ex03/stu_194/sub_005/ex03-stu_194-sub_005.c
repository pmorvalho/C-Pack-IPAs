

#include <stdio.h>

void cruz(int N);

int main() {
    int n;

    scanf("%d", &n);

    cruz(n);

    return 0;
}

void caracter(int N, int y, int x) {
    int star = x == y || x == N - y - 1;

    putchar(star ? '*' : '-');
}

void linha(int N, int y) {
    int x;
    for (x = 0; x < N - 1; x++) {
        caracter(N, y, x);
        putchar(' ');
    }

    caracter(N, y, x);
    printf("\n");
}

void cruz(int N) {
    int y;
    if (N < 2) return;

    for (y = 0; y < (N - 1) / 2; y++) {
        linha(N, y);
    }

    for (y = N / 2; y >= 0; y--) {
        linha(N, y);
    }
}