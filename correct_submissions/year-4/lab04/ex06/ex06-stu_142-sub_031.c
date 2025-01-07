
#include <stdio.h>
#define MAX 80

void maiusculas(char s[])
{
    int index = 0;
    char c;
    while ((c = getchar()) != EOF && c != '\n')
    {
        if (c >= 97)
            c -= 32;
        s[index++] = c;
    }
    s[index] = '\0';
}

int main()
{
    char str[MAX];
    maiusculas(str);
    printf("%s\n", str);
    return 0;
}