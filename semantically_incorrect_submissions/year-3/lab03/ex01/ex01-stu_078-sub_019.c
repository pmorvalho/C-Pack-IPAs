

#include <stdio.h>

void quadrado (int N) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = (i + 1); j <= (N + i); j++)
            printf("%d\t", j); 
        printf("\n");
    }
}    

int main() {
    int N;
    scanf("%d", &N);
    quadrado (N);
    return 0;
}
