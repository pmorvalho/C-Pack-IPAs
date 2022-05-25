#include <stdio.h>

void putchar_aux(char c)
{
    if(c != EOF)
        putchar(c);
}

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
                                
                if(c == ' ' || c == '\n' || c == EOF)
                    putchar_aux('0');
                
                putchar_aux(c);

                d = c;
                continue;
            }

        }
        d = c;
        putchar_aux(c);
    }

    return 0;
}