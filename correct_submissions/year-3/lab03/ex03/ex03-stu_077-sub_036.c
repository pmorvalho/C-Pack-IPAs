
#include <stdio.h>

void cruz(int n)
{
    int keep = 1;
    int i;
    while (keep <= n)
    {
        for (i = 1; i <= n; i++)
        {
            if (i != n)
            {
                if ((i == keep) || (i == (n-keep+1)))
                    printf("* ");
                else
                    printf("- ");
            }
            else
            {
                if ((i == keep) || (i == (n-keep+1)))
                    printf("*");
                else
                    printf("-");
            }
        }
        printf("\n");
        keep++;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    cruz(n);
    return 0;
}