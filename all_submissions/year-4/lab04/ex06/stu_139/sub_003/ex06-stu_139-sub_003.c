

#include <stdio.h>
#include <ctype.h>

int maiusculas(char s[])
{
    int i = 0;
    char c;

    while ((c = getchar()) != '\n' && c != EOF)
    {
        s[i++] = toupper(c);
    }

    s[i] = '\0'; 
    return i;    
}

int main()
{
    char linha[80];

    int numCaracteres = maiusculas(linha);

    printf("%s\n", linha);
}