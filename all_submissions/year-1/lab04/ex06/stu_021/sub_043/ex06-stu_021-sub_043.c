#include <stdio.h>

#define MAX 80



int leLinha(char str[]);

void maiusculas(char s[]);

int main()
{
    char str[MAX];
    int i, len;

    len = leLinha(str);
    maiusculas(str);
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

void maiusculas(char str[])
{
    int i = 0, t = 'a'-'A';
    
    while (str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - t;
        }
        i++;
    }
}
