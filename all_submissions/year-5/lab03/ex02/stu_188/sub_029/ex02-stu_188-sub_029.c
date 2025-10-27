
#include <stdio.h>

void piramide(int N){
    int linha,coluna,numero=1;
    for (linha=1; linha<=N; linha++){
        for (coluna=0; coluna<N-linha; coluna++){
            putchar(' ');
        }
        for (coluna=0; coluna<linha; coluna++){
            printf("%d",numero);
            numero++;
            if (coluna<linha-1){
                putchar(' ');
            }
        }
        printf("\n");
    }
}
int main(){
    int N;
    scanf("%d",&N);
    piramide(N);
    return 0;
}
