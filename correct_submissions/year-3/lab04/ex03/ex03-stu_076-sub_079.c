
#include <stdio.h>

#define VECMAX 100

int main()
{
    int n = 101, vec[VECMAX], i, j, max = 0;

    while (n < 1 || n > 99)
    {
        scanf("%d", &n);
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &vec[i]);
        if (vec[i] > max)
        {
            max = vec[i];
        }
    }

    for (i = 0; i < max; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i >= max - vec[j])
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
