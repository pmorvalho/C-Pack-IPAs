
#include <stdio.h>

int main(){
    int N; 
    int M;
    
    scanf("%d %d", &N, &M);

    if(N % M == 0){
        printf("yes\n");
    }else{
        printf("no\n");
    }
    return 0;
}