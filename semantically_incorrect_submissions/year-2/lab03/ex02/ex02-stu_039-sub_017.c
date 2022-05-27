#include <stdio.h>

void piramide(int N)
{
    int cont, N1 = 1, i;
    for (cont = 1; cont <= N; cont++)
    {
        for (i = 1; i < (N + 1 - cont); i++)
            printf("  ");
        for (N1 = 1; N1 < cont; N1++)
            printf("%d ", N1);
        for (N1 = cont; N1 > 0; N1--)
            printf("%d ", N1);
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    piramide(n);
    return 0;
}