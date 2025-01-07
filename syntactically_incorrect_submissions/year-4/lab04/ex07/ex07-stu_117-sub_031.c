
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

void apagaCaracter(char s[], char caracter)
{
    int c = 0, comprimento = strlen(s);
    char res[comprimento + 1];
    for(int i = 0; i < comprimento; i++)
    {
        if(s[i] != caracter)
        {
            res[c] = s[i];
            c++;
        }
    }
    res[c] = '\0';
    strcpy(s, res);
}

int main()
{
    char s[100], caracter;
    leLinha(s);
    scanf("%c", &caracter);
    apagaCaracter(s, caracter);
    printf("%s\n", s);
    return 0;
}