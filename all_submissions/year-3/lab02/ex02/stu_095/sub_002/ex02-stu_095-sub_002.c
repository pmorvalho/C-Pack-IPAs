
#include <stdio.h>
int main()
{
    int N, M, maior;
    scanf("%d\t%d", &N, &M);
    if(N>M)
    {
        printf("%d\n", M);
        printf("%d", N);
    }
    else
    {
        printf("%d\n", N);
        printf("%d", M);
    }
    return 0;
}