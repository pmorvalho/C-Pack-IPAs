

#include <stdio.h>

void cruz(int N){
    int i,j;

    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            if ((j==i) || (j==((N-1)-i)))
                printf("*");
            else
                printf("-");
        }
        printf("\n");
    }
}

int main(){
    int N;

    scanf("%d", &N);
    cruz(N);

    return 0;
}