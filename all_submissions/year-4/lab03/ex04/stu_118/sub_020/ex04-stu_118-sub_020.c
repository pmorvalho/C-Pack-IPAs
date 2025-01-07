
#include <stdio.h>
int space(int c) {return c == ' ' || c == '\n' || c == EOF; }
int nonzero(int c) {return '1' <= c && c <= '9';}

enum state {Fora, Zero, Dentro};

int main()
{
    enum state st = Fora;
    int atual;

    while ((atual = getchar()) != EOF)
    {
        switch (st)
        {
            case Zero:
                if (nonzero(atual))
                    putchar(atual), st = Dentro;
                
                else if (space(atual)){
                    putchar('0');
                    putchar(atual);
                    st = Fora;
                }
                break;
            
            case Fora:
                if (nonzero(atual)) {
                    putchar(atual);
                    st = Dentro;
                }
                else if (atual == '0') {
                    st = Zero;
                }
                else 
                    putchar(atual);
                break;

            case Dentro:
                if (space(atual))
                    st = Fora;
                putchar(atual);
                    
        }
    }
    return 0;
}