
#include <stdio.h>

void quadrado(int N);

int main(void){
    int N;
    scanf("%d",&N);
    quadrado(N);

    return 0;
}

void quadrado(int N) {
    int num;
    if( N >= 2){
        for (int linha = 1; linha <= N; linha++){
            for(int i = 0; i < N; i++){
                
                if(i) {
                    printf("\t");
                }
                num = i + linha;
                printf("%d",num);
            }
            printf("\n");
        }
    }
    

    return;
}