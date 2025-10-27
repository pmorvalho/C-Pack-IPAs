
#include <stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    printf("%d\n%d", (N<M ? N : M) , (N<M ? M : N));

    return 0;
}