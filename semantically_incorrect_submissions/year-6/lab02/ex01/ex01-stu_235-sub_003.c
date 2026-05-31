

#include <stdio.h>
#define QUANTIDADE 3

int main ()
{
    int x, max, i;

    for(i = 0; i < QUANTIDADE; i++)
    {
        scanf("%d",&x);
        if (i == 1)
            max = x;
        else
        {
            if (x > max)
                max = x;
        }
    }

    printf("%d\n", max);
    return 0;
}