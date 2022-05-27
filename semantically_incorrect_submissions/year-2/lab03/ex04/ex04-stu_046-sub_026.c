#include <stdio.h>

int main()
{
    char c;
    
    while((c = getchar()) != EOF)
    {
        if(c == ' ')
        {
            putchar(' ');
            c = getchar();

            while(c == '0')
                c = getchar();
            
            if(c == ' ')
                putchar('0');

            putchar(c);
        }

        else
            putchar(c);
    }

    return 0;
}