#include <stdio.h>

#define MAX 80

int leLinha(char s[])
{
    int i, c, n = 0;
    
    for(i = 0;((c = getchar()) != '\n') && (c != EOF); i++)
    {
        s[i] = c;
        n++;
    }

    return n;
}

void maiusculas(char s[])
{
    int i;
    
    for(i = 0; s[i] != '\0'; i++)
        if('a' <= s[i] && s[i] <= 'z')
            s[i] = s[i] + 'A' - 'a';
}

int main()
{
    char s[MAX];

    leLinha(s);
    maiusculas(s);

    printf("%s\n", s);

    return 0;
}