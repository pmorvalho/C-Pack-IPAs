

#include <stdio.h>

void quadrado(int N) {
    int n2, starter = 1, starter2 = 1, n3;
    n2 = N;
    n3 = N;
    if (N >= 2) {
        while (N > 0) {
            starter = starter2;
            while (n2 > 0) {
                printf("%d\t", starter);
                starter ++;
                n2--;
            }
            printf("\n");
            starter2 ++;
            N--;
            n2 = n3;
        }
    }
}

int main () {
    int N;
    scanf("%d", &N);
    quadrado(N);
    return 0;
}

