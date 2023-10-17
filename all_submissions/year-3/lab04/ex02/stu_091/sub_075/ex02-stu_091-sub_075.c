
#include <stdio.h>

#define VECMAX 100

int main()
{
    int s[VECMAX], i ,k ,c, max = 0;
    scanf("%d",&c);

    for (i = 0; i < VECMAX && i < c; i++)
    {    
        scanf("%d",&s[i]);
        if (s[i] > max)
            max = s[i];
    }
    for (i = 0; max != 0; max--)
    {
        for (k = 0; k < c ; k++)
        {    if (s[k] != 0)
            {    
                putchar('*');
                s[k] -= 1;
            }
            else
                putchar(' ');
        }
        putchar('\n');    
    }
    return 0;
}  


