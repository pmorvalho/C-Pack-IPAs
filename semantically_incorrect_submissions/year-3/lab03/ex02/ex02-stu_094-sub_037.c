

#include <stdio.h>

void piramide(int N) {

    int i, j, n;

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N - i; j++)
            printf(" ");

        for (n = 1; n <= i; n++)
            printf("%d", n);

        for (n = i - 1; n >= 1; n--)
            printf("%d", n);

        for (j = N + i; j <= (2 * N - 1); j++)
            printf(" ");

        printf("\n");
    }
}

int main () {

    int N;

    while (N < 2)
        scanf("%d", &N);

    piramide(N);
    return 0;
}