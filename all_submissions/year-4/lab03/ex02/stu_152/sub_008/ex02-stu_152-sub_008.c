
#include <stdio.h>

void piramide(int N){
    int linha, elemento, vazio;
    for (linha = 1; linha <= N; linha ++){
        vazio = N - linha;
        
        while (vazio-- > 0){ 
            printf("  ");
        }
        
        for (elemento = 1; elemento < linha; elemento++){
            printf("%d ",elemento);
        }
        
        printf("%d",linha);
        
        for (elemento = linha - 1; elemento > 0; elemento--){
            printf(" %d",elemento);
        }

        printf("\n");
    }

}

int main(){
    int N;

    scanf("%d", &N);

    piramide(N);

    return 0;
}