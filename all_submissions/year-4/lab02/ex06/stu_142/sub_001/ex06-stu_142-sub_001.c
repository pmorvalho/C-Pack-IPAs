
#include <stdio.h>

int main()
{
    float x, y, z, w, min, max;
    scanf("%f %f %f %f", &x, &y, &z, &w);
    min = max = x;
    if (y < min)
        min = y;
    if (y > max)
        max = y;
    if (z < min)
        min = z;
    if (z > max)
        max = z;
    if (w < min)
        min = w;
    if (w > max)
        max = w;
    printf("min: %f, max: %f\n", min, max);
    return 0;
}