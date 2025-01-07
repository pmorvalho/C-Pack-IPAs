
#include <stdio.h>

int main()
{
    int M, N, O;

    scanf("%d %d %d", &M, &N, &O);
    if (M < N)
    {
        if (M < O)
        {
            printf("%d ", M);
            if (N < O)
            {
                printf("%d ", N);
                printf("%d\n", O);
            }
            else
            {
                printf("%d ", O);
                printf("%d\n", N);
            }
        }
        else
        {
            printf("%d ", O);
            printf("%d ", M);
            printf("%d\n", N);
        }
    }
    else
    {
        if (N < O)
        {
            printf("%d ", N);
            if (M < O)
            {
                printf("%d ", M);
                printf("%d\n", O);
            }
            else
            {
                printf("%d ", O);
                printf("%d\n", M);
            }
        }
        else
        {
            printf("%d ", O);
            printf("%d ", N);
            printf("%d\n", M);
        }
    }
    return 0;
}
