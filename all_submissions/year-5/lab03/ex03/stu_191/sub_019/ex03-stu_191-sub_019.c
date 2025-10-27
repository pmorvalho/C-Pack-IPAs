
#include <stdio.h>

void cruz(int N){
    int i, linha, coluna;

    for(linha=1; linha<=N; linha++){
        for(i=1; i<=N; ++i){
            if(i==linha || i==(N-linha+1)){
                printf("*");
            } else{
                printf("-");
            }
            
            if (i!=N){
                printf(" ");
            }
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