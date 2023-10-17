
#include <stdio.h>
#include <string.h>

#define VECMAX 100

int leLinha(char s[])
{
    int soma = 0, c, i = 0;
    char end[3];

    end[0] = '\n';
    end[1] = EOF;
    end[2] = '\0';

    while (! strchr(end, (c = getchar())))
    {
        s[i] = c;
        soma++;
        i++;
    }

    s[i] = '\0';

    return soma;
}

void apagaCaracter(char s[], char c)
{
    int i, delta = 0;

    for (i = 0; i < VECMAX; i++)
    {
        if (s[i] == c)
        {
            delta++;
        }
        s[i] = s[i + delta];
    }
}

int main()
{
    char s[VECMAX], c;

    leLinha(s);

    c = getchar();

    apagaCaracter(s, c);

    printf("%s\n", s);

    return 0;
}
