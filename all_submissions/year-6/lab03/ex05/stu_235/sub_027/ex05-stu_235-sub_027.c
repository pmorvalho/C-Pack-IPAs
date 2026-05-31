

#include <stdio.h>

#define ABERTO 1
#define FECHADO 3
int main ()
{
    char c;
    int estado = FECHADO;
    while((c = getchar())!= EOF)
    {
        if (c == '"')
        {
            estado = ABERTO;
            c = getchar();
        }
        while (estado == ABERTO)
        {
            if (c != '\\' && c != '"')
            {
                printf("%c", c);
                c = getchar();
            }
            else if (c == '\\')
            {
                c = getchar();
                printf("%c",c);
                c = getchar();
            }
            else
            {
                printf("\n");
                estado = FECHADO;
            }
        }
    }
    return 0;
}