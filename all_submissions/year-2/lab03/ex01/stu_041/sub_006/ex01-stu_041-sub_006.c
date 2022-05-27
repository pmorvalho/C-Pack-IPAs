#include <stdio.h>


void quadrado(int n)
{
    int row, col;
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            col == n - 1 ? printf("%d", row + col + 1) : printf("%d\t", row + col + 1);
        }
        printf("\n");
    }

    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 2)
        quadrado(n);
    return 0;
}





#define FORA 0
#define DENTRO 1
#define ESC 2



