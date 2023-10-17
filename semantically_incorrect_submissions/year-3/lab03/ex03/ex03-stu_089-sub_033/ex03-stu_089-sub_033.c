

#include <stdio.h>

void cruz (int N){

    int i = 1, contador = 1;
    while (i<=N)
    {
        for(contador=1; contador<=N; contador++){
            if(contador == i || contador==N-i+1)
                printf("*");
            else
                printf("-");
        }
        printf("\n");
        i++;
    }
    
}

int main(){

    int N=0;

    scanf("%d", &N);

    cruz(N);

    return 0;
}