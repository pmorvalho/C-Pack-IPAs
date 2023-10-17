

#include <stdio.h>

int main()
{
    int i, n = 0, nd = 0, soma = 0;
    char c;

    c = getchar();
    for ( i = 0; (c != '\n') ; i++, nd++)
    {
        n = c - '0';  
        soma += n;
        c = getchar();
    }
    printf("%d\n%d\n", nd, soma);
    return 0;
}
