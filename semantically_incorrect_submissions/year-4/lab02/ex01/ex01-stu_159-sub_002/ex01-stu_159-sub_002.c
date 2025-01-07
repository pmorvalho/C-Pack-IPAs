#include <stdio.h>

int main()
{
    int v1, v2, v3;
    scanf("%d %d %d", &v1, &v2, &v3);
    if (v1 > v2) {
        if (v1 > v3)
        {
            printf("%d", v1);
        }
        else
        {
            printf("%d", v3);
        }
    }
    else
    {
        if (v2 > v3)
        {
            printf("%d", v2);
        }
        else
        {
            printf("%d", v3);
        }
    }
    return 0;
    
}