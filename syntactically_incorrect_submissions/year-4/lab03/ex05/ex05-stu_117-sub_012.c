
#include <stdio.h>

enum estado {DENTRO, FORA, BARRA};


int main()
{
    int atual;
    enum estado est = FORA;

    while((atual = getchar()) != EOF)
    {
        switch(est)
        {
            case FORA:
                if(atual == '\"')
                {
                    est = DENTRO;
                }
                break;
            case DENTRO:
                if(atual == '\\')
                {
                    est = BARRA;
                }
                else if(atual == '\"')
                {
                    putchar('\n');
                    est = FORA;
                } else {
                    putchar(atual);
                }
                break;
            case BARRA:
                putchar(atual);
                est = DENTRO;
                break;
        }
    }
}