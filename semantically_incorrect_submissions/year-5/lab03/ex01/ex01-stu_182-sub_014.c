
#include <stdio.h>

int main(){

    int i, j, N;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        for (j = 1; j <= N; j++){
            printf("%d\t", i + j);
        }
        printf("\n");
    }
    return 0;
}