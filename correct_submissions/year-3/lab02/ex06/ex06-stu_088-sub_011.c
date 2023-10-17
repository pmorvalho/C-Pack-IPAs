
#include <stdio.h>

int main()
{
    int N;
    float min, max, v;
    
    scanf("Quantos números vai introduzir?\nR:%d", &N );
    scanf("%f", &v);
    min = max = v;
    while(--N)
    {
        scanf("%f", &v);
        if(v > max)
            max = v;
        if(v < min)
            min = v;
    }
    printf("min: %f, max: %f\n", min, max);

    return 0;
}