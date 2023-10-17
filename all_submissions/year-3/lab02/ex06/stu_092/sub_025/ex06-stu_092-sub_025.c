
#include <stdio.h>



#define INICIO 1
#define ZERO 0

int main()
{
    int n, i;
    float min, max = ZERO, num;
    scanf("%d", &n);
    for(i = INICIO; i <= n; i++)
    {
        scanf("%f", &num);
        if (i == INICIO)
            min = num;
        else if (num <= min)
            min = num;
        else if (num >= max)
            max = num;
        }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}