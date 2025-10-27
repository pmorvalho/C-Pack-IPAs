
#include <stdio.h>



int main()
{
    int N, M;

    scanf("%d%d", &N, &M);

    N > M ? printf("%d\n%d\n", M, N) : printf("%d\n%d\n", N, M);



    return 0;
}