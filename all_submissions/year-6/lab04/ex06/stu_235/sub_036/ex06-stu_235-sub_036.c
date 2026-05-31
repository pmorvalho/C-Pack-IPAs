
#include <stdio.h>

void maiusculas(char s[])
{
    char c;
    int i = 0;
    while((c = getchar()) != EOF && c != '\n')
    {
        if (c <= 'z' && c >= 'a')
            s[i] = c - 32;
        else 
            s[i] = c;
        i++;
    }
    s[i] = '\0';
}

int main ()
{
    char linha[80];
    maiusculas(linha);
    printf("%s\n", linha);
    return 0;
}