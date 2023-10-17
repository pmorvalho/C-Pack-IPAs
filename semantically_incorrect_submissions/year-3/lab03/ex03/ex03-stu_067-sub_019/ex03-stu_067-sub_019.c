
#include<stdio.h>

void cruz(int N){
    int i,j;
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            (i==j || i == (N-1)-j) ? printf("*") : printf("-");
            if(j==N-1)
                printf("\n");
        }
    }
}

int main(){
    int N;
    scanf("%d",&N);
    cruz(N);
    return 0;
}