

#include <stdio.h>

#define VECMAX 100

int main() {
    int n, i, j, val[VECMAX], max = 0;

    scanf("%d", &n);
    for ( i = 0; i < n && i < VECMAX; i++)
    {
        scanf("%d", &val[i]);
        if (val[i] > max)
            max = val[i];
    }
    for ( i = 0; i < max; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (i >= val[j])
            {
                putchar(' ');
            } else
                putchar('*');
        }
        putchar('\n');
    }
    


    return 0;
}