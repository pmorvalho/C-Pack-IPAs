
#include <stdio.h>

int main()
{
    
    int r = 0, n = 0, s = 1, c;

    
    while ((c = getchar()) != '\n' && c != EOF)
    {
        if ((unsigned)(c - '0') < 10) 
        {
            
            n = n * 10 + (c & 15);
        }
        else if (c == '+' || c == '-')
        {
            
            r += s * n;
            n = 0;
            s = 44 - c; 
        }
    }

    
    return printf("%d\n", r + s * n), 0;
}