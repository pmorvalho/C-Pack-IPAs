

#include <stdio.h>

void quadrado(int N) {

    int quadrado[N][N];
    int i, j, v = 1;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            quadrado[i][j] = v;
            v++;
        }
        v -= 3;
    }

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++)
            printf("%d\t", quadrado[i][j]);
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