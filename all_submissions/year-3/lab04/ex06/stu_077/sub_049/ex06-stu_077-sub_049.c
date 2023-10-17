
#include <stdio.h>

#define MAX 80

void maiusculas(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 'a' + 'A';
        }
    }
}
int main()
{
    int i, c;
    char s[MAX];
    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
    {
        s[i] = c;
    }
    s[i] = '\0';
    maiusculas(s);
    printf("%s\n", s);
    return 0;
}