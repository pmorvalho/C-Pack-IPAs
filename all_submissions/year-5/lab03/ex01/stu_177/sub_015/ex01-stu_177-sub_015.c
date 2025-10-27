
#include <stdio.h>

void quadrado(int N){
    int i, j, k = 1;
    for(i=1; i<=N; i++){
        for(j=k; j<(N+k); j++){
            printf("%d\t", j);
        }
        printf("\n");
        k++;
    }
}

int main(){
    int N;
    scanf("%d", &N);
    while(N < 2){
        scanf("%d", &N);
    }
    quadrado(N);
    return 0;
}

