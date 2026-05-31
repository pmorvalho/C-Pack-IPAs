

#include <stdio.h>

int main()
{
    int n, i, j, max = 0;
    scanf("%d", &n);
    int tab[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
        if (tab[i] > max)
            max = tab[i];
    }

    for(j = 0; j < max; j++)
    {
        for(i = 0; i < n; i++)
        {
            if (max - tab[i] > 0)
                {
                    printf(" ");
                    tab[i]++;
                }
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}