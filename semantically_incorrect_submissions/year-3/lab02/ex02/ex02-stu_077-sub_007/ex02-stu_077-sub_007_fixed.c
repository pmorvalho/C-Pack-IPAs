
#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    if (M > N)
        printf("%d\n%d", N, M);
    else
        printf("%d\n%d", M, N);
    printf("\n");
    return 0;
}
