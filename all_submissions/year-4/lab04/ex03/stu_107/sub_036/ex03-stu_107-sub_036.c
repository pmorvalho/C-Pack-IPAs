
#include <stdio.h>
#define VECMAX 100


int main()
{
    int n, i, j, vec[VECMAX], max = 0;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &vec[i]);
        if ( max < vec[i])
            max = vec[i];
    }

    for(j = max; 0 < j; j--)
    {
        for( i = 0; i < n; i++)
        {
            if (j <= vec[i])
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}