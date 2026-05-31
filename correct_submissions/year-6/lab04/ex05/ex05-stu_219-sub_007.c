

#include <stdio.h>
#include <string.h>
#define MAX 80

int lelinha (char s[])
{
    int i, c;

    for (i = 0; (c = getchar()) != '\n' && c != EOF; i++)
        {
            s[i] = c;
            putchar(c);
        }
    
    printf("\n");
    return i;
}

int main ()
{
    char s[MAX];

    lelinha(s);
    return 0;
}