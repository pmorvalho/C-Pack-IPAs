
#include <stdio.h>

void piramide(int n)
{
    int key = n;
    int i, j, k;
    while (key > 0)
    {
        for (i = 1; i <= (2*key)-2; i++)
        {
            printf(" ");
        }
        for (j = 1; j <= n - key + 1; j++)
        {
            if ((j == 1) && (j == n - key + 1))
                printf("%d ", j);
        }
        for (k = n - key; k >= 1; k--)
        {
            if (k != 1)
                printf("%d ", k);
            else
                printf("%d", k);
        }
        printf("\n");
        key--;
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