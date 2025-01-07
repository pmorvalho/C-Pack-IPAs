
#include <stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    if (N > M){
        printf("%d\n%d", M, N);
    }
    else{
        printf("%d\n%d", N, M);
    }
    return 0;
}