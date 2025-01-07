
#include <stdio.h>

int main()
{   
    int n;
    scanf("%d", &n);
    int i = n, c = 0;
    while (i > 0)
    {
        if (n % i == 0)
            ++c;
        --i;
    }
    printf("%d\n", c);
    return 0;
}