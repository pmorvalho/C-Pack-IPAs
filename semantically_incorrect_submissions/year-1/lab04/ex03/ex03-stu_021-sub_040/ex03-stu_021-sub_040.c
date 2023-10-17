#include <stdio.h>

#define VECMAX 100



int main()
{
    int n, i, j, max;
    int tab[VECMAX];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
        if(tab[i] > max)
            max = tab[i];
    }
    for(i = 0; i < max; i++)
    {
        for(j = 0; j < n; j++)
        {
            if (tab[j] >= max - i)
                printf("*");
            else
                printf(" "); 
        }
        printf("\n");
    }
    return 0;
}