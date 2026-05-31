

#include <stdio.h>

#define MAIS 1
#define MENOS 2
#define NUMERO 3

int number_val(char c)
{
    if ('0'<= c && c<='9')
        return 1;
    else
        return 0;
}

int char_int(char c)
{
    return (c - '0');
}

int numero(char c)
{
    int n = 0;

    while (number_val(c))
    {
        n = n*10 + char_int(c);
        c = getchar();
    }
    ungetc(c, stdin);
    return n;
}

int main ()
{
    char c;
    int estado, res;

    c = getchar();
    res = numero(c);

    while((c = getchar())!= '\n' && c != EOF)
    {
        if (c =='+')
            estado = MAIS;
        else if (c == '-')
            estado = MENOS;
        c = getchar();
        if (estado == MAIS)
            res += numero(c);
        else
            res -= numero(c);

    }
    printf("%d\n", res);
    return 0;
}
