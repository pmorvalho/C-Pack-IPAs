
#include <stdio.h>
#define OUT 0
#define IN 1

int main()
{
    int c, state = OUT;

    while((c = getchar()) != EOF)
    {
        if (c == ' ')
            if (state == IN)
                putchar(c);
            else if (state == OUT)
            {
                continue;
            }
        if (c == '"')
            if (state == IN)
                putchar('\n');
            else 
            {
                state = IN;
            }
        else
        {
            putchar(c);
        }
    }
}