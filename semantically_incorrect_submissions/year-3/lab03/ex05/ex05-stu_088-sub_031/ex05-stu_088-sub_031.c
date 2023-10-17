
#include <stdio.h>

int aspas(int c)
{
    return c == '"';
}

int barra(int c)
{
    return c == '\\';
}

int carater(int c)
{
    return c != '\\' && c != '"';
}

enum estado
{
    FORA,
    DENTRO,
    INTERMEDIO
};


int main()
{
    enum estado es = FORA;
    int c;

    while((c = getchar()) != '\n')
    {
        switch(es)
        {
            case FORA:
                if(aspas(c))
                    es = INTERMEDIO;
                break;
            
            case INTERMEDIO:
                if(aspas(c))
                {
                    es = FORA;
                    putchar('\n');
                }
                else if(carater(c))
                {
                    es = DENTRO;
                    putchar(c);
                }
                else
                {
                    es = DENTRO;
                    c = getchar();
                    putchar(c);
                }
                break;
            
            case DENTRO:
                if(aspas(c))
                {
                    es = FORA;
                    putchar('\n');
                }
                else if(carater(c))
                    putchar(c);
                
                else
                {
                    c = getchar();
                    putchar(c);
                }
                break;
        }
    }

    return 0;
}