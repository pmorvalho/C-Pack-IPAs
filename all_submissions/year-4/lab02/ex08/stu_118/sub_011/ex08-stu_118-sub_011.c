
#include <stdio.h>

int main()
{
    int n, i = 1;
    float m, r=0;
    scanf("%d", &n);
    while (i <= n)
    {
        scanf("%f", &m);
        r += m;
        ++i;
    }
    printf("%.2f\n", r/n);
    return 0;
}