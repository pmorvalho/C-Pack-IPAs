
#include <stdio.h>



#define INICIO 0

int main()
{
    int n, i;
    float min = INICIO, max = INICIO, num;
    scanf("%d", &n);
    for(i = INICIO; i <= n; i++)
    {
        scanf("%f", &num);
        if(num > max)
            max = num;
        else if (num < min)
            min = num;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}