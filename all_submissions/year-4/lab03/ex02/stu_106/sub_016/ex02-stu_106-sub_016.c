
#include <stdio.h>

void piramide(int N) {
    int i, j;
    for (i = 1; i <= N; ++i) {
        for (j = N - 1; j > 0; --j) 
            printf("  ");

        for (j = 0; j < i; ++j)
            printf(" %d", j);




        for (j = 0; j < i; ++j) 
            printf("%d", i);
        putchar('\n');
    }
}


int main() {
    int N;
    scanf("%d", &N);
    piramide(N);

    return 0;
}