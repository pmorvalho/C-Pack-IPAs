
#include <stdio.h>
 int main(){
    int i,j;
    int n;
    scanf("%d",&n);
    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <=n; i++)
        {
            if (i==j || i==(n+1)-j)
            {
                if (i==n)
                {
                    printf("*");
                }
                else{
                    printf("* ");                    
                }
            }
            else{
                if (i==n)
                {
                    printf("-");
                }
                else{
                    printf("- ");                    
                }
            }
            
        }
        printf("\n");
    }
    
    return 0;
 }

