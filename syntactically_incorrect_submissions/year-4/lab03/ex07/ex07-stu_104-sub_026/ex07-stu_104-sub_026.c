

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    char c;
    int total = 0, dig;
    bool is_number = false;

    while (true)
    {
        if (!is_number)
        {
            is_number = true;
            if (scanf("%d", &dig) != 1)
            {
                return 2;
            }
        }
        else
        {
            c = getchar();

            if (c == '+')
            {
                total += dig;
                is_number = false;
            }
            else if (c == '-')
            {
                total -= dig;
                is_number = false;
            }
            else if (c == EOF)
            {
                total += dig;
                break;
            }
            else if (isblank(c))
            {
                continue;
            }
        }
    }

    printf("%d\n", total);

    return 0;
}