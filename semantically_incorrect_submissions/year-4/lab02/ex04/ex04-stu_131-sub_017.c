
#include <stdio.h>
int main()
{
    int v1, v2, v3, intmd;

    scanf("%d%d%d", &v1, &v2, &v3);
    if (v1>v2)
    {
        intmd = v2;
        v2 = v1;
        v1 = intmd;
    }
    if (v2>v3)
    {
        intmd = v3;
        v3 = v2;
        v2 = intmd;
    }
    if (v1>v2)
    {
        intmd = v2;
        v2 = v1;
        v1 = intmd;
    }
    printf("%d%d%d", v1, v2 ,v3);
    return 0;
}