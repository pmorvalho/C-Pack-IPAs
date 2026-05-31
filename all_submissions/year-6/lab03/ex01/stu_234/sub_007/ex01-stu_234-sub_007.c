
#include <stdio.h>

void quadrado(int n) {
    int i, j;

    for (i=1; i<=n; i++) {
        for (j=i;  j<i+n; j++) {
            printf("%d", j);
            if (j != i + n - 1)
                printf ("\t");
        }
        printf("\n");
    }
}

int main () {
    int N;
    scanf("%d", &N);
    quadrado(N);
    return 0;
}