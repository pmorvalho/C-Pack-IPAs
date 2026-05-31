

#include <stdio.h>
#define QUANTIDADE 3

int main ()
{
    int x, max;
    int i = 0;
    while (i < QUANTIDADE)
    {
        if ((scanf ("%d", &x)) == 1)
        {
            if ((i == 0) || x > max)
            max = x;
        i++;
        }
    }
    printf("%d\n", max);
    return 0;
}