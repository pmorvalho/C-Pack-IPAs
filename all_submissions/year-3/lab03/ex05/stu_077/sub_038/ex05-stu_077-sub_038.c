
#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
    int c, backslash = FALSE, in = FALSE;
    while ((c = getchar()) != EOF)
    {
        if (c == '"')
        {
            if (backslash) {
                putchar(c);
                backslash = FALSE;
            }
            else
            {
                if (in)
                {
                    putchar('\n');
                    in = FALSE;
                }
                else
                    in = TRUE;
            }
        }
        else if (c == '\\')
        {
            if (backslash) {
                putchar(c);
                backslash = FALSE;
            }
            else 
                backslash = TRUE;
        }
        else
            if (in)
                putchar(c);
    }
    return 0;
}