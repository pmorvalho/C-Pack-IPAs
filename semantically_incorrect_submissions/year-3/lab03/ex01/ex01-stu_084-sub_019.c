
#include <stdio.h>

void quadrado(int N);

int main(){

    int N;
    scanf("%d", &N);
    
    while (N < 2){
        scanf("%d", &N);
    }
    quadrado(N);
    return 0;
}

void quadrado(int N){

    int i, j, n = 0;

    for (i = 0; i < N; i++){
        for (j = n; j < (N + i); j++){
            printf("%d\t", j + 1);
        }
        n++;
        printf("\n");
    }
}
