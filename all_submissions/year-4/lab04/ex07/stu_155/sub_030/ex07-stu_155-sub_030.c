
#include <stdio.h>
#define MAX 80

void readline(char s[]);

int main()
{
    char s[MAX], c;

    readline(s);
    c = getchar();
    
    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] != c)
            putchar(s[i]);
    }

    printf("\n");
}

void readline(char s[])
{
    char c;
    int i = 0;

    while ((c = getchar()) != '\0' && c != '\n')
    {
        s[i] = c;
        i++;
    }

    s[i] = '\0';
}