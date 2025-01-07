

#include <stdio.h>

int main()
{
    int c;
    int insideQuotes = 0;

    while ((c = getchar()) != '\n')
    {
        if (c == '"')
        {
            insideQuotes = !insideQuotes; 
        }
        else if (c == '\\' && insideQuotes)
        {
            
            putchar(c);
            c = getchar();
            putchar(c);
        }
        else if (!insideQuotes && c == ' ')
        {
            
            putchar('\n');
        }
        else if (insideQuotes)
        {
            
            putchar(c);
        }
    }
    printf("\n");

    return 0;
}
