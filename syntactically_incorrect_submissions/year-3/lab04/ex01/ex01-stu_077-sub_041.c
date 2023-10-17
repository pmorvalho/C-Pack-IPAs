
#include <stdio.h>

#define VECMAX 100

int main()
{
    int vec[VECMAX], n;
    scanf ("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vec[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < vec[i]; j++)
        {
            putchar('*');
        }
        printf("\n");
    }
    return 0;
}