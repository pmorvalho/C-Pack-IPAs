
#include <stdio.h>

int main()
{
    int N;
    float min, max, n;

    scanf("%d", &N);

    for(int i = 0; N != i; i++)
    {
        scanf("%f", &n);
        if(i == 0)
        {
            min = n;
            max = n;
        }
        else
        {
            if ( n > max)
            {
                max = n;
            }
            else if(n < min)
            {
                min = n;
            }
        }
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}