

#include <stdio.h>

void quadrado(int N){
    int i, j;

    for (i=1; i<=N; i++){
        for (j=1; j<N; j++){
            printf("%d\t", j+(i-1));
        }
        printf("%d", j+(i-1));
        printf("\n");
    }
}

int main(){
    int N;

    scanf("%d", &N);
    quadrado(N);
    
    return 0;
}