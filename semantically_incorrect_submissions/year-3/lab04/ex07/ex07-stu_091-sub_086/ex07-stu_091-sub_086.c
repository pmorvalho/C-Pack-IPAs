
#include <stdio.h>
#include <string.h>

#define MAX 100

void apagaCaracter(char s[], char c)
{
    int i, j;

    for (i = 0; s[i] != '\0';i++)
    {
        if (s[i] == c)
        {
            for (j = i; s[j] != '\0';j++)
                s[j] = s[j+1];
        i--;
        }
    }
}

int leLinha(char s[MAX])
{
    int i;
    
    for (i = 0; i < MAX; i++)
    {
        s[i] = getchar();
        if (s[i] == '\n' || s[i] == EOF)
            break;
    }
    s[i] = '\0';
    return 0;
}

int main()
{
    char s[MAX],c;
    leLinha(s);
    c = getchar();
    apagaCaracter(s,c);
    printf("%s",s);
    return 0;
}