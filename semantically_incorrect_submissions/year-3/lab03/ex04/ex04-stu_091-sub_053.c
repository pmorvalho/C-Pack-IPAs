
#include <stdio.h>

int main()
{
    int c = getchar(), num, i = 0;

    while (c != EOF)
    {
        num = c;
        while (c != 0)
        {
            num %= 10;
            c /= 10;
            if (c == 0 && num == 0)
            {
                c = 0;
                putchar(c);
            }
            else
            {
                i += (num*10);
            }
        }
        printf("%d",i);
        c = getchar();
    }
    return 0;
}