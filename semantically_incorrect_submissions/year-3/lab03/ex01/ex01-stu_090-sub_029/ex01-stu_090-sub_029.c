

#include <stdio.h>

void quadrado(int N) {

    int i, j;

    for(j = 0; j < N; j++) {
        for(i = 0; i < N; i++)
            printf("%d\t", j + i + 1);
        i = 0;
        printf("\n");
    } 
}


int main() {
    int N;
    scanf("%d", &N);
    quadrado(N);
    return 0;
}