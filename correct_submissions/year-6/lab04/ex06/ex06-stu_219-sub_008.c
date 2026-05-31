

#include <stdio.h>
#include <string.h>
#define MAX 80

void maiusculas (char s[])
{
    int i, c;

    for (i = 0; (c = getchar()) != '\n' && c != EOF; i++)
        {
            if (c >= 'a' && c <= 'z')
                c = c - 'a' + 'A';

            s[i] = c;
            putchar(c);
        }
    
    printf("\n");
    return;
}

int main ()
{
    char s[MAX];

    maiusculas(s);
    return 0;
}