
#include <stdio.h>

#define MAX 80

int leLinha(char s[]);

int main()
{
    char s[MAX];
    int n = 0, i = 0;

    n = leLinha(s);

    for (i = 0; i < n; i++)
        putchar(s[i]);
    printf("\n");

    return 0;
}

int leLinha(char s[])
{
    int i = 0, c = 0;

    while ((c = getchar()) != '\n' && c != EOF)
        s[i++] = c;
    s[i] = '\0';

    return i;
}