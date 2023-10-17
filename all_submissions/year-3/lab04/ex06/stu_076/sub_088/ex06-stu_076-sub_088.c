
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

void maiusculas(char s[])
{
    int i;

    for (i = 0; i < VECMAX; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= ('a' - 'A');
        }
        else if (s[i] == '\0')
        {
            break;
        }
    }
}

int main()
{
    char s[VECMAX];

    leLinha(s);

    maiusculas(s);

    printf("%s\n", s);

    return 0;
}
