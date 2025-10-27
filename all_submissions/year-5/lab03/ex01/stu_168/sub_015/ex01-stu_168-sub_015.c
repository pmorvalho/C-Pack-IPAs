
#include <stdio.h>

void quadrado(int N){
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%d\t",i+j+1);
        }
        printf("\n");
    }
}

int main(){
    int N;
    scanf("%d",&N);
    if (N<2)
        return 1;
    quadrado(N);
    return 0;
}