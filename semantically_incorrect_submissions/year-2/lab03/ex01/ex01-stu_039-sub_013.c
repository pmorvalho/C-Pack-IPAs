#include <stdio.h>

int main()
{
    int N, N1 = 1, cont;
    scanf("%d", &N);
    for (cont = 1; cont <= N; cont++)
    {
        for (N1 = cont; N1 <= (N - 1 + cont); N1++)
        {
            printf("%d\t", N1);
        }
        printf("\n");
    }
    return 0;
}
