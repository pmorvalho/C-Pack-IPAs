#include <stdio.h>

#define VECMAX 100

int main()
{
    int n, i, j, max=0;
    int vect[VECMAX];
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &vect[i]);
        if (vect[i] > max) 
            max = vect[i];
    }
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < max; j++)
        {
            if (vect[j] > i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}