

#include <stdio.h>

int main()
{
    int a, b, c, max;

    
    printf("Please Input 3 Numbers\n");
    if (scanf("%d%d%d", &a, &b, &c) != 3)
    {
        
        return 2;
    }

    max = a > b ? a : b;
    max = max > c ? max : c;

    printf("%d\n", max);

    return 0;
}