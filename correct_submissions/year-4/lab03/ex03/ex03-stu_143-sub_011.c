

#include <stdio.h>

int main(){

    void cruz();
    int N;
    scanf("%d", &N);
    cruz(N);
    
    return 0;
}

void cruz(int N){

    int  i ,j;
    
    for (i = 1; i <= N; i++){
        for(j = 1; j <= N; j++){
            if (i == j || i+j == N +1)
                printf("*");
            else
                printf("-");

            if (j != N)
                printf(" ");
        }
        printf("\n");
    }    
            
}