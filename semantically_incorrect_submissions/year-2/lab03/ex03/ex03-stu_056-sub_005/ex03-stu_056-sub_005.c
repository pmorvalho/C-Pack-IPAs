# include <stdio.h>

void cruz(int N){
    int largura=1,comprimento=1;
    while(comprimento<=N){
        while (largura<=N){
            if (largura==comprimento || largura==(N-comprimento)+1){
                printf("*");
            }
            else{
                printf("-");
            }
            largura+=1;
        }
        comprimento+=1;
        largura=1;
        printf("\n");
    }
}

int main(){
    int N;
    scanf("%d",&N);
    cruz(N);
    return 0;
}