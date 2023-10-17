
#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    if (M > N)
        printf("%d\n%d\n", N, M);
    else
        printf("%d\n%d\n", M, N);
    return 0;
}