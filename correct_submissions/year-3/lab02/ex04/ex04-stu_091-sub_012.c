
#include <stdio.h>

int main()
{
    int M, N, O;
    scanf("%d",&N);
    scanf("%d",&M);
    scanf("%d",&O);

    if (M > N && M > O)
    {
        if (N > O)
        {
            printf("%d %d %d\n",O,N,M);
        }
        else
        {
            printf("%d %d %d\n",N,O,M);
        }
    }
    if (M < N && N > O)
    {
        if (M > O)
        {
            printf("%d %d %d\n",O,M,N);
        }
        else
        {
            printf("%d %d %d\n",M,O,N);
        }
    }
    else
    {
        if (N > M)
        {
            printf("%d %d %d\n",M,N,O);
        }
        else
        {
            printf("%d %d %d\n",N,M,O);
        }
    }
    return 0;
}