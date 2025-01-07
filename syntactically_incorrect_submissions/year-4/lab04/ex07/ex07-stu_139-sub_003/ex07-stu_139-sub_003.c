

#include <stdio.h>
#include <ctype.h>

char *apagaCaracter(char s[], char c)
{
    int i = 0, j = 0;

    while (s[i] != '\0')
    {
        if (s[i] != c)
        {
            s[j] = s[i];
            j++;
        }
        i++;
    }

    s[j] = '\0';

    return s;
}

int main()
{
    char linha[80];
    char c;

    fgets(linha, sizeof(linha), stdin); 
    scanf("%c", &c);

    char *numCaracteres = apagaCaracter(linha, c);

    printf("%s\n", linha);
}