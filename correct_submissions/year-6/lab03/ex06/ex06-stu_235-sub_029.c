

#include <stdio.h>
#define DIVISAO 9

int char_int(char c)
{
    return c - '0';
}

int main ()
{
    char c;
    int n;
    long soma = 0;

    while ((c = getchar())!= EOF)
    {
        n = char_int(c);
        soma += n;
    }
    if (soma % DIVISAO == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}