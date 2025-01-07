
#include <stdio.h>

int main()
{
    int N, M;


    scanf("%d %d", &N, &M);

    if( N > M )
    {
        printf("%d\n", M);
        printf("\n");
        printf("%d\n", N);
    }
    else
    {
        printf("%d\n",N);
        printf("\n");
        printf("%d\n", M);
    }

    return 0;
}