
#include <stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);

    printf("%d\n%d\n", N > M ? M : N, N > M ? N : M);
    return 0;
}