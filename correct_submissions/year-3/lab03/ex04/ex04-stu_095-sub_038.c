

#include <stdio.h>
int spc(int c)
{
    return c==' ' || c=='\n' || c==EOF;
}

int nonzero (int c)
{
    return c>='1' && c<='9';
}

enum state {FORA, INI, DENTRO};

int main ()
{
    enum state st=FORA;
    int c;
    while ((c=getchar())!=EOF)
    {
        switch(st)
        {
            case FORA:
                if (nonzero(c))
                {
                    putchar (c);
                    st=DENTRO;
                }
                else if (c=='0')
                {
                    st=INI;
                }
                else
                {
                    putchar (c);
                }
                break;
            case INI:
                if (spc(c))
                {
                    putchar ('0');
                    putchar (' ');
                    st=FORA;
                }
                else if (nonzero(c))
                {
                    putchar (c);
                    st=DENTRO;
                }
                break;
            case DENTRO:
                putchar (c);
                if (spc(c))
                {
                    st=FORA;
                }
                break;
        }
    }
    if (st==INI)
    putchar('0');
    return 0;
}
