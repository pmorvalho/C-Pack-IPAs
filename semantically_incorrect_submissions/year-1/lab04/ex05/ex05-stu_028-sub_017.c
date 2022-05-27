#include <stdio.h>
#include <string.h>
#define MAX 80

int leLinha(char s[]);

int main()
{
    char s[MAX];
    int i, size;

    size = leLinha(s);

    for (i = 0; i < size; ++i)
        putchar(s[i]);

    putchar('\n');
    
    return 0;
}

int leLinha(char s[])
{
    int i = 0;
    char c;
    while ((c = getchar()) != EOF && c != '\n' && i < MAX - 1)
    {
        printf("%d, %s", i, &c);
        s[i++] = c;
        s[i] = '\0';
    }
    return i;
}