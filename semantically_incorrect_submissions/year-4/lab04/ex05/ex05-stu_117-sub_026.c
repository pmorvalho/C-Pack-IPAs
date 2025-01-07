
#include <stdio.h>

int leLinha(char s[])
{
    char caracter;
    int c = 0;
    while((caracter = getchar()) != EOF && caracter != '\n')
    {
        s[c] = caracter;
        c++;
    }
    s[c] = '\0';
    return c;
}

int main()
{
    char s[100];
    leLinha(s);
    printf("%s", s);
    return 0;
}