

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    int c;
    int total = 0, dig, operation = -1;
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

            switch (operation)
            {
            
            case EOF:
                total = dig;
                break;
            
            case 0:
                total += dig;
                break;
            
            case 1:
                total -= dig;
                break;
            }
        }
        else
        {
            c = getchar();

            if (c == '+')
            {
                operation = 0;
                is_number = false;
            }
            else if (c == '-')
            {
                operation = 1;
                is_number = false;
            }
            else if (c == EOF)
            {
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