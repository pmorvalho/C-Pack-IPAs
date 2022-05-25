#include <stdio.h>
int main()
{
    int n;
    float min, max, i, cont;
    scanf("%d %f", &n, &i);
    min = max = i;
    for (cont = 2; cont <= n; cont++)
    {
        scanf("%f", &i);
        if (i < min)
            min = i;
        if (i > max)
            max = i;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}