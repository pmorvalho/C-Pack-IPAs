
#include <stdio.h>

main()
{
    int N, M;
    float res;

    scanf("%d%d", &N, &M);
    res = N/M;
    if (res == 0)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
}