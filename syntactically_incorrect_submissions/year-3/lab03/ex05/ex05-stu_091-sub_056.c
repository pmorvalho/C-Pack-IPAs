
#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main()
{
    int c, estado = FORA;
    
    c = getchar();
    while (c != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\"' || c == '\\')
            estado = DENTRO;
        else
        {
            estado = DENTRO;
            putchar(c);
        }
        c = getchar();
    }
    return 0;
}