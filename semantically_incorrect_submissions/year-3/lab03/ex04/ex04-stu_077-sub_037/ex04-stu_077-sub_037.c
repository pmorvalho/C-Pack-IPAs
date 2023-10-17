
#include <stdio.h>
#define FALSE 0
#define TRUE 1

int main()
{
    int c;
    int flag = FALSE;
    c = getchar();
    while (c != EOF) 
    {
        if ((c == '\n') || (c == ' '))
        {
            if (flag == FALSE)
            {
                putchar('0');
                putchar(c);
            }
            else
            {
                flag = FALSE;
                putchar(c);
            }
        }
        else if (c == '0')
        {
            if (flag == TRUE)
                putchar(c);
        }
        else
        {
            putchar(c);
            flag = TRUE;
        }
        c = getchar();
    }
    return 0;
}