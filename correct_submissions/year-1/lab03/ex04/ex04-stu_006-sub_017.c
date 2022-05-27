#include <stdio.h>


int main()
{
    int c, k = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n')
        {
            if (k == 0) putchar('0');
            k = 0;
        }
        else if (k == 0)
        {
            if (c == '0') continue;
            k = 1;
        }
        putchar(c);
    }
    
    if (k == 0) 
        putchar('0');

    return 0;
}