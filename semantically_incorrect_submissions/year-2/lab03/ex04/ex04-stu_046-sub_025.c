#include <stdio.h>

int main()
{
    char c, d = ' ';
    
    while((c = getchar()) != EOF)
    {
        if(c == '0')
        {
            if(d == ' ' || d == '\n')
            {
                while(c == '0')
                    c = getchar();
                
                
                if(c == ' ' || c == '\n')
                    putchar('0');
                
                putchar(c);

                d = c;
                continue;
            }

        }
        
        putchar(c);
    }

    return 0;
}