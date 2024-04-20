

#include <stdio.h>



int main(){
    
    int N, M;
    
    scanf("%d%d",&M,&N);

    if(N<M){
        printf("%d\n%d",N,M);
    }
    else{
        printf("%d\n%d",M,N);
    }
    printf("\n");
    return 0;
}
