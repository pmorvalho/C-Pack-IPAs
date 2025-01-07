
#include <stdio.h>

int main()
{
    int M, N, O;

    scanf("%d %d %d", &M, &N, &O);
    if (M < N)
    {
        if (M < O)
        {
            printf("%d", M);
            if (N < O)
            {
                printf("%d", N);
                printf("%d", O);
            }
            else
            {
                printf("%d", O);
                printf("%d", N);
            }
        }
        else
        {
            printf("%d", O);
            printf("%d", M);
            printf("%d", N);
        }
    }
    else
    {
        if (N < O)
        {
            printf("%d", N);
            if (M < O)
            {
                printf("%d", M);
                printf("%d", O);
            }
            else
            {
                printf("%d", O);
                printf("%d", M);
            }
        }
        else
        {
            printf("%d", O);
            printf("%d", N);
            printf("%d", M);
        }
    }
    return 0;
}
