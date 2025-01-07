
#include <stdio.h>
#include <ctype.h>

int main()
{
    long c;
    int in_word = 0;
    while ((c = getchar()) != EOF)
    {
        if (isspace(c))
        {
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
                }
                else
                {
                    putchar(c);
                }
            }
            else
            {
                putchar(c);
            }
        }
    };
    return 0;
}