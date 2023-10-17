
#include <stdio.h>
#include <string.h>

#define MAX 100

void maiusculas(char s[])
{
    int i;
    for (i = 0; s[i] != '\0';i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] = s[i] - 32;
        }
    }   
}


int leLinha(char s[MAX])
{
    int i;

    for (i=0; i < MAX; i++)
    {
        s[i] = getchar();
        if (s[i] == '\n' || s[i] == EOF)
            break;
    }
    s[i] = '\0';
    return i;
}


int main()
{
    char s[MAX];
    leLinha(s);
    maiusculas(s);
    printf("%s\n",s);
}