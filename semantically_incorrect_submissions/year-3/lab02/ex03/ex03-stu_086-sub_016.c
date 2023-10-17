

#include <stdio.h>

int main()
{
    int n, m;

    printf("Introduza dois números inteiros positivos: \n");
    scanf("%d%d", &n, &m);

    if ((n%m) == 0)
    {
        printf("%s\n", "yes");
    }
    else 
    {
        printf("%s\n", "no");
    }
    return 0;
}
