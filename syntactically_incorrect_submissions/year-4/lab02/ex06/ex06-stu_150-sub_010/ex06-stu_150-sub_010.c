

#include <stdio.h>

int main()
{
    int numb;
    float aux, min, max;
    scanf("%d", &numb);
    scanf("%f",&aux);
    min = aux;
    max = aux;
    if (numb > 1)
    {
        for(int i = 2; i <= numb; i++)
        {
            scanf("%f", &aux);
            if (aux < min) min = aux;
            else if (aux > max) max = aux;
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}