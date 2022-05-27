#include <stdio.h>

#define VECMAX 100



int main()
{
    int n, i, j;
    int tab[VECMAX];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < tab[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}