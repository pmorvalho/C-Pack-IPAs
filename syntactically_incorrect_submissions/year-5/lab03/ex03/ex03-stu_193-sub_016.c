


#include <stdio.h>

void cruz(int N) {
    if ( N < 2) return;

    for (int linha = 1 ; linha <= N ; linha++ ) {
        for (int coluna = 1 ; coluna <= N; coluna ++) {
            if (coluna != 1) printf(" ");
            if (coluna == linha || coluna == N - linha + 1) printf ("*");
            else printf("-");
        }
    putchar('\n');
    }
}


int main() {
    int N;

    scanf("%d",&N);
    cruz(N);

    return 0;
}