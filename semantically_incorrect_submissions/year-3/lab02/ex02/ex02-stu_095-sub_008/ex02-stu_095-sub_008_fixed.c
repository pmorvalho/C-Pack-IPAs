
#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d\t%d", &N, &M);
    if(N>M)
    {
        printf("%d\n", M);
        printf("%d", N);
    }
    if(M>N)
    {
        printf("%d\n", N);
        printf("%d", M);
    }
    printf("\n");
    return 0;
}
