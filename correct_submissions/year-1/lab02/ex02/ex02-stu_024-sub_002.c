#include <stdio.h>


int main(){
    
    int N;
    int M;


    scanf("%d %d", &N, &M);

    if(N>=M){
        printf("%d\n%d\n",M,N);
    }

    if(M>=N){
        printf("%d\n%d\n",N,M);
    }

    
return 0;

}