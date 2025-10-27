

#include <stdio.h>
void quadrado(int N) {
    int i, j, num = N;
    for (i = 1; i <= N; i++) {
        if (i >= 2){
            num++;
            printf("\n");
        }
        for (j = i; j <= num; j++) {
            printf("%d", j);
            if (j < i + N - 1) {
                printf("\t");
            }
        }       
    }    
    printf("\n");
}

int main() {
    int N;
    scanf("%d", &N);
    if (N >= 2) {
        quadrado(N);
    }
    return 0;
}