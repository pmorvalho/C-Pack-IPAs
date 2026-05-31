

#include <stdio.h>

int main()
{
    long prim, seg;

    scanf("%ld %ld", &prim, &seg);

    if (prim % seg == 0)
        printf("\nyes\n");
    else
        printf("\nno\n");
    
    return 0;
}