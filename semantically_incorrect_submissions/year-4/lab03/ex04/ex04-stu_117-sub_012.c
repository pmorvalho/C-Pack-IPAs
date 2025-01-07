
#include <stdio.h>

int sec(int c)
{
    return c == ' ' || c == '\n' || c == EOF;
}

int nonzero(int c)
{
    return '1' <= c && c <= '9';
}

enum estado {FORA, DENTRO, INICIO};

int main()
{
    int atual;
    enum estado est = FORA;

    while((atual = getchar()) != EOF)
    {
        switch(est)
        {
            case INICIO:
                if(sec(atual))
                {
                    putchar('0');
                    putchar(atual);
                    est = FORA;
                } else if(nonzero(atual)) {
                    est = DENTRO;
                    putchar(atual);
                }
                break;
            case FORA:
                if(nonzero(atual))
                {
                    putchar(atual);
                    est = DENTRO;
                } else if(atual == '0') {
                    est = INICIO;
                } else {
                    putchar(atual);
                }
                break;
            case DENTRO:
                putchar(atual);
                if(sec(atual))
                    est = FORA;
                break;
        }
    }
    return 0;
}