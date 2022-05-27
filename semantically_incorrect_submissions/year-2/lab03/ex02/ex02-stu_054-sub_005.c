#include <stdio.h>

void piramide(int N){
    int i,j,k;
    for (j = 1;j<=N;j++) {
        int X = j; 
        for (i = N-j;i>0;i--)
            printf("  ");
        for (k = 1;k<= j*2-1;k++){
            if (k>j){
                X--;
                printf("%d ",X);
            }
            else
                printf("%d ",k);
        }
        printf("\n");
    }   
}

int main(){
    int N = 0;
    while (N<2) {
        printf("qual é o tamanho da piramide? (>= 2): ");
        scanf("%d",&N);
    }
    piramide(N);
    return 0;
}