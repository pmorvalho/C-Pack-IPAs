
#include <stdio.h>


#define ESPACO 0
#define NUM_VALIDO 1
#define NUM_ZEROFILLED 2

int main()
{
    int c, estado = ESPACO;

    while ((c = getchar()) != EOF)
    {
        if (estado == ESPACO)
        {
            if (c > '0' && c <= '9')
            {
                estado = NUM_VALIDO;
            }
            else if (c == '0')
            {
                estado = NUM_ZEROFILLED;
            }
        }
        else if (estado == NUM_VALIDO)
        {
            if (c < '0' || c > '9')
            {
                printf(" ");
                estado = ESPACO;
            }

        }
        else
        { 
            if (c == ' ' || c == '\t' || c == '\n')
            {
                estado = ESPACO;
                printf("0");
                if (c != EOF && c != '\n') printf(" ");

            } else if (c > '0' && c <= '9')
            {
                estado = NUM_VALIDO;
            }
        }

        if (estado == NUM_VALIDO)
        {
            printf("%c", c);
        }
    }

    printf("\n");

    return 0;
}