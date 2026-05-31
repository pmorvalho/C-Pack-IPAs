
#include <stdio.h>

int main()
{
    int n;
    float min, max, val;
    scanf("%d", &n);
    scanf("%f",&val);
    min = max = val;
    while(--n)
        {
            scanf("%f", &val);
            if(val < min)
                min = val;
            if(val > max)
                max = val;
        }
    printf("min: %f, max: %f", min, max);
    return 0;
}