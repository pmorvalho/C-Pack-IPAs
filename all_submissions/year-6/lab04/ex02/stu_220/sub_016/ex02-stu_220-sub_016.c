
#include <stdio.h>

#define VECMAX 100

int main()
{
    int vec[VECMAX], n = 0, i = 0, j = 0, max = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &vec[i]);
        if (vec[i] > max)
            max = vec[i];
    }

    for (i = 0; i < max; i++)
    {
        for (j = 0; j < n; j++)
            if (i < vec[j])
                printf("*");
            else
                printf(" ");
        printf("\n");
    }

    return 0;
}
