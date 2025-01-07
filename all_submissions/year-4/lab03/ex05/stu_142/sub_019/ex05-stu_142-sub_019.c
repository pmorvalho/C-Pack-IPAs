

#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    int inside_line = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == 22)
        {
            printf("in\n");
            if (!inside_line)
            {
                inside_line = 1;
            }
            else
            {
                inside_line = 0;
            }
        }
        else
        {
            if (inside_line)
            {
                putchar(c);
            }
            else
            {
                if (isspace(c))
                {
                    putchar('\n');
                }
            }
        }
    }
    return 0;
}