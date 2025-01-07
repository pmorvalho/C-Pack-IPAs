
#include <stdio.h>

int main()
{
    int M, N;

    scanf("%d%d", &M, &N);
    if (M>N)
    {
        printf("%d\n%d\n", N, M);
    }
    else
    {
        printf("%d\n%d\n", M, N);
    }
    return 0;
}