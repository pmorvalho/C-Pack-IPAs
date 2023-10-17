
#include <stdio.h>

int space(c)
{
    return c == ' ' || c == '\n' || c == EOF;
}
int nonzero(int c)
{
    return '1' <= c && c <= '9';
}

enum state
{
    FORA,
    INT,
    DENTRO
};

int main()
{
    enum state st = FORA;
    int current;

    while((current = getchar) != EOF)
    {
        switch(st)
        {
            case FORA:
                if(nonzero(current))
                {
                    st = DENTRO;
                    putchar(current);
                }
                else if(current = '0')
                    st = INT;
                else
                    putchar(current);
                break;

            case INT:
                if(space(current))
                {
                    putchar('0');
                    putchar(current);
                    st = FORA;
                }
                else if(nonzero(current))
                {
                    putchar(current);
                    st = DENTRO;
                }
                break;
            
            case DENTRO:
                putchar(current);
                if(sapce(current))
                    st = FORA;
                break;
        }
    }
    if(st == INT)
        putchar('0');
    
    putchar('\n');
    
    return 0;
}