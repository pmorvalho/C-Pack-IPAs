

#include <stdio.h>

void quadrado(int N) {

    int i, j, v = 1; 

    for (i = 0; i < N; i++) {
        for (j = 1; j < N; j++) {
            printf("%d\t", v);
            v++;
        }
        printf("%d", v);
        v -= 3;
        printf("\n");
    }
}

int main () {
    
    int N;

    do {
        scanf("%d", &N);
    } while (N < 2);

    quadrado(N);
    return 0;
}