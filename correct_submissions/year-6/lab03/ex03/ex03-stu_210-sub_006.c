
#include <stdio.h>

void cruz(int n)
{
    int l, c;
    for(l = 0; l < n; l++)
    {
        for(c = 0; c < n; c++)
        {
            if(c)
                putchar(' ');
            putchar((c == l) || (c+l == n-1) ? '*' : '-');
        }
        putchar('\n');
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    cruz(n);
    return 0;
}
