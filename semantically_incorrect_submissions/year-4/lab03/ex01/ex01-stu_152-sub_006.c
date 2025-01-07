
#include <stdio.h>

void quadrado(int N){
    int elemento, linha;

    for (linha = 1; linha <= N; linha++){
        if (linha > 1)
            printf("\n");

        printf("%d",linha);
        
        for (elemento = 1 + linha; elemento <= (N + linha); elemento++){
            printf("\t%d",elemento);
        }
    }
    printf("\n");
}

int main(){
    int N;

    scanf("%d",&N);

    quadrado(N);

    return 0;
}