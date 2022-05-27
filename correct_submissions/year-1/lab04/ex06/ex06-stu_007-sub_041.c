#include <stdio.h>

#define MAX 80

int leLinha(char s[]);
void maiusculas(char s[]);


int main()
{
    char s[MAX];

    leLinha(s);
    maiusculas(s);
    printf("%s\n", s);

    return 0;
}


int leLinha(char s[])
{
    int counter, c;

    counter = 0;
    while (counter < 79 && ((c = getchar()) != EOF) && (c != '\n'))
    {
        s[counter] = c;
        ++counter;
    }
    s[counter] = '\0';

    return counter;
}

void maiusculas(char s[])
{
    int i = 0;

    while (s[i] != '\0')
    {
        if ('a' <= s[i] && s[i] <= 'z')
        {
            s[i] = 'A' + (s[i] - 'a');
        }
        ++i;
    }
}
