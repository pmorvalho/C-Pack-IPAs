

#include <stdio.h>

int main(){
    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);
    if (N>M){
        printf("%d\n%d\n", M,N);
    }
    else{
        printf("%d\n%d\n", N,M);
    }
    return 0;
}