
#include <stdio.h>

#define READINGNUM 1
#define NOT_READINGNUM 0

int main()
{
    int currChar, nextChar, state = NOT_READINGNUM;

    currChar = getchar();
    nextChar = getchar();

    while (currChar != EOF)
    {

        if ((currChar >= '1') && (currChar <= '9'))
        {

            putchar(currChar);
            state = READINGNUM;
        }
        else
        {

            if (currChar == '0')
            {

                if (state == READINGNUM)
                {
                    putchar('0');
                }
                else
                {
                    if ((nextChar < '0') | (nextChar > '9'))
                    {
                        putchar('0');
                        if (nextChar != EOF)
                        {
                            putchar(' ');
                        }
                    }
                }
            }
            else
            {
                if ((nextChar != EOF) && (state == READINGNUM))
                {
                    putchar(currChar);
                }
                state = NOT_READINGNUM;
            }
        }

        currChar = nextChar;
        nextChar = getchar();
    }

    putchar('\n');

    return 0;
}