
#include <stdio.h>

void piramide (int n)
{
    int i=1,j;

    while (i<=n)
    {
       for (j=1; j<=2*(n-i); j++)
       {
            printf(" ");
       }   
       for (j=1; j<=i; j++)
       {
            printf("%d", j);
            if (j!=i)
            {
                printf(" ");
            }
       }
       for (j=i-1; j>=1; j--)
       {
            printf(" %d", j);
       }
         printf("\n");
        i++;
    
    }
}

int main()
{

    int n;
    scanf("%d", &n);
    piramide(n);
    return 0;
}

