
#include <stdio.h>

void quadrado(int N){
    int i, j;
    if (N >= 2){
        for (i = 1; i <= N; i++){
            for (j = i; j < N + i; j++){
                printf("%d\t", j);
            }
            printf("\n");
        }
    }
}

int main(){
    int N;
    scanf("%d", &N);
    quadrado(N);
    return 0;
}