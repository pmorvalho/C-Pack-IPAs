

#include <stdio.h>


int main(){

    int N;
    void quadrado();

    scanf("%d", &N);
    quadrado(N);

    return 0;
}

void quadrado(int N){

    int i,j, Novo_N;

    Novo_N = N;
    for(i = 1; i <= N; i++){
        for( j = i; j<= Novo_N; j++){
            printf("%d", j);
            if (j != Novo_N)
            {
                printf("\t");
            }
            
        }
        printf("\n");
        Novo_N++;
    }
    
}