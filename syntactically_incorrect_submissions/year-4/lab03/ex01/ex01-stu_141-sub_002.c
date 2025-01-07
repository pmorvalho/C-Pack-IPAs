
#include <stdio.h>


void quadrado(int N){
    for (int i = 1; i <= N; i++){
        printf("%d", i);
        for (int j = i + 1; j < N + i; j++){
            printf("\t%d", j);
        }
        printf("\n");
    }
}


int main(){
    int N;

    scanf("%d", &N);

    while (N < 2){
        scanf("%d", &N);
    }

    quadrado(N);
    return 0;
}