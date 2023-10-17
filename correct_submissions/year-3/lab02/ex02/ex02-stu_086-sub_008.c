

#include <stdio.h>

int main()
{
    int v1, v2, vmax, vmin;

    scanf("%d%d", &v1, &v2);
    if (v1 < v2)
    {
        vmax = v2;
        vmin = v1;
    }
    else 
    {
        vmax = v1;
        vmin = v2;
    }
    printf("%d\n%d\n", vmin, vmax);

    return 0;
}
