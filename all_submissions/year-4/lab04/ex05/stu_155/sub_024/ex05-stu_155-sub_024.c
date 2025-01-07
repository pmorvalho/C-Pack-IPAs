
#include <stdio.h>
#define MAX 80

int main()
{
    char s[MAX], c;
    int i = 0;

    while ((c = getchar()) != '\n' && c != EOF)
    {
        s[i] = c;
        i++;
    }
    s[++i] = '\0';

    printf("%s\n", s);

    return 0;
}