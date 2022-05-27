#include <stdio.h>
#include <string.h>

#define MAX 80

void apagaCaracter(char s[], char c)
{
    int i, j = 0;
    char t[MAX];
    
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] != c)
        {
            t[j] = s[i];
            j++;
        }
    }

    t[j] = '\0';

    strcpy(s, t);
}

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

int main()
{
    char s[MAX];
    int c;

    leLinha(s);
    c = getchar();

    apagaCaracter(s, c);

    printf("%s", s);

    return 0;
}