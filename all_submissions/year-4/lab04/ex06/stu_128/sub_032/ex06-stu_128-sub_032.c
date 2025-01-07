
#include <stdio.h>
#include <string.h>

#define DIM 100
void maiusculas(char s[])
{
    int n = strlen(s);
    for (int i=0;i<n;i++)
    {
        char c = s[i];
        if (c >= 97 && c <= 122)
        {
            c = c - 32;
        }
        putchar(c);
    }
    printf("\n");
}

int main()
{
    char c;
    char s[DIM];
    int i = 0;
    while ((c=getchar())!= EOF && c!= '\n')
    {
        s[i]= c;
        i++;
    }
    s[i]= '\0';
    maiusculas(s);
    return 0;
}