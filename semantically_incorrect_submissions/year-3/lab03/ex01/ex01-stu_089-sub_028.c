

#include <stdio.h>

void quadrado (int N){

    int i = 1, contador = 0;
    while (i<=N)
    {
        for(contador=i; contador<i+N; contador++){
            if(contador == i+N-1){
                printf("%d", contador);
            }
            else
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