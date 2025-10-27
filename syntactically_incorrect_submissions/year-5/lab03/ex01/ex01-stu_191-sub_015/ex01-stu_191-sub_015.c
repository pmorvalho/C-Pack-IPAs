
#include <stdio.h>

void quadrado(int N){
    int counter, linha, coluna, num;
    
    for(linha=0; linha<N;++linha){
        num = linha;
        for(coluna=0; coluna<N; ++coluna){
            num+=1;
            printf("%d\t", num);
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