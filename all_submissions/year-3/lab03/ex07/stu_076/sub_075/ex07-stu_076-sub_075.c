
#include <stdio.h>
#include <string.h>

#define VECMAX 100
#define DENTRO 1
#define FORA 0
#define MAIS 1
#define MENOS 0

int main()
{
    int soma = 0, soma_final = 0, i, estado = DENTRO, operador = MAIS;
    char num[VECMAX];

    fgets(num, sizeof(num), stdin);

    for (i = 0; (unsigned)i < strlen(num); i++)
    {
        if (estado == DENTRO)
        {
            if (num[i] >= '0' && num[i] <= '9')
            {
                soma *= 10;
                soma += (num[i] - '0');
            }
            else
            {
                estado = FORA;
                if (operador == MAIS)
                {
                    soma_final += soma;
                }
                else
                {
                    soma_final -= soma;
                }
                soma = 0;
            }
        }
        else if (num[i] == '+')
        {
            operador = MAIS;
        }
        else if (num[i] == '-')
        {
            operador = MENOS;
        }
        else if (num[i] == ' ')
        {
            estado = DENTRO;
        }
        else if (num[i] == '\n')
        {
            break;
        }
    }

    printf("%d\n", soma_final);

    return 0;
}
