#include <stdio.h>

void quadrado(int N){

    int i, j;

    for (i=0; i < N; i++){
        for (j=0; j < N; j++){
            printf("%d\t", i + j + 1);
            if (j == N - 1){
                printf("\n");
            }
        }
    }
}

int main(){

    int N;
    scanf("%d", &N);

    quadrado(N);
    
    return 0;
}