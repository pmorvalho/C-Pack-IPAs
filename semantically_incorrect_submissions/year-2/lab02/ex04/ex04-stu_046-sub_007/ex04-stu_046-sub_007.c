#include <stdio.h>
#include <values.h>

int N, i;
float x, min, max, y;

int main()
{
    scanf("%d", &N);
    scanf("%f", &x);
    
    min = x;
    max = x;

    for(i = 2; i <= N; i += 1)
    {
        scanf("%f", &y);
        
        if(y < min)
            min = y;
        else if(y > max)
            max = y;       
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}

