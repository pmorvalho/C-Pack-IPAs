#include <stdio.h>

int main()
{
    int v1, v2, v3;
    scanf("%d %d %d", &v1, &v2, &v3);
    if (v1 > v2) {
        if (v1 > v3)
        {
            printf("%d\n", v1);
        }
        else
        {
            printf("%d\n", v3);
        }
    }
    else
    {
        if (v2 > v3)
        {
            printf("%d\n", v2);
        }
        else
        {
            printf("%d\n", v3);
        }
    }
    return 0;
}