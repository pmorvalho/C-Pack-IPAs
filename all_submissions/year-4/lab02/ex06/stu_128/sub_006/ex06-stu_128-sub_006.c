
#include <stdio.h>

int main()
{
    float n,max,min,temp;
    scanf("%f", &n);
    scanf("%f", &temp);
    max = temp;
    min = temp;
    for (int i = 1; i<n ;i++)
    {
        scanf("%f", &temp);
        if (temp < min)
        {
            min = temp;
        }
        if (temp > max)
        {
            max = temp;
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}