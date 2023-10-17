
#include <stdio.h>

#define VECMAX 100

int main()
{
    int s[VECMAX],i,k,c,max=0;
    scanf("%d",&c);

    for (i = 0; i < c; i++)
    {
        scanf("%d",&s[i]);
        if (s[i] > max)
            max = s[i];
    }

    for (k = 0; max != 0; max--)
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
    }
    return 0;
}