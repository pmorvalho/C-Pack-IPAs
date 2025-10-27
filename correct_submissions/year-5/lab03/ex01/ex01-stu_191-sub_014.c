
#include <stdio.h>

void quadrado(int N){
    int linha, coluna, num;
    
    for(linha=0; linha<N;++linha){
        num = linha;
        for(coluna=0; coluna<N; ++coluna){
            num+=1;
            printf("%d", num);
            if (coluna!=N-1){
                printf("\t");
            }
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