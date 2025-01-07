
#include <stdio.h>
#define VECMAX 100

int main()
{
    int n;

    scanf("%d", &n);

    if (n > VECMAX)
        return 0;
    int v[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}