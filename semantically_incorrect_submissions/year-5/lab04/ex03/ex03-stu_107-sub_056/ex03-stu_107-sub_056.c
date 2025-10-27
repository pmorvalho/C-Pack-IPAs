
#include <stdio.h>

#define VECMAX 100

int main()
{
    int n, i, j, v, max = 0;
    int vec[VECMAX];

    
    scanf("%d", &n);

    
    for(i = 0; i < n ; i++)
    {
        scanf("%d", &v);
        if(v > max)
            max = v;
        vec[i] = v;
    }

    for(j = 1; j <= max; j++)
    {
        for(i = 0; i < n; i++)
        {
            if(j <= vec[i])
            {
                putchar('*');
            }
            else
                putchar(' ');
        }
        putchar('\n');        
    }



    return 0;
}