
#include <stdio.h>

void piramide (int N) {
    int linha, col, i;
    for (linha = 1; linha <= N; linha++) {
        i = 0;
        for (col = 1; col <= (N + linha - 1); col++) {
            if (col > (N - linha)){
                if (col <= N)
                    printf("%d", ++i);
                else
                    printf("%d", --i);
            }
            else {
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
}

int main () {
    int N;
    scanf("%d", &N);
    piramide(N);

    return 0;
}