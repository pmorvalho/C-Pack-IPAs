
#include <stdio.h>
#include <string.h>

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

void maiusculas(char s[]) {
    int comprimento = strlen(s);
    for(int i = 0; i < comprimento; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
}

int main()
{
    char s[100];
    leLinha(s);
    maiusculas(s);
    printf("%s\n", s);
    return 0;
}