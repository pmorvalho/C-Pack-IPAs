
#include <stdio.h>
void quadrado(int N) {
    int i, l;

    scanf("%d", &N);

    for(l = 1; l <= N; l++) {
        for(i = l; i <= N + l; i++) {
            printf("%d\t", i);
        }
        printf("\n");
    }
}

int main() {
    int N;
    
    scanf("%d", &N);
    
    if (N >= 2) {
        quadrado(N);
    }
    
    return 0;
}