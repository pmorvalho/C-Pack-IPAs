
#include <stdio.h>

void quadrado(int n);

int main() {

    int N;
    scanf("%d", &N);
    quadrado(N);
    return 0;
}

void quadrado(int n) {
    int i, j;

    for (j = 0; j < n; j++) {
        for (i = 1 + j; i <= n+j; i++) {
            if (i < n+j) {
                printf("%d\t", i);
            } else {
                printf("%d\n", i);
            }    
        }
    }
}