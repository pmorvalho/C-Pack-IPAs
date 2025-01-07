
#include <stdio.h>

int main()
{
    int M, N;

    scanf("%d %d", &M, &N);
    if (M < N)
    {
        printf("%d\n", M);
        printf("%d\n", N);
    }
    else
    {
        printf("%d\n", N);
        printf("%d\n", M);
    }
    return 0;
}
