
#include <stdio.h>
#include <ctype.h>

int main()
{
    long c;
    int in_word = 0;
    int last_zero = 0;
    while ((c = getchar()) != EOF)
    {
        if (isspace(c))
        {
            if (last_zero)
            {
                putchar('0');
                last_zero = 0;
            }
            else
            {
                last_zero = 0;
            }
            in_word = 0;
            putchar(c);
        }
        else
        {
            if (!in_word)
            {
                in_word = 1;
                if (c == '0')
                {
                    in_word = 0;
                    last_zero = 1;
                }
                else
                {
                    putchar(c);
                    last_zero = 0;
                }
            }
            else
            {
                putchar(c);
                last_zero = 0;
            }
        }
    };
    return 0;
}