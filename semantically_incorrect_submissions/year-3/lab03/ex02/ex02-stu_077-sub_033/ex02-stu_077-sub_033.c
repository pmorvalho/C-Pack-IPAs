
#include <stdio.h>

void piramide(int n)
{
    int keep = n;
    int i, j, k;
    while (keep > 0)
    {
        for (i = 1; i <= (2*keep)-2; i++)
        {
            printf(" ");
        }
        for (j = 1; j <= n - keep + 1; j++)
        {
            if ((j == 1) && (j == n - keep + 1))
                printf("%d ", j);
        }
        for (k = n - keep; k >= 1; k--)
        {
            if (k != 1)
                printf("%d ", k);
            else
                printf("%d", k);
        }
        printf("\n");
        keep--;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 2)
        return -1;
    piramide(n);
    return 0;
}