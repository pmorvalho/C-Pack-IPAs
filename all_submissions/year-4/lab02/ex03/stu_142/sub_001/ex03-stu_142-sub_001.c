
#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &M, &N);
    if (M % N == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}