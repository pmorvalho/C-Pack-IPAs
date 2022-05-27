#include <stdio.h>

int main()
{
    int n, i;

    printf("Introduza um número:\n");

    scanf("%d", &n);

    for (i = 1; i <= n; i +=1)
        printf("%d\n", i);

    return 0;
}