
#include <stdio.h>


void quadrado(int N);

int main()
{
    int n;

    scanf("%d", &n);
    quadrado(n);

    return 0;
}

void quadrado(int N)
{
    int row, col;
    for (row = 0; row < N; row++)
    {
        for (col = 1; col < N; col++)
        {
            printf("%d\t", row + col);
        };
        printf("%d\n", row + col);
    };
}