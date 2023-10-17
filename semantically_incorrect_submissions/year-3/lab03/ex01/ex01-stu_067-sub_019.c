
#include<stdio.h>

void quadrado(int N){
    int i,j, aux=0;

    for(i=0;i<N;i++){ 
        for(j=0;j<N;j++){ 
            aux=i+j+1;
            printf("%d\t",aux);
            if(j==N-1)
                printf("\n");
        }
    }
}  


int main(){

int N;
    scanf("%d",&N);

    if(N>=2)
        quadrado(N);
    return 0;
}
   