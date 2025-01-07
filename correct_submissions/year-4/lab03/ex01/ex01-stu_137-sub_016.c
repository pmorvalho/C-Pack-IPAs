
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void quadrado(int N){
    int i, j;
    for(i = 1; i <= N; i++){
        for(j = i; j < N + i - 1; j++){
            printf("%d\t", j);
        }
        printf("%d\n", j);
    }
}

int main(){
    int N;
    scanf("%d", &N);
    if(N >= 2){
        quadrado(N);
    }
    return 0;
}
