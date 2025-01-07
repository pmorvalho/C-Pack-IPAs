
#include <stdio.h>

#define Fora 0
#define Dentro 1

int main()
{
    int c;
    int state = Fora;
    while ((c = getchar()) != EOF)
    {
        if (state == Fora && c == '"')
        {
                state = Dentro;
        }

        if (state == Dentro)
        {
            if (c == '"')
            {
                state = Fora;
                printf("\n");
                
            }
            else 
            {
                printf("%c",c);
            }
        }
    }
    return 0;
}