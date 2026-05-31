

#include <stdio.h>

int lelinha(char s[])
{
    char c;
    int i = 0;
    while((c = getchar()) != EOF && c != '\n')
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

int main ()
{
    char linha[80];
    lelinha(linha);
    printf("%s\n", linha);
    return 0;
}