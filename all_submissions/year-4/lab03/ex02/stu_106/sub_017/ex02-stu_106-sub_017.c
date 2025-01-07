
#include <stdio.h>

void piramide(int N) {
    int i, j;
    for (i = 1; i <= N; ++i) {
        for (j = N - i; j > 0; --j) 
            printf("  ");

        for (j = 1; j <= i; ++j) {
            if (j == 1) putchar(' ');
            printf(" %d", j);
        }

        for (j = 1; j < i; ++j) 
           printf(" %d", i - j);

        putchar('\n');
    }
}


int main() {
    int N;
    scanf("%d", &N);
    piramide(N);

    return 0;
}