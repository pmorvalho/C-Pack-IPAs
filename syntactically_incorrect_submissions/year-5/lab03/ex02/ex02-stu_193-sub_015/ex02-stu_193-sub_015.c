

#include <stdio.h>

void piramide(int N) {
    if ( N < 2) return;

    for (int linha = 1; linha <= N; linha++) {
        for (int espacos = 0; espacos < N - linha; espacos++) {
            putchar(' ');
            putchar(' ');
        }

        for (int num = 1; num <= linha; num++) {
            if (num > 1) 
            putchar(' ');

            printf("%d",num);
        }

        for (int num = linha -1 ; num >= 1; num--) {
            putchar(' ');
            printf("%d",num);
        }
        putchar('\n');
    }
}

int main() {
    int N;

    scanf("%d",&N);
    piramide(N);

    return 0;
}