
#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main()
{
    int num = 0, estado = FORA;
    char s;
    
    while ((s = getchar()) != EOF)
    {
        if (s == '"')
        {    
            estado = DENTRO;
            num ++;      
            if (num % 2 == 0)
            {    
                estado = FORA;
                printf("\n");
            }
        }
        if (s != '"' && estado == DENTRO)
            putchar(s);
    }
    return 0;
}