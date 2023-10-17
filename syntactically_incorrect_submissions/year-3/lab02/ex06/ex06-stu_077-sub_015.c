
#include <stdio.h>

int main()
{
    int n;
    float min, max, x;
    scanf("%d ", &n);
    int first = n;
    while (n > 0)
    {  
        if (n == 1)
        {
            scanf("%f", &x);
        }
        else
        {
            scanf("%f ", &x);
        }
        if (first == n)
        {
            min = x;
            max = x;
        }
        else
        {
            if (x < min)
            {
                min = x;
            }
            if (x > max)
            {
                max = x;
            }
        }
        n--;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}