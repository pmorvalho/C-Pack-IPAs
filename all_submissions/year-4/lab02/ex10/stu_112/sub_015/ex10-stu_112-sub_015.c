
#include <stdio.h>

int main()
{
    int c,soma = 0, digito;
    long digitos = 0;

    c = getchar();


    while (c != '\n')
    {   
        digito = c - '0';
        soma += digito;
        c = getchar();
        ++digitos;
        
    }
    printf("%ld\n%d\n", digitos, soma);

}