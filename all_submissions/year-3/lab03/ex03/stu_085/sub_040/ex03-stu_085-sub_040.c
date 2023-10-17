
#include <stdio.h>

void cruz(int N)
{
    int i,j,x;
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= N; j++)
        {
            if(i==j || N+1-i==j)
            {
                putchar('*');
                if (j-1!=N)
                {
                    putchar(' ');
                }
            }
        
            else
            {
                putchar('-');
                if (j-1!=N)
                {
                    putchar(' ');
                }
            }

        }
        putchar('\n');
    }
}

int main()
{
   int N;
   scanf("%d", N);
   cruz(N);
   return 0;
}