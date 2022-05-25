#include <stdio.h>
#include <limits.h>




int main()
{
    int N, i;
    float num, max, min;

    scanf("%d", &N);
    
    max = INT_MIN;
    min = INT_MAX;
    for (i = 0; i < N; ++i)
    {
        scanf("%f", &num);

        if (num < min)
        {
            min = num;
        }
        if (num > max)
        {
            max = num;
        }
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}
