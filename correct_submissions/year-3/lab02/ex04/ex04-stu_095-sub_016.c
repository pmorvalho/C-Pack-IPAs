

#include <stdio.h>
int main()
{
    int N, M, W;
    scanf("%d %d %d", &N, &M, &W);
    if(N>M && N>W)
    {
        if (M>W)
        {
            printf("%d %d %d\n", W, M, N);
        }
        else
        {
            printf("%d %d %d\n", M, W, N);
        }
    }
    if(M>N && M>W)
    {
        if (N>W)
        {
            printf("%d %d %d\n", W, N, M);
        }
        else 
        {
            printf("%d %d %d\n", N, W, M);
        }
    }
    if(W>N && W>M)
    {
        if (N>M)
        {
            printf("%d %d %d\n", M, N, W);
        }
        else
        {
            printf("%d %d %d\n", N, M, W);
        }
    }
    return 0;
}