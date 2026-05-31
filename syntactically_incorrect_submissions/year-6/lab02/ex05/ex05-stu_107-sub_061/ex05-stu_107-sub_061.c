
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for(int i = 1; n + 1 != i; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}