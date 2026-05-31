
#include <stdio.h>

void quadrado(int N){
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= N; j++){
            printf("%d", i + j - 1);           
            if (j < N) {
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main(){
    int N;
    scanf("%d", &N);
    if (N >= 2){
        quadrado(N);
    }
    return 0;
}