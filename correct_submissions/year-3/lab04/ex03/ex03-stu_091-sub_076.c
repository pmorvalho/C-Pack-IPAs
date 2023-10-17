
#include <stdio.h>

#define VECMAX 100

int main()
{
    int s[VECMAX],i,c,max=0;
    scanf("%d",&c);

    for (i = 0; i < c; i++)
    {
        scanf("%d",&s[i]);
        if (s[i] > max)
            max = s[i];
    }

    while (max != 0)
    {
        for (i = 0; i < c ; i++)
        {
            if (s[i] == max)
            {    
                putchar('*');
                s[i] --;
            }
            else
                putchar(' ');
        }
        putchar('\n');
        max--;
    }
    
    return 0;
}