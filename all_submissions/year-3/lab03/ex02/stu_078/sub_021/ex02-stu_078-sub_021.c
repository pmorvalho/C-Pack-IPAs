

#include <stdio.h>

void piramide(int N) {
    int lin, col, insere_num;
    for (lin = 1; lin <= N; lin++) {
        for (col = 0; col <  2 * (N - lin); col++)
            printf(" ");
        for (insere_num = 1; insere_num < lin; insere_num++) 
            printf("%d ", insere_num);
        printf("%d", insere_num);
        for (insere_num--; insere_num > 0; insere_num--)
            printf(" %d", insere_num);
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    piramide(N);
    return 0;
}