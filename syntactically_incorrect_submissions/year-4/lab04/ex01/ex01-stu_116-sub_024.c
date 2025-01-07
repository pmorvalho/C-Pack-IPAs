
#include <stdio.h>

#define VECMAX 100
int main()
{
    int n, numero;
    scanf("%d", &n);
    if (n > VECMAX)
    {
        return 1;
    }
    while (n != 0)
    {
        scanf("%d", &numero);
        for (int i = 0; i != numero; i++)
        {
            printf("*");
        }
        printf("\n");
        n--;
    }
    return 0;
}