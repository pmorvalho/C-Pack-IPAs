

#include <stdio.h>
#define INICIAL  1

int main ()
{
    int num, i, j, d;
    scanf("%d", &num);

    for(i = INICIAL; i <= num; i++)
    {
        
        for(j = INICIAL; j <= i; j++)
        {
            
            if (j == i)
            {
                if (j==INICIAL)
                
                    printf("%*d\n", (num - i)*2 + 1,j);
                else
                {
                    for (d = i; d >= INICIAL; d--)
                    
                    {
                        if (d == INICIAL)
                        
                            printf("%d\n", d);
                        else
                            printf ("%d ", d);
                    }
                }
            }
            else
                if (j == INICIAL)
                
                    printf("%*d ", (num - i)*2 + 1,j);
                else
                    printf("%d ",j);
        }
    }
    return 0;
}
