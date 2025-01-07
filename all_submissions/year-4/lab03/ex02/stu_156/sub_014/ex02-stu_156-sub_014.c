
#include <stdio.h>

void piramide(int N);

int main(void){
    int N;
    scanf("%d",&N);
    piramide(N);

    return 0;
}

void piramide(int N){
    int num;
    if( N >= 2){
        for (int linha = 1; linha <= N; linha++){
            for(int i = 0; i < N; i++){
                
                if(i) {
                    printf(" ");
                }
                num = i + linha - (N-1);
                if(num > 0){
                    printf("%d",num);
                }
                else{
                    printf(" ");
                }
                

            }
            for(int i = 0;i < linha;i++){
                if((i != 0) && (i < linha)){
                    printf(" %d",i);
                }
            }
            printf("\n");
        }
    }

    return;
}