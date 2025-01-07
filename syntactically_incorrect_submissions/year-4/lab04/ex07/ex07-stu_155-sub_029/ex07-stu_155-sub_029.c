
#include <stdio.h>
#define MAX 80

void readline(char s[]);
void removechar(char s[], char c);

int main()
{
    char s[MAX], c;

    readline(s);
    c = getchar();
    removechar(s, c);

    printf("%s\n", s);
}

void readline(char s[])
{
    char c;
    int i = 0;

    while ((c = getchar()) != '\0' && c != '\n')
        s[i++] = c;

    s[i] = '\0';
}

void removechar(char s[], char c)
{
    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] == c)
        {
            for (int j = i; s[j] != '\0'; ++j)
            {
                s[j] = s[j + 1];
            }
        }
    }
}