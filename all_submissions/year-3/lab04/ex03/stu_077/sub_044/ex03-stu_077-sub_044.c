
#include <stdio.h>

#define VECMAX 100

int max(int v[], int n)
{
    int i, m = 0;
    for (i = 0; i < n; i++)
    {
        if (v[i] > m)
            m = v[i];
    }
    return m;
}

int main()
{
    int n, vec[VECMAX], i, m, j;
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &vec[i]);
    }
    m = max(vec, n);
    for (i = m-1; i >= 0; i--)
    {
        for (j = 0; j < n; j++)
        {
            if (vec[j] > i)
            {
                putchar('*');
            }
            else
            {
                putchar(' ');
            }
        }
        printf("\n");
    }
    return 0;
}