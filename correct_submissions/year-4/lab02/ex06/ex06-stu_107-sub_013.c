
#include<stdio.h>

int main()
{
    int N, i = 1;
    float min, max, valor;
    
    scanf("%d", &N);

    while( i <= N)
    {
        scanf(" %f", &valor);

        if (i == 1)
        {
            min = valor;
            max = valor;
        }


        if (valor > max)
        {
            max = valor;
        }
        else if (valor < min)
        {
            min = valor;
        }

        i++;
    }
    

    printf("min: %f, max: %f\n", min, max);
    return 0;
}