#include <stdio.h>

#define MAX 80



int leLinha(char str[]);

int main()
{
    char str[MAX];
    int i, len;

    len = leLinha(str);
    
    for (i = 0; i < len; ++i)
        putchar(str[i]);
    putchar('\n');

    return 0;
}    


int leLinha(char str[])
{
    int i = 0;
    char c;
    while ((c = getchar()) != EOF && c != '\n' && i < MAX - 1)
        str[i++] = c;
    str[i] = '\0';
    return i;
}