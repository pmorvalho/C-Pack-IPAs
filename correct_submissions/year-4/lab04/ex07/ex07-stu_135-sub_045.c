
#include <stdio.h>

#define MAX 80

int leLinha(char s[]);
void apagaCaracter(char s[], char c);

int main()
{
    char s[MAX], c;

    leLinha(s);
    c = getchar();
    apagaCaracter(s, c);

    return printf("\n") == EOF;
}

int leLinha(char s[])
{
    int i = 0, c;
    
    while((c = getchar()) != EOF && c != '\n') 
        s[i++] = c;

    s[i] = '\0';

    return i;
}

void apagaCaracter(char s[], char c)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            printf("%c",s[i]);
}