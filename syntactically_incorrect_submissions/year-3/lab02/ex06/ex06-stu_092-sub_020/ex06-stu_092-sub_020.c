
#include <stdio.h>



#define INICIO 1
#define ZERO 0

int main()
{
    int n, i;
    float min = ZERO, max = ZERO, num;
    scanf("%d", &n);
    for(i = INICIO; i <= n; ++i)
    {
        scanf("%f", &num);
        if(num > max)
            min = max;
            max = num;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}