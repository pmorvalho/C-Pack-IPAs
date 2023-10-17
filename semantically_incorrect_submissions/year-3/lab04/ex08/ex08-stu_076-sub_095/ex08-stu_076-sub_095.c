
#include <stdio.h>
#include <string.h>

#define VECMAX 100
#define TRUE 1
#define FALSE 0

int leLinha(char s[])
{
    int soma = 0, c, i = 0;
    char end[4];

    end[0] = '\n';
    end[1] = ' ';
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

void compara(char s[], char s2[])
{
    int i, primeiroMaior;

    for (i = 0; i < VECMAX; i++)
    {
        if (s[i] > s2[i])
        {
            primeiroMaior = TRUE;
            break;
        }
        else if (s[i] < s2[i])
        {
            primeiroMaior = FALSE;
            break;
        }
    }

    if (primeiroMaior == FALSE)
    {
        strcpy(s, s2);
    }
}

int main()
{
    char s[VECMAX], s2[VECMAX];

    leLinha(s);
    leLinha(s2);

    printf("%s\n", s);

    return 0;
}
