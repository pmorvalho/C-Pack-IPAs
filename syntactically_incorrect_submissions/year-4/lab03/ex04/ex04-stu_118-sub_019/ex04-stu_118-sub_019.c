
#include <stdio.h>
int space(int c) {return c == ' ' || c == '\n' || c == EOF; }
int nonzero(int c) {return '1' <= c && c <= '9';}

enum state {Fora, Ini, Dentro};

int main()
{
    enum state st = Fora;
    int atual;

    while ((atual = getchar()) != EOF)
    {
        switch (st)
        {
            case Ini:
            if (space(atual)) 
            {
                putchar(atual);
                st = Fora;
            }
            else if (nonzero(atual))
            {
                st = Dentro;
                putchar(atual);
            }
            else
                putchar(atual);
                st = Fora;
            break;

            case Fora:
            if (nonzero(atual))
            {
                putchar(atual);
                st = Ini;
            }
            else if (atual == '0')
            {
                st = Ini;
            }
            else
                putchar(atual);
            break;

            case Dentro:
            putchar(atual);
            if (space(atual))
                st = Fora;
            break;
        }
    }
    return 0;
}