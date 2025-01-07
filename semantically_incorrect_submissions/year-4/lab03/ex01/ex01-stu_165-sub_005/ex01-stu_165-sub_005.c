
#include <stdio.h>

void quadrado(int N){
    int linha, coluna;
    for (linha = 0; linha < N; linha++){
        for (coluna = linha + 1; coluna <= (N + linha); coluna++){
            printf("%d\t", coluna);
        }
        printf("\n");
    }
}

int main(){
    int N;

    scanf("%d", &N);

    quadrado(N);

    return 0;
}