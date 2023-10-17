
#include <stdio.h>

int main()
{
    int eh_palavra = 0, tem_barra = 0;
    int letra;

    while ((letra = getchar()) != '\n') {
        if (letra == '"' && eh_palavra == 0 && tem_barra == 0) {
            eh_palavra = 1;
            continue;
            
        } else if (letra == '\\') {
            tem_barra = 1;

        } else if (letra == '"' && eh_palavra == 1 && tem_barra == 0) {
            eh_palavra = 0;
            printf("\n");
            continue;
        }

        if (eh_palavra == 1 || tem_barra == 1) {
            tem_barra = 0;
            putchar(letra);
        }
    }

    return 0;
}
