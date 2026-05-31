

#include <stdio.h>

int main()
{
    long prim, seg;

    scanf("%ld %ld", &prim, &seg);

    if (prim % seg == 0)
        printf("yes\n");
    else
        printf("no\n");
    
    return 0;
}