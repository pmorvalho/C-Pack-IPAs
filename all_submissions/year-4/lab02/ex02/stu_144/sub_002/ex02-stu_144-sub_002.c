
#include <stdio.h>

int main(){
    int N;
    int M;
    scanf("%d %d\n", &N, &M);
    (N<M) ? printf("%d\n%d\n", &N, &M) : printf("%d\n%d\n" , &M, &N);

    return 0;
}