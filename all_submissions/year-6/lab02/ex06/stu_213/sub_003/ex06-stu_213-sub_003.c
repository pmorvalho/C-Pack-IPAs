

#include <stdio.h>

int main()
{
    int i, quantos;
    float atual, max, min;
    
    scanf("%d", &quantos);
    for (i = 0; i < quantos; i++)
    {
        scanf("%f", &atual);
        if (i == 0)
            max = min = atual;
        if (atual > max)    
            max = atual;
        else if (atual < min)
            min = atual;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}       

