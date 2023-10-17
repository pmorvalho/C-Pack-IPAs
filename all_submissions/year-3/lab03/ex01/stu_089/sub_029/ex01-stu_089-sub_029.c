

#include <stdio.h>

void quadrado (int N){

    int i = 1, contador = 0;
    while (i<=N)
    {
        for(contador=i; contador<i+N; contador++){
            printf("%d ", contador);
        }
        printf("\n");
        i++;
    }
    
}

int main(){

    int N=0;

    scanf("%d", &N);

    quadrado(N);

    return 0;
}