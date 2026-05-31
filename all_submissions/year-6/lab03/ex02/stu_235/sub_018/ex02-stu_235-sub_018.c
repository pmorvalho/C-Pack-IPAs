

#include <stdio.h>
#define INICIAL  1

void piramide(int n)
{
    int i, j, d;
    for(i = INICIAL; i <= n; i++)
    {
        
        for(j = INICIAL; j <= i; j++)
        {
            
            if (j == i)
            {
                if (j==INICIAL)
                
                    printf("%*d\n", (n - i)*2 + 1,j);
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
                
                    printf("%*d ", (n - i)*2 + 1,j);
                else
                    printf("%d ",j);
        }
    }
}
int main ()
{
    int num; 
    scanf("%d", &num);
    if (num >= 2)
        piramide(num);
    return 0;
}
