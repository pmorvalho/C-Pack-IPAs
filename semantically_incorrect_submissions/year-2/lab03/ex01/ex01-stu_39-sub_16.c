#include <stdio.h>
void quadrado(int N)
{
    int N1 = 1, cont;
    for (cont = 1; cont <= N; cont++)
    {
        for (N1 = cont; N1 <= (N - 1 + cont); N1++)
        {
            printf("%d\t", N1);
        }
        printf("\b\n");
    }
}
int main()
{
    int N;
    scanf("%d", &N);
    quadrado(N);
    return 0;
}
