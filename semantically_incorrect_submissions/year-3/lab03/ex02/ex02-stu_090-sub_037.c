

#include <stdio.h>

void piramide(int N) {

    int base, i, j, k;
    base = 2 * N - 1;

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N - i + 1; j++) 
            printf(" ");
        for (k = 1; k <= N * 2 - 1; k++)
            if (k > N - i && k <= base / 2 + 1)
                printf("%d ", k - (N - i));
            else if (k < N + i && k >= base / 2 + 1)
                printf("%d ", (k - (N + i)) * (-1));
            else 
                printf(" ");
        printf("\n");
    }
}




int main(void) {
    int N;
    scanf("%d", &N);
    piramide(N);
    return 0;
}
