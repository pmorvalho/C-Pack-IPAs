
#include <stdio.h>
int main()
{
    int n;
    float v, min, max;
    scanf("%d", &n); 
    scanf("%f", &v);
    min = max = v;
    while(--n)
    {
        scanf("%f", &v);
        if (v>max)
            max=v;
        if (v<min)
            min=v;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}