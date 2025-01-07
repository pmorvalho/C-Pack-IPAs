

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{

    char c;
    bool inside = false;

    while ((c = getchar()) != EOF)
    {
        if (isdigit(c) && (inside == false))
        {
            inside = true;
            
            while (c == '0')
            {
                c = getchar();
            }
        }
        else if (!isdigit(c))
        {
            inside = false;
        }

        putchar(c);
    }

    return 0;
}