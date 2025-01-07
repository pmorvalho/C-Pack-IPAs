
#include <stdio.h>
#include <ctype.h>

int main()
{
    
    int c = 0, operation = 0;
    
    while ((c = getchar()) != EOF)
    {
        if (c == 43)
        {
            if (operation != 0)
            {
                operation = (c - '0') + operation;
            }
        }
        else if (c == 45)
        {
            if (operation != 0)
            {
                operation = operation - (c - '0');
            }
        }
        else if (!isspace(c))
        {
            operation = (c - '0');
        }
    }
    printf("%d\n", operation);
    return 0;
}