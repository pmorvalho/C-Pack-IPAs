#include <stdio.h>

int N, M;

int main()
{
    scanf("%d", &N);
    scanf("%d", &M);

    if(N <= M)
    {
        printf("%d\n", N);
        printf("%d\n", M);
    }
    else
    {
        printf("%d\n", M);
        printf("%d\n", N);
    }

    return 0;
}

