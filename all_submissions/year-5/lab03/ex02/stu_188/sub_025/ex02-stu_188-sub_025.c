
#include <stdio.h>

void piramide(int N){
    int linha,coluna,numero=1;
    for (linha=0; linha<N; linha++){
        for (coluna=0; coluna<=N-linha; coluna++){
            printf(" ");
        }
        for (coluna= 1;coluna<=linha;coluna++){
            printf("%d",numero);
            numero++;
        }

        for (coluna=linha-1;coluna>=1;coluna--){ 
        
            printf("%d",numero);
            numero--;
        }
        }
        printf("\n");
    }

int main(){
    int N;
    scanf("%d",&N);
    piramide(N);
    return 0;
}
