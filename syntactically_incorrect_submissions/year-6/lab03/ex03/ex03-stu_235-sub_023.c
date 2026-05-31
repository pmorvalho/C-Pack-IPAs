

#include <stdio.h>

void cruz(int n)
{
    int i, j;
    char tab[n][n];

    for (i=0; i<n; i++)
        for (j=0; j<n;j++)
        {
            if (j==i || j==n-i-1)
                tab[i][j] = '*';
            else
                tab[i][j] = '-';
            if (j==n-1)

                printf("%c\n", tab[i][j]);
            else
                printf("%c ", tab[i][j]);
        }
}

int main ()
{
    int num;
    scanf("%d", &num);
    cruz(num);

    return 0;
}