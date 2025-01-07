

#include <stdio.h>
#include <stdbool.h>

int main()
{
    char c;
    bool foi_zero = false;
    bool foi_num = false;
    while((c = getchar()) != EOF)
    {
        if (c == " " || c =="\n" || c == "\t" || c == "\v")
        {
            if (foi_zero)
            {
                foi_zero = false;
                putchar('0');
            }
            putchar(c);
            foi_num = false;
        }
        else if (c == '0' && !foi_num)
        {
            foi_zero = true;
        }  else 
        {
            foi_num = true;
            putchar(c);
            foi_zero = false;
        }
    }
    return 0;
}



if (c != 0)
        {
            if (foi_zero)
            {
                foi_zero = false;
                putchar(0);
            }
            putchar(c);
        } else 
        {
            foi_zero = true;
        }