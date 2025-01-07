
#include <stdio.h>

void cruz(int N);

int main()
{
    int n;
    scanf("%d", &n);
    cruz(n);

    return 0;
}

void cruz(int n) 
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%c%c",
                   ((j == i || j == n - i -1)) ? '*' : '-',

                   (j == n - 1 ? '\n' : ' '));
    }
}