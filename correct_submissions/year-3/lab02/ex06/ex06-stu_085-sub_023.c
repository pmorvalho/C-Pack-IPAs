
#include <stdio.h>

int main()
{
    int num, i;
    float min, max, dado;
    scanf("%d", &num);
    for (i=0; i<num; i++)
    {
        scanf("%f", &dado);
        if (i==0)
        {
            min=dado;
            max=dado;    
        };
        if (dado<min)
        {
            min=dado;
        };
        if (dado>max)
        {
            max=dado;
        };
                   
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}