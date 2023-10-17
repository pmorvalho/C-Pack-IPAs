
#include <stdio.h>



#define INICIO 0

int main()
{
    int n, i;
    float min, max, num;
    scanf("%d", &n);
    for(i = INICIO; i <= n; i++)
    {
        scanf("%f", &num);
        if(num > min)
            max = num;
        else
            min = num;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0
}