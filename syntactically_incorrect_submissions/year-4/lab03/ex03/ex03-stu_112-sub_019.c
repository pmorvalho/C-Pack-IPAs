
#include <stdio.h>

void cruz(int n) 
{
    
    for (int i = 1; i < n+1; i++)
    {
       for(int j = 1; j < n+1; j++)
       {
            if(i == 1 || i == n)
            {
                if( j == 1 || j == n)
                {
                    printf("* ");
                }
                else
                {
                    printf("- ");
                }
            }
            else
            {
                if(j == i || j == n-i+1)
                {
                    printf("* ");
                }
                else
                {
                    printf("- "); 
                }
            }

       }

        printf("\n");
    }
    
}

int main()
{
    int n;
    scanf("%d", &n);
    cruz(n);
    return 0;
}
