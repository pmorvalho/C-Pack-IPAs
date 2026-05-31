

#include <stdio.h>

int main()
{
    long prim, seg;

    scanf("%ld %ld", &prim, &seg);
    if (prim <= seg)
        printf("\n%ld\n%ld\n", prim, seg);
    else
        printf("\n%ld\n%ld\n", seg, prim);

    return 0;
}