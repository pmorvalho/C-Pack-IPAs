

#include <stdio.h>

void quadrado(int N) {

    int i, j; 

    for (i = 1; i <= N; i++) {
        for (j = 0; j < N; j++) {
            if (j)
                putchar('\t');
            printf("%d", i + j);
        }
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