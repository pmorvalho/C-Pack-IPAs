
#include <stdio.h>



#define INICIO 1
#define ZERO 0

int main()
{
    int n, i;
    float min = ZERO, max = ZERO;
    scanf("%d", &n);
    for(i = INICIO; i <= n; ++i)
    {
        scanf("%f", &min);
        if(min > max)
            max = min;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}