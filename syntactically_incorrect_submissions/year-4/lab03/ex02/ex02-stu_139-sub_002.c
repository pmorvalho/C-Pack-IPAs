

#include <stdio.h>

void piramide(int n)
{
    for (int c = 1; c <= n; c++)
    {
        int spaces = 2 * (n - c);

        printf("%*s", spaces, "");

        if (c == 1)
        {
            printf("1\n");
        }
        else
        {
            for (int l = 1; l < c; l++)
            {
                printf("%d ", l);
            }
            for (int l = c; l > 1; l--)
            {
                printf("%d ", l);
            }
            printf("1");
            printf("%*s", spaces, "");
            printf("\n");
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    piramide(n);
}