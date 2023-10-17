
#include <stdio.h>

int main()
{
    int M, N;
    scanf("%d",&M);
    scanf("%d",&N);

    if (M < N)
    {
        printf("%d\n%d\n",M,N);
    }
    else
    {
        printf("%d\n%d\n",N,M);
    }
    return 0;
}