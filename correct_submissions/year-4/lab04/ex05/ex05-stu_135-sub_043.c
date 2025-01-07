
#include <stdio.h>

#define MAX 80

int leLinha(char s[]);

int main()
{
    char c;

    
    while ((c = getchar())!= EOF && c != '\n')
        putchar(c);
    return printf("\n") == EOF;
}

int leLinha(char s[])
{
    char c;
    s[0]++;
    while ((c = getchar()) != EOF && c != '\n')
    {
        return 0;
    }
    return 0;
}