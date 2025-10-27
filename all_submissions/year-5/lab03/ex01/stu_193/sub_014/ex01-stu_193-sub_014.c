

#include <stdio.h>

int main() {
    int N,linha,col;
    scanf("%d",&N);

    for (linha = 0; linha < N; ++linha) {
        for (col = 1; col <= N; ++col) {
            printf("%d\t",linha + col);
        }
        printf("\n");
    }

    return 0;
}