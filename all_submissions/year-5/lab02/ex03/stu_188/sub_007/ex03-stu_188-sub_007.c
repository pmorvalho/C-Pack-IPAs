
#include <stdio.h>
int main(){
    int N,M,menor,maior;
    scanf("%d %d",&N,&M); 
    if (N<M){
        menor=N;
        maior=M;
    } else {
        menor=M;
        maior=N;
    }
    if (maior%menor==0){ 
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}
