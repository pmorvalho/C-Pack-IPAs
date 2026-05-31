

#include <stdio.h>

int main ()
{
    int n, i, j;
    scanf("%d", &n);
    int tab[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
        for(j = 0; j < tab[i]; j++)
            printf("*");
        printf("\n");
    }
    return 0;

}