

#include <stdio.h>

void piramide(int N) {

    int i, j, n;

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= 2*(N - i); j++)
            printf(" ");

        for (n = 1; n <= i; n++) {
            if (n != 1)
                putchar(' ');
            printf("%d", n);
        }

        for (n = i - 1; n >= 1; n--)
            printf(" %d", n);

        printf("\n");
    }
}

int main () {

    int N;

    scanf("%d", &N);
    piramide(N);

    return 0;
}