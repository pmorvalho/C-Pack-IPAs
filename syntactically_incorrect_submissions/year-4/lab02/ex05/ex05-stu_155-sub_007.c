
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 1;
    while (i < n + 1)
    {
        printf("%d\n", i);
        ++i;
    }
    
    return 0;
}
