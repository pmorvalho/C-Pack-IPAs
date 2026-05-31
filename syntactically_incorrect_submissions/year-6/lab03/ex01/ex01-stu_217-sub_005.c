
#include <stdio.h>

void quadrado(int N){
    int i, j, inc;
    for(i = 0; i < N; i++){
        for(j = 1; j <= N; j++){
            printf("%d\t", j + i);
        }
        printf("\n");
    }
}

int main(){
    int N;
    scanf("%d", &N);
    quadrado(N);
}