#include <stdio.h>

#define VECMAX 100

int main()
{
    int n, i, j;
    int vect[VECMAX];

    scanf("%d", &n);
    
    vect[0] = 0;
    

    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &vect[i]);
    }

    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < vect[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}