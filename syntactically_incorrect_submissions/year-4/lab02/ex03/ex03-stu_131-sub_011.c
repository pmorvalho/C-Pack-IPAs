
#include <stdio.h>

main()
{
    int N, M;

    scanf("%d%d", &N, &M);
    if (N%M == 0)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
}