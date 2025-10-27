

#include <stdio.h>

int main(){

    int N, M;

    scanf("%d %d", &N, &M);

    printf("%d\n%d\n", N < M ? N : M , M > N ? M : N);

    return 0;
}
