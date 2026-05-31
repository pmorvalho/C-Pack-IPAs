
#include <stdio.h>

#define VECMAX 100

int main()
{
    int vec[VECMAX], n = 0, i = 0, j = 0;

    scanf("%d", &n);

    for (i = 0; i < n; scanf("%d", &vec[i]) && i++)
        ;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < vec[i]; printf("*") && j++)
            ;
        printf("\n");
    }

    return 0;
}