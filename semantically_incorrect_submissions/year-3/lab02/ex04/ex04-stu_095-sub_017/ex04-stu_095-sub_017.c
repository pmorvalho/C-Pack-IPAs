

#include <stdio.h>
int main()
{
    int N, M, W;
    scanf("%d %d %d", &N, &M, &W);
    if(N>M && N>W)
    {
        if (M>W)
        {
            printf("%d %d %d", W, M, N);
        }
        else
        {
            printf("%d %d %d", M, W, N);
        }
    }
    if(M>N && M>W)
    {
        if (N>W)
        {
            printf("%d %d %d", W, N, M);
        }
        else 
        {
            printf("%d %d %d", N, W, M);
        }
    }
    if(W>N && W>M)
    {
        if (N>M)
        {
            printf("%d %d %d", M, N, W);
        }
        else
        {
            printf("%d %d %d", N, M, W);
        }
    }
    return 0;
}