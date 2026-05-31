
#include <stdio.h>

void quadrado(int N){
    for(int i=1; i <= N; i++){
        for(int j=0; j < N; j++)
            printf("%d", i+j);
        printf("\n");
    }
}

int main(){
    int N;
    quadrado(N);
    return  0;
}